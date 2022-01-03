/** Created and owned by Furious Production @ Michal Kolodziej. **/

#pragma once
#include "CoreMinimal.h"
#include "ArcadeVehicleNetSerialization.h"
#include "ArcadeVehicleNetworkHelpers.generated.h"

/**
	Gathers some of the initial binary inputs for the vehicle networking.
*/
enum EVehicleInputFlags : uint8
{
	VIF_IsDrifting = 1,
	VIF_IsStabilizing = 2
};

/**
	Grouped vehicle runtime information gathered
	using the vehicle physics simulation.
	The values in this state are ordered in ascending order in terms of memory
	to make it CPU cache-perfect, to waste the least possible memory.
*/
USTRUCT()
struct FVehiclePhysicsState
{
	GENERATED_BODY()

	FVehiclePhysicsState();

	bool operator<(const FVehiclePhysicsState& other) const
	{
		return FrameNumber < other.FrameNumber;
	}

	bool IsStateValid();

	void SetBinaryInput(uint8 Input, bool Set);
	bool CheckBinaryInput(uint8 Input);

	void SetIsDrifting(bool Set);
	bool IsDrifting();

	void SetIsStabilizing(bool Set);
	bool IsStabilizing();

	/** Location of this vehicle at this state. */
	UPROPERTY()
	FVector_NetQuantize Location;

	/** Rotation of this vehicle at this state. */
	UPROPERTY()
	FRotator Rotation;

	/** Linear velocity at this state. */
	UPROPERTY()
	FVector_NetQuantize LinearVelocity;

	/** Angular velocity at this state. */
	UPROPERTY()
	FVector_NetQuantize AngularVelocity;

	/** Defines number of the frame associated with this state. */
	UPROPERTY()
	uint32 FrameNumber;

	/**
	 * Defines runtime value of the acceleration delta cached upon simulation tick as X axis.
	 * Defines runtime value of the rotation delta cached upon simulation tick as Y axis.
	 */
	UPROPERTY()
	FVector2D_NetQuantize AccelerationRotationDelta;
	
	/** Turning input is not important for the gameplay, it's only used for animation purposes, thus low accuracy(int8). */
	UPROPERTY()
	FFloat_NetQuantize TurningInput;

	/** Defines binary inputs sent over the network in form of bit flags. */
	UPROPERTY()
	uint8 BinaryInput;
};

/** Special type of array that is completely static and replaces physics states at the bottom if its size is exceeded. */
USTRUCT()
struct FVehiclePhysicsStateArray
{
	GENERATED_BODY()

	FVehiclePhysicsStateArray();

	/** Returns current number of elements in this array. */
	uint8 Num();
	
	/** Empties this states array. */
	void Empty();

	/** Adds new state at the end of this array. If it exceeds size of this array it will pop the oldest state. */
	void AddState(const FVehiclePhysicsState& State);

	/** Takes the first state from the states array. All other states go down in the hierarchy. Returns false if there is no state. */
	bool PullState(FVehiclePhysicsState& OutState);

	/** Returns first state frame id. */
	uint32 FirstFrame();

	/** Returns last state frame id. */
	uint32 LastFrame();

public:
	/** Constant used for max states count. */
	static const uint8 MAX_STATES = 10;

private:
	/** Internal counter of the elements in this array. */
	uint8 NumElements;

	/** This represents actual states inside this array. */
	FVehiclePhysicsState States[MAX_STATES];
};

/**
	Input state sent from the controlling client to the server, when using server authoritative vehicles.
	It not only contains inputs, but also contains frame number, so that the controlling client knows which state
	this input is feedback for.
*/
USTRUCT()
struct FVehicleInputState
{
	GENERATED_BODY()

	FVehicleInputState();

	/** Number of the frame this input was sent for. */
	UPROPERTY()
	uint32 FrameNumber;

	/** Acceleration input provided by this state. */
	UPROPERTY()
	FFloat_NetQuantize AccelerationInput;

	/** Turning input provided by this state. */
	UPROPERTY()
	FFloat_NetQuantize TurningInput;

	/** Binary input provided by this state. */
	UPROPERTY()
	uint8 BinaryInput;
};

/** Special type of array that is completely static and replaces input states at the bottom if its size is exceeded. */
USTRUCT()
struct FVehicleInputStateArray
{
	GENERATED_BODY()

	FVehicleInputStateArray();

	/** Returns current number of elements in this array. */
	uint8 Num();

	/** Adds new state at the end of this array. If it exceeds size of this array it will pop the oldest state. */
	void AddState(const FVehicleInputState& State);

	/** Takes the first state from the states array. All other states go down in the hierarchy. Returns false if there is no state. */
	bool PullState(FVehicleInputState& OutState);

	/** Returns first state frame id. */
	uint32 FirstFrame();

	/** Returns last state frame id. */
	uint32 LastFrame();

public:
	/** Constant used for max states count. */
	static const uint8 MAX_STATES = 10;

private:
	/** Internal counter of the elements in this array. */
	uint8 NumElements;

	/** This represents actual states inside this array. */
	FVehicleInputState States[MAX_STATES];
};