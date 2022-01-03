/** Created and owned by Furious Production @ Michal Kolodziej. **/

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "ArcadeVehicleNetworkHelpers.h"
#include "ArcadeVehicleSettings.h"
#include "ArcadeVehicleMovementComponentBase.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogArcadeVehicleMovement, Log, All);

class UArcadeVehiclePathFollowingComponent;

/** Accessible constant for converting UE velocity units to km/h. */
static const float KMH_MULTIPLIER = 0.036f;

/**
	Component that is responsible for calculating and synchronizing vehicle
	movement physics. This is arcade-like vehicle physics.
	It is base component and should not be used, but derived from.
*/
UCLASS(Abstract, BlueprintType)
class ARCADEVEHICLESYSTEM_API UArcadeVehicleMovementComponentBase : public UPawnMovementComponent
{
	GENERATED_BODY()

public:
	UArcadeVehicleMovementComponentBase();

	/** UActorComponent interface. */
	void BeginPlay() override;
	void SetComponentTickEnabled(bool bEnabled) override;
	void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	/** ~UActorComponent interface. */

	/** UPawnMovementComponent interface. */
	void RequestPathMove(const FVector& MoveInput) override;
	/** ~UPawnMovementComponent interface. */

	/** Just an accessor method for the settings. They are constant - can't change. */
	const FVehicleSettings& GetVehicleSettings() const;

	/** Accessor method for the most up-to-date runtime state processed. */
	const FVehiclePhysicsState& GetCurrentState() const;

	/** Returns raw turning input for this vehicle. */
	float GetTurningInput();

	/** Returns current speed of the vehicle, but it will be negative when the vehicle is reversing and positive if moving forward. */
	UFUNCTION(BlueprintPure, Category = Movement)
	float GetCurrentSpeed();

	/** Returns current speed of the vehicle as absolute value, so it doesn't matter whether the vehicle is moving forward of backward, it will just return speed. */
	UFUNCTION(BlueprintPure, Category = Movement)
	float GetCurrentSpeedAbsolute();

	/** Returns current speed of the vehicle defined as 0-1 unit from 0 to max speed. */
	UFUNCTION(BlueprintPure, Category = Movement)
	float GetCurrentSpeedUnit();

	/** Returns last applied known acceleration in any direction. */
	UFUNCTION(BlueprintPure, Category = Movement)
	float GetLastAppliedAcceleration();

	/** Returns last applied know braking in any direction. */
	UFUNCTION(BlueprintPure, Category = Movement)
	float GetLastAppliedBraking();

	/** Sets max speed of this vehicle immediately. */
	UFUNCTION(BlueprintCallable, Category = Movement)
	void SetMaxSpeedMultiplier(const float NewMaxSpeedMultiplier);
	
	/** Returns current max speed multiplier. */
	UFUNCTION(BlueprintPure, Category = Movement)
	float GetMaxSpeedMultiplier();

	/** Sets current acceleration input. It is automatically clamped between -1 and 1. */
	UFUNCTION(BlueprintCallable, Category = Movement)
	void SetAccelerationInput(const float Value);

	/** Sets current turning input. It is automatically clamped between -1 and 1. */
	UFUNCTION(BlueprintCallable, Category = Movement)
	void SetTurningInput(const float Value);

	/** Sets current drift input. Value of false will stop drifting, and value of true will start it. */
	UFUNCTION(BlueprintCallable, Category = Movement)
	void SetDriftInput(const bool EnableDrift);

	/** Sets current stabilization input. Value of false will stop stabilizing, and value of true will start it. */
	UFUNCTION(BlueprintCallable, Category = Movement)
	void SetStabilizationInput(const bool EnableStabilization);
	
	/** Checks if vehicle is currently accelerating, so moving forward. */
	UFUNCTION(BlueprintPure, Category = Movement)
	bool IsAccelerating();

	/** Checks if the vehicle is currently moving forwards. It doesn't mean accelerating, but just direction of the movement. */
	UFUNCTION(BlueprintPure, Category = Movement)
	bool IsMovingForward();
		
	/** Checks if the vehicle is currently moving backwards. It doesn't mean accelerating, but just direction of the movement. */
	UFUNCTION(BlueprintPure, Category = Movement)
	bool IsMovingBackward();

	/** Check if the vehicle is currently moving at all, that'd be forward or backward. */
	UFUNCTION(BlueprintPure, Category = Movement)
	bool IsMovingAtAll();

	/** Returns whether or not this vehicle is currently braking(not the same as reversing). */
	UFUNCTION(BlueprintPure, Category = Movement)
	bool IsBraking();

	/** Returns specifically state of the engine braking. */
	UFUNCTION(BlueprintPure, Category = Movement)
	bool IsEngineBraking();

	/** Teleports this vehicle to the provided transform and clears the physics state. */
	UFUNCTION(BlueprintCallable, Category = Physics)
	void TeleportVehicle(const FTransform& Transform);

	/** Sets current linear velocity to the physics of the vehicle. Should only be called on the host-side. Velocity can be set in local or world space. */
	UFUNCTION(BlueprintCallable, Category = Physics)
	void SetVehicleLinearVelocity(const FVector& LinearVelocity, const bool WorldSpace = false);
	
	/** Returns wheel offset for the wheel of specified index. */
	UFUNCTION(BlueprintCallable, Category = Suspension)
	float GetWheelOffset(int32 Index);

	/** Function that allows to blocking acceleration. */
	UFUNCTION(BlueprintCallable, Category = Acceleration)
	void SetBlockAcceleration(bool Block);

	/** Returns vehicle simulation mesh, which is the root component. */
	UFUNCTION(BlueprintPure, Category = VehicleMesh)
	UPrimitiveComponent* GetVehicleMesh() const;

	/** Templated method for returning vehicle root mesh. Use wisely! */
	template<typename T>
	T* GetVehicleMeshT() const { return Cast<T>(m_pMesh); }
	
	/** Clears network data of this vehicle. */
	UFUNCTION(BlueprintCallable, Category = Networking)
	void ClearNetworkData();

	/** This clears all inputs in this vehicle. It is called automatically when needed, but if you have some custom events, override them and clear them here. */
	virtual void ClearInputs();

	/** Returns path following component associated. */
	UArcadeVehiclePathFollowingComponent* GetPathFollowingComponent();

protected:
	/** Internal method driven by the tick method. It is specifically used to tick only physics. */
	virtual void TickPhysics(float DeltaTime);
	
	/** Internal method driven by the tick method. It is called always in between physics ticks to smooth things out. */
	virtual void TickBetweenPhysics(float UpdateBasedDeltaTime, float RegularDeltaTime);

	/** Uses states number to decide how to currently speed up or slow down physics update rate. */
	virtual void EvaluatePhysicsPaceIncrease();
	
	/** Fully dispatches provided state. */
	virtual void DispatchState(const FVehiclePhysicsState& State);

	/**
	 * Called during BeginPlay phase of this component. It should initialize vehicle root component
	 * reference, and register everything that's needed for the vehicle to work.
	 * Should return whether or not we have successfully registered physics data completely.
	 */
	virtual bool InitializeVehicleMovement();
	
	/**
	 * Logic for registering suspension springs.
	 * Depending on the implementation it might mean
	 * skeletal mesh bones or some custom way of handling them.
	 * Should return true when implemented and successful.
	 * It will affect initialization outcome.
	 */
	virtual bool RegisterSuspensionSprings();

	/** Calculates all the vehicle metrics like speed and various states, that can be accessed globally. */
	virtual void CalculateStates();

	/**
	 * Returns wheels transform. It is transform that allows to offset wheels
	 * for specific parent bone if needed.
	 * Will return root component transform if not overriden.
	 */
	virtual void GetWheelsBaseTransform(FTransform& OutTransform) const;
	
	/** Calculates suspension using raycasts. */
	virtual void CalculateSuspension(float DeltaTime);

	/** Calculates physics corrections from current physics state. */
	virtual void CalculatePhysicsCorrections(float DeltaTime);

	/** Calculates single physics step for the physics simulation. */
	virtual void CalculatePhysicsStep(float AlphaTime);

	/** Calculates and outputs acceleration and braking as linear velocity. */
	virtual FVector CalculateAcceleration(float AlphaTime, float LinearAdherence);

	/** Calculates friction force. Takes linear velocity after acceleration calculations and chews it with the friction forces. */
	virtual void CalculateFriction(float AlphaTime, FVector& LinearVelocity);

	/** Calculates and outputs turning related maths as angular velocity. */
	virtual FVector CalculateTurning(float AlphaTime, float AngularAdherence);

	/** Rpc called on the server when the client owning the vehicle sends its state. */
	UFUNCTION(Server, Unreliable)
	void OnReceiveState_Server(const FVehiclePhysicsState& State);
	virtual void OnReceiveState_Server_Implementation(const FVehiclePhysicsState& State);

	/** Rpc called on all of the clients when the server receives state from the owning client. */
	UFUNCTION(NetMulticast, Unreliable)
	void OnReceiveState_Client(const FVehiclePhysicsState& State);
	virtual void OnReceiveState_Client_Implementation(const FVehiclePhysicsState& State);

	/** Register members for syncing. */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:	
	/** Defines the acceleration input for this component. */
	UPROPERTY(BlueprintReadOnly, Category = Input)
	float AccelerationInput;

	/** Defines the turning input for this component. The value is networked for cosmetic purposes. */
	UPROPERTY(BlueprintReadOnly, Category = Input)
	float TurningInput;

	/** Defines drifting input. Input is internally transfered to with the network state. */
	UPROPERTY(BlueprintReadOnly, Category = Input)
	bool DriftInput;

	/** Defines stabilization input. Input is internally transferred to with the network state. */
	UPROPERTY(BlueprintReadOnly, Category = Input)
	bool StabilizationInput;

	/** Defines max speed multiplier. It allows to quickly lock vehicle speed, and unlock it at will. */
	UPROPERTY(Replicated)
	float MaxSpeedMultiplier;

	/** All of the vehicle settings split into groups. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VehicleSettings)
	FVehicleSettings Settings;

protected:
	/**
	 * Assigned mesh of this vehicle. This should always be the root component possibly.
	 * Also this is the component responsible for simulation of this vehicle.
	 */
	UPROPERTY()
	UPrimitiveComponent* m_pMesh;

	/**
	 * Whether or not this vehicle is fully initialized.
	 * This is assigned during the initialization phase and
	 * is true if the references are valid.
	 * It won't allow any ticking, at any point in time if invalid.
	 */
	UPROPERTY()
	bool m_bIsVehicleInitialized;

	/**
	 * Stores runtime wheels information.
	 * Simply to avoid putting here another few variables.
	 */
	UPROPERTY()
	FVehicleWheelsRuntimeInfo m_wheelsInfo;

	/** Defines whether there is a valid physics state. It is used for the tick between physics. */
	UPROPERTY()
	bool m_bHasValidPhysicsState;

	/** Runtime flag used to check if vehicle is accelerating. It can be accelerating either forward or backward. */
	UPROPERTY()
	bool m_bIsAccelerating;

	/**
		Runtime flag that allows to check if the vehicle is currently braking.
		Note, braking is not the same as reversing. Braking can mean releasing input
		or accelerating in direction opposite to the vehicle movement.
	*/
	UPROPERTY()
	bool m_bIsBraking;

	/** Runtime flag used to specifically check if the engine braking is going on. */
	UPROPERTY()
	bool m_bIsEngineBraking;

	/** 
		Simple flag that can be driven from the external logic to block accelerating.
		Might be usable for example for vehicle running out of fuel, or it's broken down etc.
	*/
	UPROPERTY()
	bool m_bBlockAcceleration;

	/** Stores last applied acceleration. It is not cleared, so make sure to check IsAccelerating to see if value is valid. */
	UPROPERTY()
	float m_lastAppliedAcceleration;

	/** Stores last applied braking. It is not cleared, so make sure to check IsBraking to see if it's valid. */
	UPROPERTY()
	float m_lastAppliedBraking;

	/** Internal timer used for catching the moment when we want to simulate physics. */
	UPROPERTY()
	float m_physicsUpdateTimer;

	/** Runtime PhysicsUpdateInterval value used for speeding up physics simulation when running behind. */
	UPROPERTY()
	float m_mutablePhysicsUpdateInterval;

	/** Runtime value of the location error cached upon state dispatch. */
	UPROPERTY()
	FVector m_locationError;

	/** Runtime value of the rotation error cached upon state dispatch. */
	UPROPERTY()
	FQuat m_rotationError;

	/** Defines whether the error correction is ongoing for location. */
	UPROPERTY()
	bool m_bIsCorrectingLocationError;

	/** Defines whether the error correction is ongoing for rotation. */
	UPROPERTY()
	bool m_bIsCorrectingRotationError;

	/**
		Runtime values defining whether non-controlling client is currently replaying latest state.
		It's a handy value, that allows to overwrite state early when replaying.
	*/
	UPROPERTY()
	bool m_bIsReplayingState;

	/** Cached path following component. */
	UPROPERTY()
	UArcadeVehiclePathFollowingComponent* m_pPathFollowingComponent;

	/** Represents total list of states received. It is only used by non-controlling side. */
	UPROPERTY()
	FVehiclePhysicsStateArray m_states;

	/** Last state that was dispatched. This is every only used on the non controlling side. */
	UPROPERTY()
	FVehiclePhysicsState m_lastDispatchedState;

	/** 
		This state is cached for dispatch. It is used on all sides locally for the actual calculation of the physics.
		The controlling side essentially sets up next physics step to work towards, and sends its initial state.
		Non controlling side assigns this runtime state when dispatching next physics step. That's when this is used.
	*/
	UPROPERTY()
	FVehiclePhysicsState m_runtimeState;
};
