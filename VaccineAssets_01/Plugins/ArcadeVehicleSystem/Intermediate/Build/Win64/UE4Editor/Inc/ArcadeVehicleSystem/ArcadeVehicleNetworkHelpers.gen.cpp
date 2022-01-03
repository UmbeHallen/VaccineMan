// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/ArcadeVehicleNetworkHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeVehicleNetworkHelpers() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputStateArray();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputState();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFloat_NetQuantize();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsStateArray();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D_NetQuantize();
// End Cross Module References
class UScriptStruct* FVehicleInputStateArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleInputStateArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleInputStateArray, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleInputStateArray"), sizeof(FVehicleInputStateArray), Get_Z_Construct_UScriptStruct_FVehicleInputStateArray_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleInputStateArray>()
{
	return FVehicleInputStateArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleInputStateArray(FVehicleInputStateArray::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleInputStateArray"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleInputStateArray
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleInputStateArray()
	{
		UScriptStruct::DeferCppStructOps<FVehicleInputStateArray>(FName(TEXT("VehicleInputStateArray")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleInputStateArray;
	struct Z_Construct_UScriptStruct_FVehicleInputStateArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputStateArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Special type of array that is completely static and replaces input states at the bottom if its size is exceeded. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Special type of array that is completely static and replaces input states at the bottom if its size is exceeded." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleInputStateArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleInputStateArray>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleInputStateArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleInputStateArray",
		sizeof(FVehicleInputStateArray),
		alignof(FVehicleInputStateArray),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleInputStateArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputStateArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputStateArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleInputStateArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleInputStateArray"), sizeof(FVehicleInputStateArray), Get_Z_Construct_UScriptStruct_FVehicleInputStateArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleInputStateArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleInputStateArray_Hash() { return 1145515098U; }
class UScriptStruct* FVehicleInputState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleInputState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleInputState, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleInputState"), sizeof(FVehicleInputState), Get_Z_Construct_UScriptStruct_FVehicleInputState_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleInputState>()
{
	return FVehicleInputState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleInputState(FVehicleInputState::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleInputState"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleInputState
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleInputState()
	{
		UScriptStruct::DeferCppStructOps<FVehicleInputState>(FName(TEXT("VehicleInputState")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleInputState;
	struct Z_Construct_UScriptStruct_FVehicleInputState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FrameNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelerationInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurningInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BinaryInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BinaryInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n\x09Input state sent from the controlling client to the server, when using server authoritative vehicles.\n\x09It not only contains inputs, but also contains frame number, so that the controlling client knows which state\n\x09this input is feedback for.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Input state sent from the controlling client to the server, when using server authoritative vehicles.\nIt not only contains inputs, but also contains frame number, so that the controlling client knows which state\nthis input is feedback for." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleInputState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_FrameNumber_MetaData[] = {
		{ "Comment", "/** Number of the frame this input was sent for. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Number of the frame this input was sent for." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleInputState, FrameNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_FrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_FrameNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_AccelerationInput_MetaData[] = {
		{ "Comment", "/** Acceleration input provided by this state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Acceleration input provided by this state." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_AccelerationInput = { "AccelerationInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleInputState, AccelerationInput), Z_Construct_UScriptStruct_FFloat_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_AccelerationInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_AccelerationInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_TurningInput_MetaData[] = {
		{ "Comment", "/** Turning input provided by this state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Turning input provided by this state." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_TurningInput = { "TurningInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleInputState, TurningInput), Z_Construct_UScriptStruct_FFloat_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_TurningInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_TurningInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_BinaryInput_MetaData[] = {
		{ "Comment", "/** Binary input provided by this state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Binary input provided by this state." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_BinaryInput = { "BinaryInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleInputState, BinaryInput), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_BinaryInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_BinaryInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleInputState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_FrameNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_AccelerationInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_TurningInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputState_Statics::NewProp_BinaryInput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleInputState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleInputState",
		sizeof(FVehicleInputState),
		alignof(FVehicleInputState),
		Z_Construct_UScriptStruct_FVehicleInputState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleInputState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleInputState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleInputState"), sizeof(FVehicleInputState), Get_Z_Construct_UScriptStruct_FVehicleInputState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleInputState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleInputState_Hash() { return 2723872598U; }
class UScriptStruct* FVehiclePhysicsStateArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehiclePhysicsStateArray, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehiclePhysicsStateArray"), sizeof(FVehiclePhysicsStateArray), Get_Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehiclePhysicsStateArray>()
{
	return FVehiclePhysicsStateArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehiclePhysicsStateArray(FVehiclePhysicsStateArray::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehiclePhysicsStateArray"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehiclePhysicsStateArray
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehiclePhysicsStateArray()
	{
		UScriptStruct::DeferCppStructOps<FVehiclePhysicsStateArray>(FName(TEXT("VehiclePhysicsStateArray")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehiclePhysicsStateArray;
	struct Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Special type of array that is completely static and replaces physics states at the bottom if its size is exceeded. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Special type of array that is completely static and replaces physics states at the bottom if its size is exceeded." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehiclePhysicsStateArray>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehiclePhysicsStateArray",
		sizeof(FVehiclePhysicsStateArray),
		alignof(FVehiclePhysicsStateArray),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsStateArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehiclePhysicsStateArray"), sizeof(FVehiclePhysicsStateArray), Get_Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsStateArray_Hash() { return 4268569879U; }
class UScriptStruct* FVehiclePhysicsState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehiclePhysicsState, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehiclePhysicsState"), sizeof(FVehiclePhysicsState), Get_Z_Construct_UScriptStruct_FVehiclePhysicsState_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehiclePhysicsState>()
{
	return FVehiclePhysicsState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehiclePhysicsState(FVehiclePhysicsState::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehiclePhysicsState"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehiclePhysicsState
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehiclePhysicsState()
	{
		UScriptStruct::DeferCppStructOps<FVehiclePhysicsState>(FName(TEXT("VehiclePhysicsState")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehiclePhysicsState;
	struct Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FrameNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationRotationDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelerationRotationDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurningInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BinaryInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BinaryInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n\x09Grouped vehicle runtime information gathered\n\x09using the vehicle physics simulation.\n\x09The values in this state are ordered in ascending order in terms of memory\n\x09to make it CPU cache-perfect, to waste the least possible memory.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Grouped vehicle runtime information gathered\nusing the vehicle physics simulation.\nThe values in this state are ordered in ascending order in terms of memory\nto make it CPU cache-perfect, to waste the least possible memory." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehiclePhysicsState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/** Location of this vehicle at this state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Location of this vehicle at this state." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsState, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation of this vehicle at this state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Rotation of this vehicle at this state." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsState, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Comment", "/** Linear velocity at this state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Linear velocity at this state." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsState, LinearVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_LinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Comment", "/** Angular velocity at this state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Angular velocity at this state." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsState, AngularVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_FrameNumber_MetaData[] = {
		{ "Comment", "/** Defines number of the frame associated with this state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Defines number of the frame associated with this state." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsState, FrameNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_FrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_FrameNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AccelerationRotationDelta_MetaData[] = {
		{ "Comment", "/**\n\x09 * Defines runtime value of the acceleration delta cached upon simulation tick as X axis.\n\x09 * Defines runtime value of the rotation delta cached upon simulation tick as Y axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Defines runtime value of the acceleration delta cached upon simulation tick as X axis.\nDefines runtime value of the rotation delta cached upon simulation tick as Y axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AccelerationRotationDelta = { "AccelerationRotationDelta", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsState, AccelerationRotationDelta), Z_Construct_UScriptStruct_FVector2D_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AccelerationRotationDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AccelerationRotationDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_TurningInput_MetaData[] = {
		{ "Comment", "/** Turning input is not important for the gameplay, it's only used for animation purposes, thus low accuracy(int8). */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Turning input is not important for the gameplay, it's only used for animation purposes, thus low accuracy(int8)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_TurningInput = { "TurningInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsState, TurningInput), Z_Construct_UScriptStruct_FFloat_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_TurningInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_TurningInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_BinaryInput_MetaData[] = {
		{ "Comment", "/** Defines binary inputs sent over the network in form of bit flags. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetworkHelpers.h" },
		{ "ToolTip", "Defines binary inputs sent over the network in form of bit flags." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_BinaryInput = { "BinaryInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsState, BinaryInput), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_BinaryInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_BinaryInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_LinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_FrameNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_AccelerationRotationDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_TurningInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::NewProp_BinaryInput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehiclePhysicsState",
		sizeof(FVehiclePhysicsState),
		alignof(FVehiclePhysicsState),
		Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehiclePhysicsState"), sizeof(FVehiclePhysicsState), Get_Z_Construct_UScriptStruct_FVehiclePhysicsState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehiclePhysicsState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsState_Hash() { return 2215013038U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
