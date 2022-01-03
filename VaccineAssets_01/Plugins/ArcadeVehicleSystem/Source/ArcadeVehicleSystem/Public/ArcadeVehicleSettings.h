/** Created and owned by Furious Production @ Michal Kolodziej. **/

#pragma once
#include "Engine.h"
#include "ArcadeVehicleSettings.generated.h"

/**
	Grouped settings of the physics of the vehicle.
*/
USTRUCT(BlueprintType)
struct FVehiclePhysicsSettings
{
	GENERATED_BODY()

	FVehiclePhysicsSettings();

	/** Runtime value, that tracks vehicle local linear velocity. Calculated each frame. */
	UPROPERTY()
	FVector LocalLinearVelocity;

	/** Runtime value, that tracks vehicle angular velocity. Calculated each frame. */
	UPROPERTY()
	FVector AngularVelocity;

	/** Runtime value, that comes together with the HasLastTotalFriction. It stores vehicle location at the applied friction point. */
	UPROPERTY()
	FVector TotalFrictionSnapLocation;

	/** Defines how strong is the stabilization force. */
	UPROPERTY(EditAnywhere, Category = Physics)
	float StabilizationForce;

	/** Defines friction force of this vehicle. It zeroes out Y velocity movment and lerps with current using the force. 0 will do nothing, 1 will use force opposite to the current. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine, meta=(UIMin="0.0", ClampMin="0.0", UIMax="1.0", ClampMax="1.0"))
	float FrictionForce;

	/** Defines friction force threshold. If the vehicle is pushed stronger than this value, the side friction won't be applied. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine, meta = (UIMin = "0.0", ClampMin = "0.0"))
	float FrictionForceThreshold;

	/** Defines what speed needs to be reached in order to achieve full friction - locking vehicle in place. 0 will never lock it. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine, meta = (UIMin = "0.0", ClampMin = "0.0"))
	float TotalFrictionSpeedThreshold;

	/** Defines tolerance which allows vehicle to decide whether it is moving forward or backward. Useful for many scenarios to ease out error with low speeds. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine, meta = (UIMin = "0.0", ClampMin = "0.0"))
	float MovementDirectionTolerance;

	/** Defines physics update interval of this component. Not the same as tick interval. */
	UPROPERTY(EditAnywhere, Category = Physics)
	float PhysicsUpdateInterval;

	/** Defines how much each running behind state will speed up the physics tick speed fro non-controllers. */
	UPROPERTY(EditAnywhere, Category = Physics)
	float PhysicsPerStatePaceIncrease;

	/**
		Defines location distance tolerance. If the state dispatched,
		and the current location of the vehicle have location further apart
		than this tolerance, the location will be snapped hard. Otherwise
		it will calculate location error and slowly reduce it over time.
	*/
	UPROPERTY(EditAnywhere, Category = PhysicsCorrection)
	float PhysicsLocationErrorTolerance;

	/** Defines rotation error tolerance. Used the same way as location tolerance. */
	UPROPERTY(EditAnywhere, Category = PhysicsCorrection)
	float PhysicsRotationErrorTolerance;

	/** Defines exponential parameter for the error correction. */
	UPROPERTY(EditAnywhere, Category = PhysicsCorrection)
	float PhysicsCorrectionExponential;
	
	/** Runtime value, that stores total friction flag. If true, the vehicle will be locked in place. */
	UPROPERTY()
	bool HasLastTotalFriction;
};

/**
	Grouped settings of the vehicle engine.
*/
USTRUCT(BlueprintType)
struct FVehicleEngineSettings
{
	GENERATED_BODY()

	FVehicleEngineSettings();

	/** Special curve used to scale acceleration forward force. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine)
	UCurveFloat* AccelerationCurve;

	/** Special curve used to scale acceleration backwards force. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine)
	UCurveFloat* ReversingCurve;

	/** Special curve used to scale engine braking force, which is applied when there is no acceleration input. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine)
	UCurveFloat* EngineBrakingCurve;

	/** Special curve used to scale regular braking force, which is applied when the acceleration direction is opposite to the direction of heading of the vehicle. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine)
	UCurveFloat* BrakingCurve;

	/** Defines maximum speed of this vehicle. No acceleration will be applied when this value is reached. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine)
	float MaxSpeed;

	/** Defines maximum reversing speed. No reverse acceleration will be applied when this value is reached. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine)
	float MaxReverseSpeed;

	/** Runtime value, calculated by the physics tick. Current speed of this vehicle defined in kilometers per hour. */
	UPROPERTY(BlueprintReadOnly, Category = Engine)
	float CurrentSpeed;

	/** Runtime value, calculated by the physics tick along with current speed. It divides current speed by the max value from the acceleration or reversing curves to return 0-1 speed value. */
	UPROPERTY(BlueprintReadOnly, Category = Engine)
	float CurrentSpeedUnit;

	/**
	 * If this is true, each drive wheel will contribute to the acceleration
	 * so if we have two drive wheels, and only one touches the ground,
	 * the acceleration force will be 50%.
	 * If this is false, then the acceleration will not be scaled this way, and the
	 * acceleration will be always the same as long as there
	 * is at least one drive wheel touching the ground.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine)
	bool bScaleAccelerationByDriveWheels;

	/** Runtime value assigned on physics step. It is cached even if not used, so it's consistent across all clients. */
	UPROPERTY()
	float ConstantBrakingForce;

	/** Runtime value assigned on physics step. It is cached even if not used, so it's consistent across all clients. */
	UPROPERTY()
	float ConstantEngineBrakingForce;
};

/**
	Grouped settings of the vehicle steering.
*/
USTRUCT(BlueprintType)
struct FVehicleSteeringSettings
{
	GENERATED_BODY()

	FVehicleSteeringSettings();

	/** Special curve used to scale turning force of the vehicle based on its absolute speed. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Steering)
	UCurveFloat* SteeringCurve;

	/** Defines amount of turn damping. This damping is used to avoid hard-snap feeling when releasing turn input. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Steering)
	float SteeringDamping;

	/** Defines strength of the linear damping. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Steering)
	float LinearDamping;

	/** Defines strength of the angular damping. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Steering)
	float AngularDamping;

	/** Defines how many percent of regular adherence there is when drifting. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Steering)
	float DriftAdherencePercentage;

	/** Defines how many percent of regular rotation there is when drifting. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Steering)
	float DriftRotationPercentage;

	/** Defines how fast vehicle will recover its full adherence after drifting. It's speed multiplier, not a time. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Steering)
	float DriftRecoverySpeed;

	/** Defines minimal speed required to drift. It won't activate below this speed. It is defined by KM/h just like vehicle speed. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Steering)
	float DriftMinSpeed;

	/** Runtime value used as a adherence multiplier. It's 1 by default and clamps to 1. */
	UPROPERTY()
	float AdherenceMultiplier;

	/** Runtime value used as rotation multiplier. */
	UPROPERTY()
	float RotationMultiplier;
};

/**
	Helper structure that allows to store less info for the FHitResult
	for the springs, as we do not need all of the data.
*/
USTRUCT()
struct FVehicleSuspensionSpringTrace
{
	GENERATED_BODY()

	FVehicleSuspensionSpringTrace();

	/** Location where the hit was shot from. */
	UPROPERTY()
	FVector BeginLocation;

	/** Location of the hit. */
	UPROPERTY()
	FVector EndLocation;

	/** Normal of the hit. */
	UPROPERTY()
	FVector Normal;

	/** Distance of the hit for the suspension force. */
	UPROPERTY()
	float Distance;

	/** Whether or not the hit is valid. */
	UPROPERTY()
	bool IsHitValid;
};

/**
	Helper structure that allows to map suspension
	spring physics data with the name of the bone,
	where the spring belongs.
*/
USTRUCT(BlueprintType)
struct FVehicleSuspensionSpring
{
	GENERATED_BODY()

	FVehicleSuspensionSpring();

	/** Defines the name of the bone that is used to locate the spring in runtime. If this is using static mesh, enter socket name instead. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	FName BoneName;
	
	/** Defines how strong is this spring. Higher values will apply stronger force upwards. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	float SpringForce;

	/** Defines height of the suspension at this particular spring. The system will try to settle this spring at this height. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	float TargetHeight;

	/** Damping factor allows to define how suspension damps the impacts. Kind of like softness. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	float Damping;

	/** Defines whether this spring contains a wheel that is steering wheel. Value used purely for animations, not for physics. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	bool bIsSteeringWheel;

	/**
	 * Defines whether this spring contains a wheel that is drive wheel. Actually affects acceleration.
	 * Drive wheels that have connection to the ground will allow applying acceleration.
	 * This means, that if there are 2 drive wheels, and only one touches the ground,
	 * only 50% force will be applied.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	bool bIsDriveWheel;
	
	/** Defines radius of the wheel we expect to attach to this suspension part. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	float WheelRadius;
	
	/** Defines where the swing pivot should be from 0 to 1 along the SwingMinMax value. Smaller values will begin earlier. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension, meta=(UIMin="0.0", UIMax="1.0", ClampMin="0.0", ClampMax="1.0"))
	float SwingPivot;

	/** Defines behaviour of the swing arm. Min and max value corresponds with the value in the wheels offsets min and max. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	FVector2D SwingMinMax;

	/** Defines minimum and maximum offset for this spring wheel. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	FVector2D MinMaxOffsetZ;

	/** Non-exposed value. It is just location of the bone associated with this spring in component-space. */
	UPROPERTY()
	FVector Location;

	/** Stores runtime-calculated wheel offset on this spring. */
	UPROPERTY()
	float WheelOffset;

	/** Runtime value that defines current swing arm swing amount. */
	UPROPERTY()
	float CurrentSwing;

	/** Runtime value. Stores information about the last performed line trace for this string. */
	UPROPERTY()
	FVehicleSuspensionSpringTrace LatestTrace;

	/** Runtime value. Stores lates spring force calculated. */
	UPROPERTY()
	FVector LatestSpringForce;
};

/**
	Grouped settings of the vehicle suspension.
*/
USTRUCT(BlueprintType)
struct FVehicleSuspensionSettings
{
	GENERATED_BODY()

	FVehicleSuspensionSettings();

	/** Defines how far suspension line traces reach. This allows to define how the vehicle is snapped to the ground. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	float TraceLength;
	
	/** Defines thickness of the suspension trace. When the thickness is 0, it will just use raycast, otherwise sphere cast. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	float TraceThickness;

	/** 
		Name of the bone that the suspension bones should be transformed to world by.
		This one is important, because if we are doing some kind of animations on that bone,
		and it is a parent of the spring bones, we will want to keep them up-to-date
		with their parent transform. This could be a root bone, or bone after that most likely.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	FName SuspensionParentBoneName;

	/** List of the springs that drive suspension of this vehicle. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	TArray<FVehicleSuspensionSpring> Springs;

	/** Runtime value that stores index of the suspension parent bone for quicker access. */
	UPROPERTY()
	int32 SuspensionParentBoneIndex;
};

/** Groups all of vehicle settings. They are in one place so they are very easy to copy and pase if needed. */
USTRUCT(BlueprintType)
struct FVehicleSettings
{
	GENERATED_BODY()

	/** Physics settings of this vehicle. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Physics)
	FVehiclePhysicsSettings Physics;

	/** Engine settings of this vehicle. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Engine)
	FVehicleEngineSettings Engine;

	/** Steering settings of this vehicle. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Steering)
	FVehicleSteeringSettings Steering;

	/** Steering settings of this vehicle. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Suspension)
	FVehicleSuspensionSettings Suspension;
};

/**
 * Runtime information about the vehicle wheels.
 * It's only here to gather this information in one place
 * not to make too big mess in the actual component.
 */
USTRUCT()
struct FVehicleWheelsRuntimeInfo
{
	GENERATED_BODY()

	FVehicleWheelsRuntimeInfo();

	/** Returns smooth percentage of how many drive wheels are on the ground versus how many there are in total. */
	float GetDriveWheelsMultiplier() const;
	
	/** How many steering wheels there are are in total. */
	UPROPERTY()
	int32 SteeringWheelsCount;

	/** How many drive wheels there are in total. */
	UPROPERTY()
	int32 DriveWheelsCount;

	/** How many steering wheels are currently on the ground. */
	UPROPERTY()
	int32 SteeringWheelsOnGround;

	/** How many drive wheels are currently on the ground. */
	UPROPERTY()
	int32 DriveWheelsOnGround;
};