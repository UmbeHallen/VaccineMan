/** Created and owned by Furious Production @ Michal Kolodziej. **/

#include "ArcadeVehicleNetworkHelpers.h"

bool FFloat_NetQuantize::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	bOutSuccess = true;
	int8 compressedFloat = 0;
	if(Ar.IsSaving())
	{
		compressedFloat = FMath::RoundToInt(m_value * 127.f);
		Ar.SerializeBits(&compressedFloat, 8);
	}
	else
	{
		Ar.SerializeBits(&compressedFloat, 8);
		m_value = compressedFloat / 127.f;
	}

	return bOutSuccess;
}

FVehiclePhysicsState::FVehiclePhysicsState()
{
	FrameNumber = 0;
	Location = FVector_NetQuantize::ZeroVector;
	Rotation = FRotator::ZeroRotator;
	LinearVelocity = FVector_NetQuantize::ZeroVector;
	AngularVelocity = FVector_NetQuantize::ZeroVector;
	AccelerationRotationDelta = FVector2D_NetQuantize(0.f, 0.f);
	TurningInput = 0.f;
	BinaryInput = 0;
}

bool FVehiclePhysicsState::IsStateValid()
{
	return FrameNumber > 0;
}

void FVehiclePhysicsState::SetBinaryInput(uint8 Input, bool Set)
{
	if (Set)
	{
		BinaryInput |= Input;
	}
	else
	{
		BinaryInput &= ~Input;
	}
}

bool FVehiclePhysicsState::CheckBinaryInput(uint8 Input)
{
	return BinaryInput & Input;
}

void FVehiclePhysicsState::SetIsDrifting(bool Set)
{
	SetBinaryInput(VIF_IsDrifting, Set);
}

bool FVehiclePhysicsState::IsDrifting()
{
	return CheckBinaryInput(VIF_IsDrifting);
}

void FVehiclePhysicsState::SetIsStabilizing(bool Set)
{
	SetBinaryInput(VIF_IsStabilizing, Set);
}

bool FVehiclePhysicsState::IsStabilizing()
{
	return CheckBinaryInput(VIF_IsStabilizing);
}

FVehiclePhysicsStateArray::FVehiclePhysicsStateArray()
{
	NumElements = 0;
}

uint8 FVehiclePhysicsStateArray::Num()
{
	return NumElements;
}

void FVehiclePhysicsStateArray::Empty()
{
	NumElements = 0;
}

void FVehiclePhysicsStateArray::AddState(const FVehiclePhysicsState& State)
{
	/* Check if the array is full. */
	if (NumElements == MAX_STATES)
	{
		/* Replace the oldest state with the provided one. */
		States[0] = State;
	}
	else
	{
		/* In this scenario simply add the state to the list. */
		States[NumElements] = State;
		NumElements++;
	}

	/* In the end always sort the entries. */
	for (uint8 i = 0; i < NumElements; ++i)
	{
		for (uint8 j = i + 1; j < NumElements; ++j)
		{
			if (States[i].FrameNumber > 0 && States[i].FrameNumber > States[j].FrameNumber)
			{
				FVehiclePhysicsState stateTemp = States[i];
				States[i] = States[j];
				States[j] = stateTemp;
			}
		}
	}
}

bool FVehiclePhysicsStateArray::PullState(FVehiclePhysicsState& OutState)
{
	/* If buffer is empty, bail with false. */
	if (NumElements == 0)
	{
		return false;
	}

	/* Pull out the very first state by copy. */
	FVehiclePhysicsState stateCopy = States[0];
	OutState = stateCopy;

	/* Move the stack down. */
	for (uint8 i = 0; i < NumElements - 1; ++i)
	{
		States[i] = States[i + 1];
	}

	/* Decrease number of elements tracked. */
	NumElements--;

	/* Return with success. */
	return true;
}

uint32 FVehiclePhysicsStateArray::FirstFrame()
{
	return States[0].FrameNumber;
}

uint32 FVehiclePhysicsStateArray::LastFrame()
{
	return States[NumElements - 1].FrameNumber;
}

FVehicleInputState::FVehicleInputState()
{
	FrameNumber = 0;
	AccelerationInput = 0.f;
	TurningInput = 0.f;
	BinaryInput = 0;
}

FVehicleInputStateArray::FVehicleInputStateArray()
{
	NumElements = 0;
}

uint8 FVehicleInputStateArray::Num()
{
	return NumElements;
}

void FVehicleInputStateArray::AddState(const FVehicleInputState& State)
{
	/* Check if the array is full. */
	if (NumElements == MAX_STATES)
	{
		/* Replace the oldest state with the provided one. */
		States[0] = State;
	}
	else
	{
		/* In this scenario simply add the state to the list. */
		States[NumElements] = State;
		NumElements++;
	}

	/* In the end always sort the entries. */
	for (uint8 i = 0; i < NumElements; ++i)
	{
		for (uint8 j = i + 1; j < NumElements; ++j)
		{
			if (States[i].FrameNumber > 0 && States[i].FrameNumber > States[j].FrameNumber)
			{
				FVehicleInputState stateTemp = States[i];
				States[i] = States[j];
				States[j] = stateTemp;
			}
		}
	}
}

bool FVehicleInputStateArray::PullState(FVehicleInputState& OutState)
{
	/* If buffer is empty, bail with false. */
	if (NumElements == 0)
	{
		return false;
	}

	/* Pull out the very first state by copy. */
	FVehicleInputState stateCopy = States[0];
	OutState = stateCopy;

	/* Move the stack down. */
	for (uint8 i = 0; i < NumElements - 1; ++i)
	{
		States[i] = States[i + 1];
	}

	/* Decrease number of elements tracked. */
	NumElements--;

	/* Return with success. */
	return true;
}

uint32 FVehicleInputStateArray::FirstFrame()
{
	return States[NumElements - 1].FrameNumber;
}

uint32 FVehicleInputStateArray::LastFrame()
{
	return States[NumElements - 1].FrameNumber;
}
