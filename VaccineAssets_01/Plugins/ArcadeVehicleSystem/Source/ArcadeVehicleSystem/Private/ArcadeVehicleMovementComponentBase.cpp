/** Created and owned by Furious Production @ Michal Kolodziej. **/

#include "ArcadeVehicleMovementComponentBase.h"
#include "ArcadeVehiclePathFollowingComponent.h"
#include "Net/UnrealNetwork.h"

DEFINE_LOG_CATEGORY(LogArcadeVehicleMovement);

UArcadeVehicleMovementComponentBase::UArcadeVehicleMovementComponentBase()
{
	/* Allow replication. */
	SetIsReplicatedByDefault(true);

	/* Setup ticking rules. */
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = ETickingGroup::TG_PrePhysics;

	/* External data. */
	SetAccelerationInput(0.f);
	SetTurningInput(0.f);
	SetDriftInput(false);
	SetStabilizationInput(false);
	MaxSpeedMultiplier = 1.f;

	/* Internal data. */
	m_bIsVehicleInitialized = false;
	m_bHasValidPhysicsState = false;
	m_bIsAccelerating = false;
	m_bIsBraking = false;
	m_bIsEngineBraking = false;
	m_bBlockAcceleration = false;
	m_lastAppliedAcceleration = 0.f;
	m_lastAppliedBraking = 0.f;
	m_physicsUpdateTimer = 0.f;
	m_mutablePhysicsUpdateInterval = Settings.Physics.PhysicsUpdateInterval;
	m_locationError = FVector::ZeroVector;
	m_rotationError = FQuat::Identity;
	m_bIsCorrectingLocationError = false;
	m_bIsCorrectingRotationError = false;
	m_bIsReplayingState = false;
}

void UArcadeVehicleMovementComponentBase::BeginPlay()
{
	Super::BeginPlay();

	/* Temporarily disable ticking. */
	SetComponentTickEnabled(false);
	
	/* Register suspension springs if previous initialization was successful. */
	if(InitializeVehicleMovement())
	{
		m_bIsVehicleInitialized = RegisterSuspensionSprings();
	}

	/* Re-enable ticking. It will automatically keep it false if the vehicle is not initialized properly. */
	SetComponentTickEnabled(true);
}

void UArcadeVehicleMovementComponentBase::SetComponentTickEnabled(bool bEnabled)
{
	/* Overriden. Must be initialized to allow ticking at any point in time. */
	Super::SetComponentTickEnabled(m_bIsVehicleInitialized && bEnabled);
}

void UArcadeVehicleMovementComponentBase::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	/* Skip any sort of physics calculations as soon as the physics is disabled. */
	if (!m_pMesh->IsSimulatingPhysics())
	{
		return;
	}

	/* Calculate all states based on the previous frame calculations. */
	CalculateStates();

	/* Apply suspension calculations each frame. */
	CalculateSuspension(DeltaTime);

	/* Calculate physics simulation timer this frame. */
	m_physicsUpdateTimer += DeltaTime;
	if (m_physicsUpdateTimer >= m_mutablePhysicsUpdateInterval)
	{
		/* Cache time elapsed since last physics update. */
		const float physicsDeltaTime = m_physicsUpdateTimer;

		/* Leave time left for the next physics update. */
		m_physicsUpdateTimer -= m_mutablePhysicsUpdateInterval;

		/* Tick physics now. */
		TickPhysics(physicsDeltaTime);

		/* Mark as having valid physics. */
		m_bHasValidPhysicsState = true;
	}
	/* Below calculations can only be done when has valid physics state. */
	else if(m_bHasValidPhysicsState)
	{
		/* Calculate PhysicsUpdateInterval-based delta time. */
		float updateBasedDeltaTime = DeltaTime / m_mutablePhysicsUpdateInterval;

		/* Tick between physics, accurate networked interpolation that is nearly deterministic. */
		TickBetweenPhysics(updateBasedDeltaTime, DeltaTime);
		
		/* Apply stabilizing if enabled obviously. */
		if (m_runtimeState.IsStabilizing())
		{		
			Settings.Physics.AngularVelocity.X = m_pMesh->GetComponentRotation().Roll * Settings.Physics.StabilizationForce * updateBasedDeltaTime;
			Settings.Physics.AngularVelocity.Y = m_pMesh->GetComponentRotation().Pitch * Settings.Physics.StabilizationForce * updateBasedDeltaTime;
			m_pMesh->SetPhysicsAngularVelocityInDegrees(Settings.Physics.AngularVelocity);
		}
	}

	/* If locally controlled, always mark for camera updates, so we get net relevancy to work properly. */
	if (GetPawnOwner()->IsLocallyControlled())
	{
		MarkForClientCameraUpdate();
	}
}

void UArcadeVehicleMovementComponentBase::RequestPathMove(const FVector& MoveInput)
{
	/* Prepare acceleration and turning. */
	const float accelDot = FMath::Clamp(
		FVector::DotProduct(m_pMesh->GetForwardVector(), MoveInput), 0.f, 1.f);
	
	const float turnDot = FMath::Clamp(
		FVector::DotProduct(m_pMesh->GetRightVector(), MoveInput), -1.f, 1.f);

	/* Apply acceleration and turning inputs. */
	SetAccelerationInput(accelDot);
	SetTurningInput(turnDot);
}

const FVehicleSettings& UArcadeVehicleMovementComponentBase::GetVehicleSettings() const
{
	return Settings;
}

const FVehiclePhysicsState& UArcadeVehicleMovementComponentBase::GetCurrentState() const
{
	return m_runtimeState;
}

float UArcadeVehicleMovementComponentBase::GetTurningInput()
{
	return m_runtimeState.TurningInput.ToFloat();
}

float UArcadeVehicleMovementComponentBase::GetCurrentSpeed()
{
	return Settings.Engine.CurrentSpeed;
}

float UArcadeVehicleMovementComponentBase::GetCurrentSpeedAbsolute()
{
	return FMath::Abs(Settings.Engine.CurrentSpeed);
}

float UArcadeVehicleMovementComponentBase::GetCurrentSpeedUnit()
{
	return Settings.Engine.CurrentSpeedUnit;
}

float UArcadeVehicleMovementComponentBase::GetLastAppliedAcceleration()
{
	return m_lastAppliedAcceleration;
}

float UArcadeVehicleMovementComponentBase::GetLastAppliedBraking()
{
	 return m_lastAppliedBraking;
}

void UArcadeVehicleMovementComponentBase::SetMaxSpeedMultiplier(const float NewMaxSpeedMultiplier)
{
	MaxSpeedMultiplier = NewMaxSpeedMultiplier;
}

float UArcadeVehicleMovementComponentBase::GetMaxSpeedMultiplier()
{
	return MaxSpeedMultiplier;
}

void UArcadeVehicleMovementComponentBase::SetAccelerationInput(const float Value)
{
	AccelerationInput = FMath::Clamp(Value, -1.f, 1.f);
}

void UArcadeVehicleMovementComponentBase::SetTurningInput(const float Value)
{
	TurningInput = FMath::Clamp(Value, -1.f, 1.f);
}

void UArcadeVehicleMovementComponentBase::SetDriftInput(const bool EnableDrift)
{
	DriftInput = EnableDrift;
}

void UArcadeVehicleMovementComponentBase::SetStabilizationInput(const bool EnableStabilization)
{
	StabilizationInput = EnableStabilization;
}

bool UArcadeVehicleMovementComponentBase::IsAccelerating()
{
	return m_bIsAccelerating;
}

bool UArcadeVehicleMovementComponentBase::IsMovingForward()
{
	return GetCurrentSpeed() > Settings.Physics.MovementDirectionTolerance;
}

bool UArcadeVehicleMovementComponentBase::IsMovingBackward()
{
	return GetCurrentSpeed() < -Settings.Physics.MovementDirectionTolerance;
}

bool UArcadeVehicleMovementComponentBase::IsMovingAtAll()
{
	return IsMovingForward() || IsMovingBackward();
}

bool UArcadeVehicleMovementComponentBase::IsBraking()
{
	return m_bIsBraking;
}

bool UArcadeVehicleMovementComponentBase::IsEngineBraking()
{
	return m_bIsEngineBraking;
}

void UArcadeVehicleMovementComponentBase::TeleportVehicle(const FTransform& Transform)
{
	/* Clear physics state and inputs. */
	ClearNetworkData();
	
	/* Teleport owner. */
	GetOwner()->TeleportTo(Transform.GetLocation(), Transform.GetRotation().Rotator());
}

void UArcadeVehicleMovementComponentBase::SetVehicleLinearVelocity(const FVector& LinearVelocity, const bool WorldSpace /*= false*/)
{
	/* Handle world space. */
	if (WorldSpace)
	{
		m_pMesh->SetPhysicsLinearVelocity(LinearVelocity);
	}
	/* Handle local space. */
	else
	{
		const FVector velocityWorldSpace = m_pMesh->GetComponentTransform().TransformVectorNoScale(LinearVelocity);
		m_pMesh->SetPhysicsLinearVelocity(velocityWorldSpace);
	}
}

float UArcadeVehicleMovementComponentBase::GetWheelOffset(int32 Index)
{
	if (!Settings.Suspension.Springs.IsValidIndex(Index))
	{
		return 0.f;
	}

	return Settings.Suspension.Springs[Index].WheelOffset;
}

void UArcadeVehicleMovementComponentBase::SetBlockAcceleration(bool Block)
{
	m_bBlockAcceleration = Block;
}

UPrimitiveComponent* UArcadeVehicleMovementComponentBase::GetVehicleMesh() const
{
	return m_pMesh;
}

void UArcadeVehicleMovementComponentBase::ClearNetworkData()
{
	/* Clear physics state and inputs. */
	ClearInputs();
	m_states.Empty();
	m_bIsReplayingState = false;
	m_physicsUpdateTimer = 0.f;
	m_mutablePhysicsUpdateInterval = Settings.Physics.PhysicsUpdateInterval;
	m_runtimeState = FVehiclePhysicsState();
	m_lastDispatchedState = FVehiclePhysicsState();
	m_bHasValidPhysicsState = false;
	m_bIsCorrectingLocationError = false;
	m_bIsCorrectingRotationError = false;
	m_locationError = FVector::ZeroVector;
	m_rotationError = FQuat::Identity;
	Settings.Physics.HasLastTotalFriction = false;
}

void UArcadeVehicleMovementComponentBase::ClearInputs()
{
	SetAccelerationInput(0.f);
	SetTurningInput(0.f);
	SetDriftInput(false);
	SetStabilizationInput(false);
}

UArcadeVehiclePathFollowingComponent* UArcadeVehicleMovementComponentBase::GetPathFollowingComponent()
{
	if (!IsValid(m_pPathFollowingComponent))
	{
		m_pPathFollowingComponent = Cast<UArcadeVehiclePathFollowingComponent>(GetPathFollowingAgent());
	}

	return m_pPathFollowingComponent;
}

void UArcadeVehicleMovementComponentBase::TickPhysics(float DeltaTime)
{
	/* Clear runtime physics values. */
	const FVehiclePhysicsState lastPhysicsState = m_runtimeState;
	m_runtimeState = FVehiclePhysicsState();
	m_runtimeState.FrameNumber = lastPhysicsState.FrameNumber;

	/* 
		Check if the vehicle should be controlled by this instance.
		Control is taken by controller, or if not controlled, then by the host.
	*/
	const bool bHasControlOverVehicle = (GetPawnOwner()->IsPawnControlled() && GetPawnOwner()->IsLocallyControlled()) || (!GetPawnOwner()->IsPawnControlled() && GetPawnOwner()->HasAuthority());

	/* Whoever should control this vehicle, whether it be controlling client of server, it will have authority over the inputs. */
	if (bHasControlOverVehicle)
	{
		/* Initially grab the braking forces in case we would use them. */
		Settings.Engine.ConstantBrakingForce = Settings.Engine.BrakingCurve->GetFloatValue(GetCurrentSpeedAbsolute());
		Settings.Engine.ConstantEngineBrakingForce = Settings.Engine.EngineBrakingCurve->GetFloatValue(GetCurrentSpeedAbsolute());

		/* Any kinds of inputs can specifically be done on controller side and nowhere else. */
		if(GetPawnOwner()->IsLocallyControlled())
		{
			/* Calculate acceleration delta to be applied until the next physics tick. That is either reversing or accelerating. */
			/* Blocking acceleration is done at the controller side, so we don't interfere physics stepping in the middle. */
			if(!m_bBlockAcceleration)
			{ 
				if (AccelerationInput > 0.f)
				{
					m_runtimeState.AccelerationRotationDelta.X = Settings.Engine.AccelerationCurve->GetFloatValue(GetCurrentSpeedAbsolute()) * AccelerationInput;
				}
				else if (AccelerationInput < 0.f)
				{
					m_runtimeState.AccelerationRotationDelta.X = Settings.Engine.ReversingCurve->GetFloatValue(GetCurrentSpeedAbsolute()) * AccelerationInput;
				}
			}

			/* Check if previous state rotation was zero(close enough to be zero. */
			const bool bIsLastStateZeroRotation = FMath::IsNearlyZero(lastPhysicsState.AccelerationRotationDelta.Y, 0.2f);

			/* If the turning input is zero. */
			if (TurningInput == 0.f)
			{
				/* If previous state actually had rotation delta that isn't 0. */
				if (!bIsLastStateZeroRotation)
				{
					/* As a part of the damping pipeline, apply just a fraction of the previous rotation, and do not apply it immediately. */
					m_runtimeState.AccelerationRotationDelta.Y = FMath::Lerp(0.f, lastPhysicsState.AccelerationRotationDelta.Y, Settings.Steering.SteeringDamping);
				}
			}
			/* If the input isn't zero, we will handle both delta directions. */
			else
			{			
				/* Calculate current rotation delta for this state. */
				m_runtimeState.AccelerationRotationDelta.Y = Settings.Steering.SteeringCurve->GetFloatValue(GetCurrentSpeedAbsolute()) * TurningInput;

				/* Inverse rotation delta if vehicle is moving backwards or not moving at all. */
				if (IsMovingBackward())
				{
					m_runtimeState.AccelerationRotationDelta.Y *= -1.f;
				}

				/* If previous state was indeed zero, or if it wasn't, but previous delta was opposite direction. */
				if (bIsLastStateZeroRotation)
				{
					/* In this scenario, we will make sure to damp the new rotation delta a little bit, so it doesn't go to hard. */
					m_runtimeState.AccelerationRotationDelta.Y = FMath::Lerp(m_runtimeState.AccelerationRotationDelta.Y, 0.f, Settings.Steering.SteeringDamping);
				}
				else if(FMath::Sign(TurningInput) != FMath::Sign(lastPhysicsState.AccelerationRotationDelta.Y))
				{
					m_runtimeState.AccelerationRotationDelta.Y = FMath::Lerp(m_runtimeState.AccelerationRotationDelta.Y, lastPhysicsState.AccelerationRotationDelta.Y, Settings.Steering.SteeringDamping);
				}
				/* If previous delta rotation is valid, and it's the same direction. */
				else
				{
					m_runtimeState.AccelerationRotationDelta.Y = FMath::Lerp(m_runtimeState.AccelerationRotationDelta.Y, lastPhysicsState.AccelerationRotationDelta.Y, Settings.Steering.SteeringDamping);
				}
			}
		}
		/* At this point if we are not controlling this vehicle. */
		else
		{
			/*
				Why we clear inputs here? Because owner of this is pawn, and it can get unpossessed, but we do not want to force users
				to use specialized pawn class. Instead we want them to freely use the component, which doesn't have UnPossess capability.
				So whenever the vehicle is not controlled by us, we will clear all inputs. This is to disallow it from keeping running when someone
				unpossessed it. Even be it the host.
			*/
			ClearInputs();
		}

		/* Build runtime values. */
		m_runtimeState.Location = m_pMesh->GetComponentLocation();
		m_runtimeState.Rotation = m_pMesh->GetComponentRotation();
		m_runtimeState.LinearVelocity = m_pMesh->GetPhysicsLinearVelocity();
		m_runtimeState.AngularVelocity = m_pMesh->GetPhysicsAngularVelocityInDegrees();
		m_runtimeState.SetIsDrifting(DriftInput && GetCurrentSpeedAbsolute() >= Settings.Steering.DriftMinSpeed);
		m_runtimeState.SetIsStabilizing(StabilizationInput);
		m_runtimeState.TurningInput = TurningInput;

		/* Bump up frame index. */
		m_runtimeState.FrameNumber++;

		/* Send latest state. */
		OnReceiveState_Server(m_runtimeState);
	}
	/* Apply from state. */
	else
	{		
		/* Just for the future safety, clear the inputs on this side as well. This function is free. */
		ClearInputs();

		/* Try pulling out the oldest state from the buffer. */
		FVehiclePhysicsState stateToDispatch;
		const bool bHasStateToDispatch = m_states.PullState(stateToDispatch);

		/* If the state to dispatch is not valid. */
		if (!bHasStateToDispatch)
		{
			/* Replay latest known state if it is in some way valid. */
			if (m_lastDispatchedState.IsStateValid())
			{
				/* Mark state as replaying. */
				m_bIsReplayingState = true;

				/* This is runtime state now. */
				m_runtimeState = m_lastDispatchedState;

				/* Evaluate timing. */
				EvaluatePhysicsPaceIncrease();
			}
		}
		/* If there was valid state to pick upon. */
		else
		{
			/* Dispatch state pulled out. */
			DispatchState(stateToDispatch);
		}
	}
}

void UArcadeVehicleMovementComponentBase::TickBetweenPhysics(float UpdateBasedDeltaTime, float RegularDeltaTime)
{
	/* At the beginning of the frame, calculate physics corrections. */
	CalculatePhysicsCorrections(UpdateBasedDeltaTime);

	/* Then we will calculate physics step for this frame. */
	CalculatePhysicsStep(UpdateBasedDeltaTime);
}

void UArcadeVehicleMovementComponentBase::EvaluatePhysicsPaceIncrease()
{
	/* If there are no states, put at default. */
	if (m_states.Num() < 2)
	{
		m_mutablePhysicsUpdateInterval = Settings.Physics.PhysicsUpdateInterval;
		return;
	}

	/* Find the ticket difference. */
	const uint32 ticketDifference = m_states.LastFrame() - m_states.FirstFrame();

	float physicsPaceIncrease = 1.f;
	if (ticketDifference > 2)
	{
		/* Increase timing by 10% for each state we run behind. */
		physicsPaceIncrease = 1.f - ((float)ticketDifference * Settings.Physics.PhysicsPerStatePaceIncrease);
	}

	/* Apply new mutable timing. */
	m_mutablePhysicsUpdateInterval = Settings.Physics.PhysicsUpdateInterval * physicsPaceIncrease;
}

void UArcadeVehicleMovementComponentBase::DispatchState(const FVehiclePhysicsState& State)
{
	/* Unmark replaying state. */
	m_bIsReplayingState = false;

	/* This is runtime and last dispatched state now. */
	m_runtimeState = m_lastDispatchedState = State;

	/* Assign correction flags. */
	const float locationDistance = FVector::Dist(m_pMesh->GetComponentLocation(), m_runtimeState.Location);
	const float rotationDistance = m_pMesh->GetComponentRotation().Quaternion().AngularDistance(m_runtimeState.Rotation.Quaternion());
	m_bIsCorrectingLocationError = locationDistance < Settings.Physics.PhysicsLocationErrorTolerance && locationDistance > 1.f;
	m_bIsCorrectingRotationError = rotationDistance < Settings.Physics.PhysicsRotationErrorTolerance && rotationDistance > 0.01f;

	/* Calculate error corrections if apply. */
	if (m_bIsCorrectingLocationError)
	{
		m_locationError = m_runtimeState.Location - m_pMesh->GetComponentLocation();
	}
	if (m_bIsCorrectingRotationError)
	{
		m_rotationError = m_pMesh->GetComponentRotation().GetInverse().Quaternion() * m_runtimeState.Rotation.Quaternion();
	}

	/* Choose values to snap hard if any. */
	if(!m_bIsCorrectingLocationError || !m_bIsCorrectingRotationError)
	{
		const FVector snapLocation = m_bIsCorrectingLocationError ? m_pMesh->GetComponentLocation() : m_runtimeState.Location;
		const FRotator snapRotation = m_bIsCorrectingRotationError ? m_pMesh->GetComponentRotation() : m_runtimeState.Rotation;
		GetOwner()->TeleportTo(snapLocation, snapRotation);
	}

	/* Apply initial linear and angular velocity. */
	m_pMesh->SetPhysicsLinearVelocity(m_runtimeState.LinearVelocity);
	m_pMesh->SetPhysicsAngularVelocityInDegrees(m_runtimeState.AngularVelocity);

	/* Calculate states, so we are up-to-date before initial dispatch. */
	CalculateStates();

	/* Update braking forces, they are updated from the speed, and remain unchanged whole physics cycle. */
	Settings.Engine.ConstantBrakingForce = Settings.Engine.BrakingCurve->GetFloatValue(GetCurrentSpeedAbsolute());
	Settings.Engine.ConstantEngineBrakingForce = Settings.Engine.EngineBrakingCurve->GetFloatValue(GetCurrentSpeedAbsolute());

	/* Evaluate timing. */
	EvaluatePhysicsPaceIncrease();
}

bool UArcadeVehicleMovementComponentBase::InitializeVehicleMovement()
{
	/* Find out primitive component from the root of the owner. */
	m_pMesh = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());

	/* Validate all the data and if not valid, disable ticking immediately. */
	if (!IsValid(m_pMesh))
	{
		UE_LOG(LogArcadeVehicleMovement, Error, TEXT("Vehicle root component is not UPrimitiveComponent! Use Static or Skeletal mesh for the root!"));
		return false;
	}
	if (!IsValid(Settings.Engine.AccelerationCurve))
	{
		UE_LOG(LogArcadeVehicleMovement, Error, TEXT("Vehicle does not have valid acceleration curve assigned!"));
		return false;
	}
	if (!IsValid(Settings.Engine.ReversingCurve))
	{
		UE_LOG(LogArcadeVehicleMovement, Error, TEXT("Vehicle does not have valid reversing curve assigned!"));
		return false;
	}
	if (!IsValid(Settings.Engine.EngineBrakingCurve))
	{
		UE_LOG(LogArcadeVehicleMovement, Error, TEXT("Vehicle does not have valid engine braking curve assigned!"));
		return false;
	}
	if (!IsValid(Settings.Engine.BrakingCurve))
	{
		UE_LOG(LogArcadeVehicleMovement, Error, TEXT("Vehicle does not have valid braking curve assigned!"));
		return false;
	}
	if (!IsValid(Settings.Steering.SteeringCurve))
	{
		UE_LOG(LogArcadeVehicleMovement, Error, TEXT("Vehicle does not have valid steering curve assigned!"));
		return false;
	}

	/* Set the mutable physics timer once again. */
	m_mutablePhysicsUpdateInterval = Settings.Physics.PhysicsUpdateInterval;
	
	/* Initially successful. */
	return true;
}

bool UArcadeVehicleMovementComponentBase::RegisterSuspensionSprings()
{
	UE_LOG(LogArcadeVehicleMovement, Error, TEXT("RegisterSuspensionSprings method is not overridden!"));
	return false;
}

void UArcadeVehicleMovementComponentBase::CalculateStates()
{
	/* Calculate global value of the local linear velocity of this vehicle. */
	Settings.Physics.LocalLinearVelocity = m_pMesh->GetComponentTransform().InverseTransformVectorNoScale(m_pMesh->GetPhysicsLinearVelocity());

	/* Calculate global value of the angular velocity of this vehicle. */
	Settings.Physics.AngularVelocity = m_pMesh->GetPhysicsAngularVelocityInDegrees();

	/* Calculate current speed in km/h. 0.036f is multiplied because of m/s conversion. */
	Settings.Engine.CurrentSpeed = Settings.Physics.LocalLinearVelocity.X * KMH_MULTIPLIER;

	/* Calculate speed unit depending on direction. */
	Settings.Engine.CurrentSpeedUnit = 0.f;
	if (IsMovingForward())
	{
		Settings.Engine.CurrentSpeedUnit = FMath::Clamp(GetCurrentSpeedAbsolute() / (Settings.Engine.MaxSpeed * MaxSpeedMultiplier), 0.f, 1.f);
	}
	else if (IsMovingBackward())
	{
		Settings.Engine.CurrentSpeedUnit = FMath::Clamp(GetCurrentSpeedAbsolute() / Settings.Engine.MaxReverseSpeed, 0.f, 1.f);
	}
}

void UArcadeVehicleMovementComponentBase::GetWheelsBaseTransform(FTransform& OutTransform) const
{
	OutTransform = m_pMesh->GetComponentTransform();
}

void UArcadeVehicleMovementComponentBase::CalculateSuspension(float DeltaTime)
{
	/*  Prepare line trace settings. We do not want to trace the vehicle itself. */
	FCollisionQueryParams traceParams;
	traceParams.AddIgnoredActor(GetOwner());
	FCollisionObjectQueryParams queryParams(ECC_TO_BITFIELD(ECC_WorldStatic));

	/* Cache suspension parent bone transform, or if not valid, use component transform. */
	FTransform componentTransform = m_pMesh->GetComponentTransform();
	FTransform wheelTransform;
	GetWheelsBaseTransform(wheelTransform);

	/* Calculate trace direction. */
	const FVector suspensionTraceDirection = -componentTransform.GetRotation().GetUpVector() * Settings.Suspension.TraceLength;

	/* Reset total wheel count. */
	m_wheelsInfo = FVehicleWheelsRuntimeInfo();

	/* Iterate over all suspension springs. */
	for (FVehicleSuspensionSpring& spring : Settings.Suspension.Springs)
	{
		/* Count steering and drive wheels. */
		if(spring.bIsSteeringWheel)
		{
			m_wheelsInfo.SteeringWheelsCount++;
		}
		if(spring.bIsDriveWheel)
		{
			m_wheelsInfo.DriveWheelsCount++;
		}
	
		/* Convert suspension location from local to world space. */
		const FVector suspensionWorld = componentTransform.TransformPositionNoScale(spring.Location);
		const FVector wheelWorld = wheelTransform.TransformPositionNoScale(spring.Location);

		/* Establish hit validity. */
		FHitResult hitResultSuspension;
		
		/* Handle ray or sphere cast. */
		if(Settings.Suspension.TraceThickness > 0.f)
		{
			FCollisionShape traceShape = FCollisionShape::MakeSphere(Settings.Suspension.TraceThickness);
			spring.LatestTrace.IsHitValid = GetWorld()->SweepSingleByObjectType(hitResultSuspension, suspensionWorld, suspensionWorld + suspensionTraceDirection, FQuat::Identity, queryParams, traceShape, traceParams);

			/* When using sphere cast we still want to keep the center of the sphere as if it was ray. The distance given by the sphere cast isn't the same, so we need to correct that. */
			if (spring.LatestTrace.IsHitValid)
			{
				hitResultSuspension.Distance = (hitResultSuspension.ImpactPoint - hitResultSuspension.TraceStart).Size();
			}
		}
		else
		{
			spring.LatestTrace.IsHitValid = GetWorld()->LineTraceSingleByObjectType(hitResultSuspension, suspensionWorld, suspensionWorld + suspensionTraceDirection, queryParams, traceParams);
		}

		/* Store the hit data for the latest trace. */
		spring.LatestTrace.BeginLocation = suspensionWorld;
		spring.LatestTrace.EndLocation = hitResultSuspension.ImpactPoint;
		spring.LatestTrace.Normal = hitResultSuspension.ImpactNormal;
		spring.LatestTrace.Distance = hitResultSuspension.Distance;
		spring.WheelOffset = suspensionWorld.Z - wheelWorld.Z;

		/* Count up wheels on the ground. */
		if (spring.LatestTrace.IsHitValid)
		{
			/* Calculate suspension force at this location. */
			const FVector suspensionPointVelocity = m_pMesh->GetPhysicsLinearVelocityAtPoint(spring.LatestTrace.BeginLocation);

			/* Calculate how different the velocity of the bone is to the normal that the trace found. */
			const float relativeVelocity = FVector::DotProduct(suspensionPointVelocity, spring.LatestTrace.Normal);

			/* Calculate final suspension force multiplier. */
			const float springForce = GetWorld()->GetGravityZ() * -spring.SpringForce;
			const float springDamping = spring.Damping * relativeVelocity;
			const float forceMultiplier = -(springForce * (spring.LatestTrace.Distance - spring.TargetHeight)) - springDamping;

			/* Calculate final force vector. */
			spring.LatestSpringForce = m_pMesh->GetUpVector() * forceMultiplier;

			/* Bump up wheel contact. */
			if(spring.bIsSteeringWheel)
			{
				m_wheelsInfo.SteeringWheelsOnGround++;
			}
			if(spring.bIsDriveWheel)
			{
				m_wheelsInfo.DriveWheelsOnGround++;
			}
		}
	}

	/* Iterate over all springs once again. */
	int32 sprIdx = -1;
	for (FVehicleSuspensionSpring& spring : Settings.Suspension.Springs)
	{
		sprIdx++;

		/* Cache latest trace as it's frequently used. */
		const FVehicleSuspensionSpringTrace& latestTrace = spring.LatestTrace;

		/* Apply spring force if hit. */
		if (spring.LatestTrace.IsHitValid)
		{
			/* Apply final spring force. */
			m_pMesh->AddForceAtLocation(spring.LatestSpringForce, latestTrace.BeginLocation);

			/* Find the new center offset the wheel from the raycast hit location. We will then go back by the wheel radius. */
			/* Wheel radius needs to be entered manually. */
			float wheelCenterOffset = -(latestTrace.Distance - spring.WheelRadius);

			/* Then what we want to do is to take the wheel center offset calculated from the raycast, and clamp it using provided limits. */
			wheelCenterOffset = FMath::Clamp(wheelCenterOffset + spring.WheelOffset, spring.MinMaxOffsetZ.X, spring.MinMaxOffsetZ.Y);

			/* Apply final offset. */
			spring.WheelOffset = wheelCenterOffset;

			/* Calculate and apply swing amount. */
			spring.CurrentSwing = FMath::GetMappedRangeValueClamped(spring.MinMaxOffsetZ, spring.SwingMinMax, spring.WheelOffset);
		}
		/* If the trace has not hit anything. */
		else 
		{
			/* Nothing was hit, we will set wheel offset of this spring to be absolute max. */
			spring.WheelOffset = spring.MinMaxOffsetZ.X;

			/* Calculate and apply swing amount. */
			spring.CurrentSwing = FMath::GetMappedRangeValueClamped(spring.MinMaxOffsetZ, spring.SwingMinMax, spring.WheelOffset);
		}
	}
}

void UArcadeVehicleMovementComponentBase::CalculatePhysicsCorrections(float DeltaTime)
{
	/* Add world offset of the actor for the error correction. */
	if (m_bIsCorrectingLocationError)
	{
		/* Calculate new error correction with exponential. */
		m_locationError = FMath::Lerp(m_locationError, FVector::ZeroVector, Settings.Physics.PhysicsCorrectionExponential);

		/* Apply location error correction. */
		m_pMesh->AddWorldOffset(m_locationError, true, nullptr, ETeleportType::TeleportPhysics);

		/* Stop location correction if no longer needed. */
		m_bIsCorrectingLocationError = FVector::Dist(m_locationError, FVector::ZeroVector) > 1.f;
	}

	/* Add world rotation offset for the error correction. */
	if (m_bIsCorrectingRotationError)
	{
		/* Calculate new error correction with exponential. */
		m_rotationError = FQuat::Slerp(m_rotationError, FQuat::Identity, Settings.Physics.PhysicsCorrectionExponential);

		/* Apply rotation error correction. */
		m_pMesh->AddWorldRotation(m_rotationError, true, nullptr, ETeleportType::TeleportPhysics);

		/* Stop rotation correction if no longer needed. */
		m_bIsCorrectingRotationError = m_rotationError.AngularDistance(FQuat::Identity) > 0.01f;
	}
}

void UArcadeVehicleMovementComponentBase::CalculatePhysicsStep(float AlphaTime)
{
	/* Unmark braking and accelerating flag. */
	m_bIsBraking = false;
	m_bIsEngineBraking = false;
	m_bIsAccelerating = false;	

	/* Handle drifting by modulating mutable linear damping. */
	float linearAdherence = Settings.Steering.LinearDamping;
	float angularAdherence = Settings.Steering.AngularDamping;
	if (m_runtimeState.IsDrifting())
	{
		/* When drifting adherence goes down immediately. */
		Settings.Steering.AdherenceMultiplier = Settings.Steering.DriftAdherencePercentage;
		Settings.Steering.RotationMultiplier = Settings.Steering.DriftRotationPercentage;
	}
	/* If not drifting. */
	else
	{
		/* Adherence will increase linearly. Max is always 1. */
		Settings.Steering.AdherenceMultiplier = 
		FMath::Clamp
		(
		Settings.Steering.AdherenceMultiplier + Settings.Steering.DriftRecoverySpeed * AlphaTime,
		Settings.Steering.DriftAdherencePercentage, 1.f
		);

		/* Do the same to the rotation. */
		Settings.Steering.RotationMultiplier =
		FMath::Clamp
		(
		Settings.Steering.RotationMultiplier + Settings.Steering.DriftRecoverySpeed * AlphaTime,
		Settings.Steering.DriftRotationPercentage, 1.f
		);
	}

	/* Apply final adherence multiplier. */
	linearAdherence *= Settings.Steering.AdherenceMultiplier;
	angularAdherence *= Settings.Steering.AdherenceMultiplier;

	/* Calculate acceleration and retrieve linear velocity from it if we have ground contact of the drive wheels. */
	FVector finalLinearVelocity = Settings.Physics.LocalLinearVelocity;
	if(m_wheelsInfo.DriveWheelsOnGround > 0)
	{
		finalLinearVelocity = CalculateAcceleration(AlphaTime, linearAdherence);
	}

	/* Calculate turning forces if we have some ground contact on the steering wheels. */
	FVector finalAngularVelocity = Settings.Physics.AngularVelocity;
	if(m_wheelsInfo.SteeringWheelsOnGround > 0)
	{
		 finalAngularVelocity = CalculateTurning(AlphaTime, angularAdherence);
	}

	/* Calculate friction forces. */
	CalculateFriction(AlphaTime, finalLinearVelocity);

	/* Transform final linear velocity from local to world. */
	finalLinearVelocity = m_pMesh->GetComponentTransform().TransformVectorNoScale(finalLinearVelocity);

	/* Apply this frame linear velocity if at least one drive wheel is on ground. */
	m_pMesh->SetPhysicsLinearVelocity(finalLinearVelocity);

	/* Apply this frame angular velocity. */
	if(m_wheelsInfo.SteeringWheelsOnGround > 0)
	{
		m_pMesh->SetPhysicsAngularVelocityInDegrees(finalAngularVelocity);
	}
}

FVector UArcadeVehicleMovementComponentBase::CalculateAcceleration(float AlphaTime, float LinearAdherence)
{
	/* Turn current linear velocity direction into rotation, and blend the rotation with the forward orientation to retain pitch and roll. */
	const FVector realLocalLinearVelocity = Settings.Physics.LocalLinearVelocity;

	/* Grab current orientation of the velocity vector, but use forward vector Yaw to keep side or up drag of the vehicle, but modulate acceleration vector. */
	FRotator realLocalRotation = realLocalLinearVelocity.Rotation();
	realLocalRotation.Yaw = FVector::ForwardVector.Rotation().Yaw;

	/* Calculate acceleration natural vector, which is the orientation of the current velocity, but we enhance X axis, which is vehicle forward. */
	FVector accelNaturalVector = realLocalRotation.Vector();

	/* Accelerate backward or forward. */
	accelNaturalVector.X *= FMath::Sign(GetCurrentSpeed());
	
	/* Calculate initial linear velocity for this frame using damping value. */
	const FVector targetLocalLinearVelocity = accelNaturalVector * realLocalLinearVelocity.Size();

	/* Damp real linear velocity using current forward direction of the vehicle and blend between them. */
	FVector finalLinearVelocity = FMath::Lerp(realLocalLinearVelocity, targetLocalLinearVelocity, FMath::Clamp(LinearAdherence * AlphaTime, 0.f, 1.f));

	/* Check if the vehicle is moving at all. */
	const bool bIsMoving = !FMath::IsNearlyZero(GetCurrentSpeed(), 0.2f);

	/* Check if the vehicle has acceleration applied in any direction. It is disabled by max speed. This also triggers engine braking when over the max speed, which makes sense. */
	const bool bHasAcceleration = m_runtimeState.AccelerationRotationDelta.X != 0.f && GetCurrentSpeedUnit() < 1.f;

	/* When so slow as 0.2, we will apply zero linear velocity to make sure vehicle stops. Obviously this is only something we can do when there is no acceleration from the user. */
	if (!bIsMoving && !bHasAcceleration)
	{
		/* Only zero X axis of the linear velocity. */
		finalLinearVelocity = FVector(0.f, finalLinearVelocity.Y, finalLinearVelocity.Z);
	}

	/* Check if the vehicle acceleration is opposite to its movement direction. Will be false if there is no acceleration applied at all, or if vehicle isn't moving at all. */
	const bool bHasOppositeAcceleration = bIsMoving && bHasAcceleration && FMath::Sign(m_runtimeState.AccelerationRotationDelta.X) != FMath::Sign(GetCurrentSpeed());

	/* Apply engine braking flag. This happens, when the vehicle is moving, and it has no acceleration input applied. */
	m_bIsEngineBraking = bIsMoving && !bHasAcceleration;

	/* Apply general braking flag, which is uber flag of the engine braking. This one can be triggered by either engine braking, or the opposite direction acceleration. */
	m_bIsBraking = m_bIsEngineBraking || bHasOppositeAcceleration;

	/* Cache current speed absolute value. */
	const float currentSpeedAbsolute = GetCurrentSpeedAbsolute();

	/* Apply engine braking. */
	if (m_bIsEngineBraking)
	{
		/* Cache linear velocity before calculating braking, so we can calculate the difference and see how much we braked. */
		const float cachedVelocity = finalLinearVelocity.Size();

		/* Calculate engine braking force from its curve. */
		const float brakingForce = Settings.Engine.ConstantEngineBrakingForce * AlphaTime;
		const float brakingAlpha = FMath::Clamp(brakingForce, 0.f, 1.f);

		/* Calculate the velocity we are blending into for engine braking. Engine braking should not affect any other direction than X. */
		const FVector brakingTargetVelocity(0.f, finalLinearVelocity.Y, finalLinearVelocity.Z);
		finalLinearVelocity = FMath::Lerp(finalLinearVelocity, brakingTargetVelocity, brakingAlpha);

		/* Calculate last applied braking force. */
		m_lastAppliedBraking = cachedVelocity - finalLinearVelocity.Size();
	}
	/* If not engine braking, check if braking at all. */
	else if (m_bIsBraking)
	{
		/* This is braking due to the acceleration being opposite to the current vehicle movement. */
		const float brakingForce = Settings.Engine.ConstantBrakingForce * AlphaTime;
		finalLinearVelocity -= finalLinearVelocity.GetSafeNormal() * brakingForce;

		/* Calculate last applied braking force. */
		m_lastAppliedBraking = brakingForce;
	}
	/* Only apply any acceleration if accelerating. */
	else if (bHasAcceleration)
	{
		/* Find drive multiplier if needed. */
		const float driveMultiplier = (Settings.Engine.bScaleAccelerationByDriveWheels ? m_wheelsInfo.GetDriveWheelsMultiplier() : 1.f);
		
		/* Cache last applied acceleration. */
		m_lastAppliedAcceleration = (m_runtimeState.AccelerationRotationDelta.X * driveMultiplier) * AlphaTime;

		/* Simply apply move forward direction to the velocity. */
		const FVector velocityDelta = realLocalRotation.Vector() * m_lastAppliedAcceleration;
		finalLinearVelocity += velocityDelta;

		/* Mark as accelerating. */
		m_bIsAccelerating = true;
	}
	
	/* Return final velocity. */
	return finalLinearVelocity;
}

void UArcadeVehicleMovementComponentBase::CalculateFriction(float AlphaTime, FVector& LinearVelocity)
{	
	/* No friction correction is applied while drifting. This is based on the adherence multiplier that is driven by the drift and clamped always at 1. */
	if (Settings.Steering.AdherenceMultiplier < 1.f)
	{
		return;
	}

	/* Calculate friction force alpha. */
	const float frictionForceAlpha = 1.f - FMath::Clamp(FMath::Abs(LinearVelocity.Y * KMH_MULTIPLIER) / Settings.Physics.FrictionForceThreshold, 0.f, 1.f);

	/* Find opposite or zero force by using friction force. */
	LinearVelocity.Y = FMath::Lerp(LinearVelocity.Y, -LinearVelocity.Y, Settings.Physics.FrictionForce * frictionForceAlpha);

	/* Check if total friction should be applied this frame. */	
	const float latestSped = FMath::Abs(LinearVelocity.X * KMH_MULTIPLIER);
	const bool bApplyTotalFriction = Settings.Physics.TotalFrictionSpeedThreshold > 0.f && frictionForceAlpha > 0.f && latestSped <= Settings.Physics.TotalFrictionSpeedThreshold;

	/* Check should apply total friction this frame. */
	if (bApplyTotalFriction)
	{
		/* If it previously didn't have it on, cache it here. */
		if (!Settings.Physics.HasLastTotalFriction)
		{
			Settings.Physics.TotalFrictionSnapLocation = m_pMesh->GetComponentLocation();
		}
		/* If it did have it last frame as well, reapply it. */
		else
		{
			/* Calculate alpha for this frame of the total friction. */
			const float totalFrictionAlpha = FMath::Clamp(latestSped / Settings.Physics.TotalFrictionSpeedThreshold, 0.f, 1.f);

			/* Calculate location offset. */
			FVector locationOffset = Settings.Physics.TotalFrictionSnapLocation - m_pMesh->GetComponentLocation();

			/* Unrotate offset vector so we have local space, we do not want to move anything else than the local Y. */
			const FRotator componentRotation = m_pMesh->GetComponentRotation();
			locationOffset = componentRotation.UnrotateVector(locationOffset);
			locationOffset.X = 0.f;
			locationOffset.Z = 0.f;

			/* Lerp final offset using friction alpha. */
			locationOffset.Y = FMath::Lerp(locationOffset.Y, 0.f, totalFrictionAlpha);

			/* Apply vehicle local offset. */
			m_pMesh->AddLocalOffset(locationOffset, true, nullptr, ETeleportType::TeleportPhysics);

			/* Calculate this frame component location to update it for the friction snap. */
			Settings.Physics.TotalFrictionSnapLocation = m_pMesh->GetComponentLocation();
		}
	}

	/* Cache new state of the total friction. */
	Settings.Physics.HasLastTotalFriction = bApplyTotalFriction;
}

FVector UArcadeVehicleMovementComponentBase::CalculateTurning(float AlphaTime, float AngularAdherence)
{
	/* Check if rotation is allowed by braking. */
	const bool bAllowRotation = m_runtimeState.AccelerationRotationDelta.Y != 0.f && (!m_bIsBraking || m_bIsEngineBraking);

	/* Grab the initial angular velocity for this frame with damping value. */
	const FVector realAngularVelocity = Settings.Physics.AngularVelocity;
	const FVector targetAngularVelocity = FVector::ZeroVector;

	/* Calculate initial with damping. */
	FVector finalAngularVelocity = FMath::Lerp(realAngularVelocity, targetAngularVelocity, FMath::Clamp(AngularAdherence * AlphaTime, 0.f, 1.f));

	/* Apply rotation if allowed. */
	if (bAllowRotation)
	{
		/* Calculate this frame turning delta. Smooth rotation using resting speed. */
		float frameDeltaRotation = m_runtimeState.AccelerationRotationDelta.Y * Settings.Steering.RotationMultiplier * AlphaTime;

		/* Rotate final angular velocity for this frame's rotation. */
		finalAngularVelocity.Z += frameDeltaRotation;
	}

	/* Apply stabilization if needed. */
	if (m_runtimeState.IsStabilizing())
	{
		finalAngularVelocity.X = m_pMesh->GetComponentRotation().Roll * Settings.Physics.StabilizationForce * AlphaTime;
		finalAngularVelocity.Y = m_pMesh->GetComponentRotation().Pitch * Settings.Physics.StabilizationForce * AlphaTime;
	}

	/* Retrieve final angular velocity. */
	return finalAngularVelocity;
}

void UArcadeVehicleMovementComponentBase::OnReceiveState_Server_Implementation(const FVehiclePhysicsState& State)
{
	OnReceiveState_Client(State);
}

void UArcadeVehicleMovementComponentBase::OnReceiveState_Client_Implementation(const FVehiclePhysicsState& State)
{
	/* Must have began playing. */
	if (!HasBegunPlay())
	{
		return;
	}

	/* Controller doesn't care. */
	if (GetPawnOwner()->IsLocallyControlled())
	{
		return;
	}

	/* 
		If we received delayed state too late, so that later state arrived earlier and was dispatched earlier,
		we do not want to go back with physics, this would cause popping.
	*/
	if (State.FrameNumber < m_lastDispatchedState.FrameNumber)
	{
		return;
	}

	/* If currently replaying state, we want to early insert the state right into the calculations. */
	if (m_bIsReplayingState)
	{
		/* Dispatch state without buffering. */
		DispatchState(State);

		/* Make sure that the physics update timer is reset. */
		m_physicsUpdateTimer = 0.f;
	}
	/* If any regular state is played, we will buffer it. */
	else
	{
		/* Add new state to the states buffer. */
		m_states.AddState(State);
	}
}

void UArcadeVehicleMovementComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UArcadeVehicleMovementComponentBase, MaxSpeedMultiplier);
}
