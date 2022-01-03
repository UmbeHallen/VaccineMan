/** Created and owned by Furious Production @ Michal Kolodziej. **/

#include "ArcadeVehicleSettings.h"

FVehiclePhysicsSettings::FVehiclePhysicsSettings()
{
	LocalLinearVelocity = FVector::ZeroVector;
	AngularVelocity = FVector::ZeroVector;
	TotalFrictionSnapLocation = FVector::ZeroVector;
	StabilizationForce = 30.f;
	FrictionForce = 0.7f;
	FrictionForceThreshold = 5.f;
	TotalFrictionSpeedThreshold = 5.f;
	MovementDirectionTolerance = 0.f;
	PhysicsUpdateInterval = 0.1f;
	PhysicsPerStatePaceIncrease = 0.1f;
	PhysicsLocationErrorTolerance = 300.f;
	PhysicsRotationErrorTolerance = 5.f;
	PhysicsCorrectionExponential = 0.9f;
	HasLastTotalFriction = false;
}

FVehicleEngineSettings::FVehicleEngineSettings()
{
	MaxSpeed = 180.f;
	MaxReverseSpeed = 50.f;
	CurrentSpeed = 0.f;
	CurrentSpeedUnit = 0.f;
	bScaleAccelerationByDriveWheels = true;
	ConstantBrakingForce = 0.f;
	ConstantEngineBrakingForce = 0.f;
}

FVehicleSteeringSettings::FVehicleSteeringSettings()
{
	SteeringDamping = 0.5f;
	LinearDamping = 1.f;
	AngularDamping = 1.f;
	DriftAdherencePercentage = 0.1f;
	DriftRotationPercentage = 0.1f;
	DriftRecoverySpeed = 0.1f;
	DriftMinSpeed = 30.f;
	AdherenceMultiplier = 1.f;
	RotationMultiplier = 1.f;
}

FVehicleSuspensionSpringTrace::FVehicleSuspensionSpringTrace()
{
	BeginLocation = FVector::ZeroVector;
	EndLocation = FVector::ZeroVector;
	Normal = FVector::ZeroVector;
	Distance = 0.f;
	IsHitValid = false;
}

FVehicleSuspensionSpring::FVehicleSuspensionSpring()
{
	BoneName = NAME_None;
	SpringForce = 0.f;
	TargetHeight = 0.f;
	Damping = 0.f;
	bIsSteeringWheel = false;
	bIsDriveWheel = true;
	WheelRadius = 35.f;
	SwingPivot = 0.5f;
	SwingMinMax = FVector2D::ZeroVector;
	MinMaxOffsetZ = FVector2D::ZeroVector;
	Location = FVector::ZeroVector;
	WheelOffset = 0.f;
	CurrentSwing = 0.f;
	LatestSpringForce = FVector::ZeroVector;
}

FVehicleSuspensionSettings::FVehicleSuspensionSettings()
{
	TraceLength = 0.f;
	TraceThickness = 0.f;
	SuspensionParentBoneName  = FName(NAME_None);
	SuspensionParentBoneIndex = INDEX_NONE;
}

FVehicleWheelsRuntimeInfo::FVehicleWheelsRuntimeInfo()
{
	SteeringWheelsCount = 0;
	DriveWheelsCount = 0;
	SteeringWheelsOnGround = 0;
	DriveWheelsOnGround = 0;
}

float FVehicleWheelsRuntimeInfo::GetDriveWheelsMultiplier() const
{
	/* Avoid division by zero. */
	if(DriveWheelsCount < 1)
	{
		return 0.f;
	}

	const float fTotal = static_cast<float>(DriveWheelsCount);
	const float fOnGround = static_cast<float>(DriveWheelsOnGround);
	return fOnGround / fTotal;
}
