// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/ArcadeVehicleMovementComponentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeVehicleMovementComponentBase() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleMovementComponentBase_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleMovementComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_NoRegister();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsStateArray();
// End Cross Module References
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execOnReceiveState_Client)
	{
		P_GET_STRUCT(FVehiclePhysicsState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceiveState_Client_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execOnReceiveState_Server)
	{
		P_GET_STRUCT(FVehiclePhysicsState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceiveState_Server_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execClearNetworkData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearNetworkData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execGetVehicleMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetVehicleMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execSetBlockAcceleration)
	{
		P_GET_UBOOL(Z_Param_Block);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlockAcceleration(Z_Param_Block);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execGetWheelOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWheelOffset(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execSetVehicleLinearVelocity)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_GET_UBOOL(Z_Param_WorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVehicleLinearVelocity(Z_Param_Out_LinearVelocity,Z_Param_WorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execTeleportVehicle)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportVehicle(Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execIsEngineBraking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEngineBraking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execIsBraking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBraking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execIsMovingAtAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMovingAtAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execIsMovingBackward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMovingBackward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execIsMovingForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMovingForward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execIsAccelerating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAccelerating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execSetStabilizationInput)
	{
		P_GET_UBOOL(Z_Param_EnableStabilization);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStabilizationInput(Z_Param_EnableStabilization);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execSetDriftInput)
	{
		P_GET_UBOOL(Z_Param_EnableDrift);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDriftInput(Z_Param_EnableDrift);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execSetTurningInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTurningInput(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execSetAccelerationInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAccelerationInput(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execGetMaxSpeedMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxSpeedMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execSetMaxSpeedMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxSpeedMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSpeedMultiplier(Z_Param_NewMaxSpeedMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execGetLastAppliedBraking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLastAppliedBraking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execGetLastAppliedAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLastAppliedAcceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execGetCurrentSpeedUnit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeedUnit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execGetCurrentSpeedAbsolute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeedAbsolute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleMovementComponentBase::execGetCurrentSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeed();
		P_NATIVE_END;
	}
	static FName NAME_UArcadeVehicleMovementComponentBase_OnReceiveState_Client = FName(TEXT("OnReceiveState_Client"));
	void UArcadeVehicleMovementComponentBase::OnReceiveState_Client(FVehiclePhysicsState const& State)
	{
		ArcadeVehicleMovementComponentBase_eventOnReceiveState_Client_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_UArcadeVehicleMovementComponentBase_OnReceiveState_Client),&Parms);
	}
	static FName NAME_UArcadeVehicleMovementComponentBase_OnReceiveState_Server = FName(TEXT("OnReceiveState_Server"));
	void UArcadeVehicleMovementComponentBase::OnReceiveState_Server(FVehiclePhysicsState const& State)
	{
		ArcadeVehicleMovementComponentBase_eventOnReceiveState_Server_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_UArcadeVehicleMovementComponentBase_OnReceiveState_Server),&Parms);
	}
	void UArcadeVehicleMovementComponentBase::StaticRegisterNativesUArcadeVehicleMovementComponentBase()
	{
		UClass* Class = UArcadeVehicleMovementComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearNetworkData", &UArcadeVehicleMovementComponentBase::execClearNetworkData },
			{ "GetCurrentSpeed", &UArcadeVehicleMovementComponentBase::execGetCurrentSpeed },
			{ "GetCurrentSpeedAbsolute", &UArcadeVehicleMovementComponentBase::execGetCurrentSpeedAbsolute },
			{ "GetCurrentSpeedUnit", &UArcadeVehicleMovementComponentBase::execGetCurrentSpeedUnit },
			{ "GetLastAppliedAcceleration", &UArcadeVehicleMovementComponentBase::execGetLastAppliedAcceleration },
			{ "GetLastAppliedBraking", &UArcadeVehicleMovementComponentBase::execGetLastAppliedBraking },
			{ "GetMaxSpeedMultiplier", &UArcadeVehicleMovementComponentBase::execGetMaxSpeedMultiplier },
			{ "GetVehicleMesh", &UArcadeVehicleMovementComponentBase::execGetVehicleMesh },
			{ "GetWheelOffset", &UArcadeVehicleMovementComponentBase::execGetWheelOffset },
			{ "IsAccelerating", &UArcadeVehicleMovementComponentBase::execIsAccelerating },
			{ "IsBraking", &UArcadeVehicleMovementComponentBase::execIsBraking },
			{ "IsEngineBraking", &UArcadeVehicleMovementComponentBase::execIsEngineBraking },
			{ "IsMovingAtAll", &UArcadeVehicleMovementComponentBase::execIsMovingAtAll },
			{ "IsMovingBackward", &UArcadeVehicleMovementComponentBase::execIsMovingBackward },
			{ "IsMovingForward", &UArcadeVehicleMovementComponentBase::execIsMovingForward },
			{ "OnReceiveState_Client", &UArcadeVehicleMovementComponentBase::execOnReceiveState_Client },
			{ "OnReceiveState_Server", &UArcadeVehicleMovementComponentBase::execOnReceiveState_Server },
			{ "SetAccelerationInput", &UArcadeVehicleMovementComponentBase::execSetAccelerationInput },
			{ "SetBlockAcceleration", &UArcadeVehicleMovementComponentBase::execSetBlockAcceleration },
			{ "SetDriftInput", &UArcadeVehicleMovementComponentBase::execSetDriftInput },
			{ "SetMaxSpeedMultiplier", &UArcadeVehicleMovementComponentBase::execSetMaxSpeedMultiplier },
			{ "SetStabilizationInput", &UArcadeVehicleMovementComponentBase::execSetStabilizationInput },
			{ "SetTurningInput", &UArcadeVehicleMovementComponentBase::execSetTurningInput },
			{ "SetVehicleLinearVelocity", &UArcadeVehicleMovementComponentBase::execSetVehicleLinearVelocity },
			{ "TeleportVehicle", &UArcadeVehicleMovementComponentBase::execTeleportVehicle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_ClearNetworkData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_ClearNetworkData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Clears network data of this vehicle. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Clears network data of this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_ClearNetworkData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "ClearNetworkData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_ClearNetworkData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_ClearNetworkData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_ClearNetworkData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_ClearNetworkData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventGetCurrentSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventGetCurrentSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns current speed of the vehicle, but it will be negative when the vehicle is reversing and positive if moving forward. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns current speed of the vehicle, but it will be negative when the vehicle is reversing and positive if moving forward." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "GetCurrentSpeed", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventGetCurrentSpeed_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventGetCurrentSpeedAbsolute_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventGetCurrentSpeedAbsolute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns current speed of the vehicle as absolute value, so it doesn't matter whether the vehicle is moving forward of backward, it will just return speed. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns current speed of the vehicle as absolute value, so it doesn't matter whether the vehicle is moving forward of backward, it will just return speed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "GetCurrentSpeedAbsolute", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventGetCurrentSpeedAbsolute_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventGetCurrentSpeedUnit_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventGetCurrentSpeedUnit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns current speed of the vehicle defined as 0-1 unit from 0 to max speed. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns current speed of the vehicle defined as 0-1 unit from 0 to max speed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "GetCurrentSpeedUnit", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventGetCurrentSpeedUnit_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventGetLastAppliedAcceleration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventGetLastAppliedAcceleration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns last applied known acceleration in any direction. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns last applied known acceleration in any direction." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "GetLastAppliedAcceleration", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventGetLastAppliedAcceleration_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventGetLastAppliedBraking_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventGetLastAppliedBraking_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns last applied know braking in any direction. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns last applied know braking in any direction." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "GetLastAppliedBraking", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventGetLastAppliedBraking_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventGetMaxSpeedMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventGetMaxSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns current max speed multiplier. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns current max speed multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "GetMaxSpeedMultiplier", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventGetMaxSpeedMultiplier_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventGetVehicleMesh_Parms
		{
			UPrimitiveComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventGetVehicleMesh_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleMesh" },
		{ "Comment", "/** Returns vehicle simulation mesh, which is the root component. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns vehicle simulation mesh, which is the root component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "GetVehicleMesh", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventGetVehicleMesh_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventGetWheelOffset_Parms
		{
			int32 Index;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventGetWheelOffset_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventGetWheelOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Returns wheel offset for the wheel of specified index. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns wheel offset for the wheel of specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "GetWheelOffset", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventGetWheelOffset_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventIsAccelerating_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventIsAccelerating_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventIsAccelerating_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Checks if vehicle is currently accelerating, so moving forward. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Checks if vehicle is currently accelerating, so moving forward." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "IsAccelerating", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventIsAccelerating_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventIsBraking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventIsBraking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventIsBraking_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns whether or not this vehicle is currently braking(not the same as reversing). */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns whether or not this vehicle is currently braking(not the same as reversing)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "IsBraking", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventIsBraking_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventIsEngineBraking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventIsEngineBraking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventIsEngineBraking_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Returns specifically state of the engine braking. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Returns specifically state of the engine braking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "IsEngineBraking", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventIsEngineBraking_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventIsMovingAtAll_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventIsMovingAtAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventIsMovingAtAll_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Check if the vehicle is currently moving at all, that'd be forward or backward. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Check if the vehicle is currently moving at all, that'd be forward or backward." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "IsMovingAtAll", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventIsMovingAtAll_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventIsMovingBackward_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventIsMovingBackward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventIsMovingBackward_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Checks if the vehicle is currently moving backwards. It doesn't mean accelerating, but just direction of the movement. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Checks if the vehicle is currently moving backwards. It doesn't mean accelerating, but just direction of the movement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "IsMovingBackward", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventIsMovingBackward_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventIsMovingForward_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventIsMovingForward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventIsMovingForward_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Checks if the vehicle is currently moving forwards. It doesn't mean accelerating, but just direction of the movement. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Checks if the vehicle is currently moving forwards. It doesn't mean accelerating, but just direction of the movement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "IsMovingForward", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventIsMovingForward_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventOnReceiveState_Client_Parms, State), Z_Construct_UScriptStruct_FVehiclePhysicsState, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Rpc called on all of the clients when the server receives state from the owning client. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Rpc called on all of the clients when the server receives state from the owning client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "OnReceiveState_Client", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventOnReceiveState_Client_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventOnReceiveState_Server_Parms, State), Z_Construct_UScriptStruct_FVehiclePhysicsState, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Rpc called on the server when the client owning the vehicle sends its state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Rpc called on the server when the client owning the vehicle sends its state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "OnReceiveState_Server", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventOnReceiveState_Server_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventSetAccelerationInput_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventSetAccelerationInput_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Sets current acceleration input. It is automatically clamped between -1 and 1. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Sets current acceleration input. It is automatically clamped between -1 and 1." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "SetAccelerationInput", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventSetAccelerationInput_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventSetBlockAcceleration_Parms
		{
			bool Block;
		};
		static void NewProp_Block_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Block;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::NewProp_Block_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventSetBlockAcceleration_Parms*)Obj)->Block = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventSetBlockAcceleration_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::NewProp_Block_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::NewProp_Block,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Acceleration" },
		{ "Comment", "/** Function that allows to blocking acceleration. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Function that allows to blocking acceleration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "SetBlockAcceleration", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventSetBlockAcceleration_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventSetDriftInput_Parms
		{
			bool EnableDrift;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableDrift_MetaData[];
#endif
		static void NewProp_EnableDrift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableDrift;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::NewProp_EnableDrift_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::NewProp_EnableDrift_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventSetDriftInput_Parms*)Obj)->EnableDrift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::NewProp_EnableDrift = { "EnableDrift", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventSetDriftInput_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::NewProp_EnableDrift_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::NewProp_EnableDrift_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::NewProp_EnableDrift_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::NewProp_EnableDrift,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Sets current drift input. Value of false will stop drifting, and value of true will start it. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Sets current drift input. Value of false will stop drifting, and value of true will start it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "SetDriftInput", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventSetDriftInput_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventSetMaxSpeedMultiplier_Parms
		{
			float NewMaxSpeedMultiplier;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMaxSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::NewProp_NewMaxSpeedMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::NewProp_NewMaxSpeedMultiplier = { "NewMaxSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventSetMaxSpeedMultiplier_Parms, NewMaxSpeedMultiplier), METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::NewProp_NewMaxSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::NewProp_NewMaxSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::NewProp_NewMaxSpeedMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Sets max speed of this vehicle immediately. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Sets max speed of this vehicle immediately." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "SetMaxSpeedMultiplier", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventSetMaxSpeedMultiplier_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventSetStabilizationInput_Parms
		{
			bool EnableStabilization;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableStabilization_MetaData[];
#endif
		static void NewProp_EnableStabilization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableStabilization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::NewProp_EnableStabilization_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::NewProp_EnableStabilization_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventSetStabilizationInput_Parms*)Obj)->EnableStabilization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::NewProp_EnableStabilization = { "EnableStabilization", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventSetStabilizationInput_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::NewProp_EnableStabilization_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::NewProp_EnableStabilization_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::NewProp_EnableStabilization_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::NewProp_EnableStabilization,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Sets current stabilization input. Value of false will stop stabilizing, and value of true will start it. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Sets current stabilization input. Value of false will stop stabilizing, and value of true will start it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "SetStabilizationInput", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventSetStabilizationInput_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventSetTurningInput_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventSetTurningInput_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Sets current turning input. It is automatically clamped between -1 and 1. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Sets current turning input. It is automatically clamped between -1 and 1." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "SetTurningInput", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventSetTurningInput_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventSetVehicleLinearVelocity_Parms
		{
			FVector LinearVelocity;
			bool WorldSpace;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSpace_MetaData[];
#endif
		static void NewProp_WorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WorldSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventSetVehicleLinearVelocity_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_LinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_WorldSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_WorldSpace_SetBit(void* Obj)
	{
		((ArcadeVehicleMovementComponentBase_eventSetVehicleLinearVelocity_Parms*)Obj)->WorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_WorldSpace = { "WorldSpace", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleMovementComponentBase_eventSetVehicleLinearVelocity_Parms), &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_WorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_WorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_WorldSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_LinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::NewProp_WorldSpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Sets current linear velocity to the physics of the vehicle. Should only be called on the host-side. Velocity can be set in local or world space. */" },
		{ "CPP_Default_WorldSpace", "false" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Sets current linear velocity to the physics of the vehicle. Should only be called on the host-side. Velocity can be set in local or world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "SetVehicleLinearVelocity", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventSetVehicleLinearVelocity_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics
	{
		struct ArcadeVehicleMovementComponentBase_eventTeleportVehicle_Parms
		{
			FTransform Transform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleMovementComponentBase_eventTeleportVehicle_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Teleports this vehicle to the provided transform and clears the physics state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Teleports this vehicle to the provided transform and clears the physics state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase, nullptr, "TeleportVehicle", nullptr, nullptr, sizeof(ArcadeVehicleMovementComponentBase_eventTeleportVehicle_Parms), Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArcadeVehicleMovementComponentBase_NoRegister()
	{
		return UArcadeVehicleMovementComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelerationInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurningInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriftInput_MetaData[];
#endif
		static void NewProp_DriftInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DriftInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilizationInput_MetaData[];
#endif
		static void NewProp_StabilizationInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StabilizationInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsVehicleInitialized_MetaData[];
#endif
		static void NewProp_m_bIsVehicleInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsVehicleInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_wheelsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_wheelsInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bHasValidPhysicsState_MetaData[];
#endif
		static void NewProp_m_bHasValidPhysicsState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bHasValidPhysicsState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsAccelerating_MetaData[];
#endif
		static void NewProp_m_bIsAccelerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsBraking_MetaData[];
#endif
		static void NewProp_m_bIsBraking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsBraking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsEngineBraking_MetaData[];
#endif
		static void NewProp_m_bIsEngineBraking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsEngineBraking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bBlockAcceleration_MetaData[];
#endif
		static void NewProp_m_bBlockAcceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bBlockAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lastAppliedAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_lastAppliedAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lastAppliedBraking_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_lastAppliedBraking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_physicsUpdateTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_physicsUpdateTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mutablePhysicsUpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_mutablePhysicsUpdateInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_locationError_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_locationError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_rotationError_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_rotationError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsCorrectingLocationError_MetaData[];
#endif
		static void NewProp_m_bIsCorrectingLocationError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsCorrectingLocationError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsCorrectingRotationError_MetaData[];
#endif
		static void NewProp_m_bIsCorrectingRotationError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsCorrectingRotationError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsReplayingState_MetaData[];
#endif
		static void NewProp_m_bIsReplayingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsReplayingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pPathFollowingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pPathFollowingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_states_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_states;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lastDispatchedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_lastDispatchedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_runtimeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_runtimeState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_ClearNetworkData, "ClearNetworkData" }, // 549255663
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeed, "GetCurrentSpeed" }, // 2582275241
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedAbsolute, "GetCurrentSpeedAbsolute" }, // 1070236372
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetCurrentSpeedUnit, "GetCurrentSpeedUnit" }, // 2396556813
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedAcceleration, "GetLastAppliedAcceleration" }, // 2130989950
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetLastAppliedBraking, "GetLastAppliedBraking" }, // 2524483812
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetMaxSpeedMultiplier, "GetMaxSpeedMultiplier" }, // 3922342962
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetVehicleMesh, "GetVehicleMesh" }, // 3180386729
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_GetWheelOffset, "GetWheelOffset" }, // 1580057447
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsAccelerating, "IsAccelerating" }, // 3373878591
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsBraking, "IsBraking" }, // 2343916450
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsEngineBraking, "IsEngineBraking" }, // 594081856
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingAtAll, "IsMovingAtAll" }, // 1055282716
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingBackward, "IsMovingBackward" }, // 2697515821
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_IsMovingForward, "IsMovingForward" }, // 666002380
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Client, "OnReceiveState_Client" }, // 921485291
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_OnReceiveState_Server, "OnReceiveState_Server" }, // 4281675732
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetAccelerationInput, "SetAccelerationInput" }, // 742127888
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetBlockAcceleration, "SetBlockAcceleration" }, // 216821892
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetDriftInput, "SetDriftInput" }, // 2759804692
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetMaxSpeedMultiplier, "SetMaxSpeedMultiplier" }, // 1110115314
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetStabilizationInput, "SetStabilizationInput" }, // 362689759
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetTurningInput, "SetTurningInput" }, // 2437547313
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_SetVehicleLinearVelocity, "SetVehicleLinearVelocity" }, // 3134441071
		{ &Z_Construct_UFunction_UArcadeVehicleMovementComponentBase_TeleportVehicle, "TeleportVehicle" }, // 798561118
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09""Component that is responsible for calculating and synchronizing vehicle\n\x09movement physics. This is arcade-like vehicle physics.\n\x09It is base component and should not be used, but derived from.\n*/" },
		{ "IncludePath", "ArcadeVehicleMovementComponentBase.h" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Component that is responsible for calculating and synchronizing vehicle\nmovement physics. This is arcade-like vehicle physics.\nIt is base component and should not be used, but derived from." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_AccelerationInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Defines the acceleration input for this component. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Defines the acceleration input for this component." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_AccelerationInput = { "AccelerationInput", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, AccelerationInput), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_AccelerationInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_AccelerationInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_TurningInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Defines the turning input for this component. The value is networked for cosmetic purposes. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Defines the turning input for this component. The value is networked for cosmetic purposes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_TurningInput = { "TurningInput", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, TurningInput), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_TurningInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_TurningInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_DriftInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Defines drifting input. Input is internally transfered to with the network state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Defines drifting input. Input is internally transfered to with the network state." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_DriftInput_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->DriftInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_DriftInput = { "DriftInput", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_DriftInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_DriftInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_DriftInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_StabilizationInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Defines stabilization input. Input is internally transferred to with the network state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Defines stabilization input. Input is internally transferred to with the network state." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_StabilizationInput_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->StabilizationInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_StabilizationInput = { "StabilizationInput", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_StabilizationInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_StabilizationInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_StabilizationInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_MaxSpeedMultiplier_MetaData[] = {
		{ "Comment", "/** Defines max speed multiplier. It allows to quickly lock vehicle speed, and unlock it at will. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Defines max speed multiplier. It allows to quickly lock vehicle speed, and unlock it at will." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_MaxSpeedMultiplier = { "MaxSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, MaxSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_MaxSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_MaxSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "VehicleSettings" },
		{ "Comment", "/** All of the vehicle settings split into groups. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "All of the vehicle settings split into groups." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, Settings), Z_Construct_UScriptStruct_FVehicleSettings, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pMesh_MetaData[] = {
		{ "Comment", "/**\n\x09 * Assigned mesh of this vehicle. This should always be the root component possibly.\n\x09 * Also this is the component responsible for simulation of this vehicle.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Assigned mesh of this vehicle. This should always be the root component possibly.\nAlso this is the component responsible for simulation of this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pMesh = { "m_pMesh", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_pMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsVehicleInitialized_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether or not this vehicle is fully initialized.\n\x09 * This is assigned during the initialization phase and\n\x09 * is true if the references are valid.\n\x09 * It won't allow any ticking, at any point in time if invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Whether or not this vehicle is fully initialized.\nThis is assigned during the initialization phase and\nis true if the references are valid.\nIt won't allow any ticking, at any point in time if invalid." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsVehicleInitialized_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->m_bIsVehicleInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsVehicleInitialized = { "m_bIsVehicleInitialized", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsVehicleInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsVehicleInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsVehicleInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_wheelsInfo_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores runtime wheels information.\n\x09 * Simply to avoid putting here another few variables.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Stores runtime wheels information.\nSimply to avoid putting here another few variables." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_wheelsInfo = { "m_wheelsInfo", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_wheelsInfo), Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_wheelsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_wheelsInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bHasValidPhysicsState_MetaData[] = {
		{ "Comment", "/** Defines whether there is a valid physics state. It is used for the tick between physics. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Defines whether there is a valid physics state. It is used for the tick between physics." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bHasValidPhysicsState_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->m_bHasValidPhysicsState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bHasValidPhysicsState = { "m_bHasValidPhysicsState", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bHasValidPhysicsState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bHasValidPhysicsState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bHasValidPhysicsState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsAccelerating_MetaData[] = {
		{ "Comment", "/** Runtime flag used to check if vehicle is accelerating. It can be accelerating either forward or backward. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Runtime flag used to check if vehicle is accelerating. It can be accelerating either forward or backward." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsAccelerating_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->m_bIsAccelerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsAccelerating = { "m_bIsAccelerating", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsBraking_MetaData[] = {
		{ "Comment", "/**\n\x09\x09Runtime flag that allows to check if the vehicle is currently braking.\n\x09\x09Note, braking is not the same as reversing. Braking can mean releasing input\n\x09\x09or accelerating in direction opposite to the vehicle movement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Runtime flag that allows to check if the vehicle is currently braking.\nNote, braking is not the same as reversing. Braking can mean releasing input\nor accelerating in direction opposite to the vehicle movement." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsBraking_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->m_bIsBraking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsBraking = { "m_bIsBraking", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsBraking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsBraking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsBraking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsEngineBraking_MetaData[] = {
		{ "Comment", "/** Runtime flag used to specifically check if the engine braking is going on. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Runtime flag used to specifically check if the engine braking is going on." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsEngineBraking_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->m_bIsEngineBraking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsEngineBraking = { "m_bIsEngineBraking", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsEngineBraking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsEngineBraking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsEngineBraking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bBlockAcceleration_MetaData[] = {
		{ "Comment", "/** \n\x09\x09Simple flag that can be driven from the external logic to block accelerating.\n\x09\x09Might be usable for example for vehicle running out of fuel, or it's broken down etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Simple flag that can be driven from the external logic to block accelerating.\nMight be usable for example for vehicle running out of fuel, or it's broken down etc." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bBlockAcceleration_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->m_bBlockAcceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bBlockAcceleration = { "m_bBlockAcceleration", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bBlockAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bBlockAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bBlockAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedAcceleration_MetaData[] = {
		{ "Comment", "/** Stores last applied acceleration. It is not cleared, so make sure to check IsAccelerating to see if value is valid. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Stores last applied acceleration. It is not cleared, so make sure to check IsAccelerating to see if value is valid." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedAcceleration = { "m_lastAppliedAcceleration", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_lastAppliedAcceleration), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedBraking_MetaData[] = {
		{ "Comment", "/** Stores last applied braking. It is not cleared, so make sure to check IsBraking to see if it's valid. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Stores last applied braking. It is not cleared, so make sure to check IsBraking to see if it's valid." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedBraking = { "m_lastAppliedBraking", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_lastAppliedBraking), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedBraking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedBraking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_physicsUpdateTimer_MetaData[] = {
		{ "Comment", "/** Internal timer used for catching the moment when we want to simulate physics. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Internal timer used for catching the moment when we want to simulate physics." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_physicsUpdateTimer = { "m_physicsUpdateTimer", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_physicsUpdateTimer), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_physicsUpdateTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_physicsUpdateTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_mutablePhysicsUpdateInterval_MetaData[] = {
		{ "Comment", "/** Runtime PhysicsUpdateInterval value used for speeding up physics simulation when running behind. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Runtime PhysicsUpdateInterval value used for speeding up physics simulation when running behind." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_mutablePhysicsUpdateInterval = { "m_mutablePhysicsUpdateInterval", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_mutablePhysicsUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_mutablePhysicsUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_mutablePhysicsUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_locationError_MetaData[] = {
		{ "Comment", "/** Runtime value of the location error cached upon state dispatch. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Runtime value of the location error cached upon state dispatch." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_locationError = { "m_locationError", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_locationError), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_locationError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_locationError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_rotationError_MetaData[] = {
		{ "Comment", "/** Runtime value of the rotation error cached upon state dispatch. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Runtime value of the rotation error cached upon state dispatch." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_rotationError = { "m_rotationError", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_rotationError), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_rotationError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_rotationError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingLocationError_MetaData[] = {
		{ "Comment", "/** Defines whether the error correction is ongoing for location. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Defines whether the error correction is ongoing for location." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingLocationError_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->m_bIsCorrectingLocationError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingLocationError = { "m_bIsCorrectingLocationError", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingLocationError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingLocationError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingLocationError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingRotationError_MetaData[] = {
		{ "Comment", "/** Defines whether the error correction is ongoing for rotation. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Defines whether the error correction is ongoing for rotation." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingRotationError_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->m_bIsCorrectingRotationError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingRotationError = { "m_bIsCorrectingRotationError", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingRotationError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingRotationError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingRotationError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsReplayingState_MetaData[] = {
		{ "Comment", "/**\n\x09\x09Runtime values defining whether non-controlling client is currently replaying latest state.\n\x09\x09It's a handy value, that allows to overwrite state early when replaying.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Runtime values defining whether non-controlling client is currently replaying latest state.\nIt's a handy value, that allows to overwrite state early when replaying." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsReplayingState_SetBit(void* Obj)
	{
		((UArcadeVehicleMovementComponentBase*)Obj)->m_bIsReplayingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsReplayingState = { "m_bIsReplayingState", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleMovementComponentBase), &Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsReplayingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsReplayingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsReplayingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pPathFollowingComponent_MetaData[] = {
		{ "Comment", "/** Cached path following component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Cached path following component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pPathFollowingComponent = { "m_pPathFollowingComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_pPathFollowingComponent), Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pPathFollowingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pPathFollowingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_states_MetaData[] = {
		{ "Comment", "/** Represents total list of states received. It is only used by non-controlling side. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Represents total list of states received. It is only used by non-controlling side." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_states = { "m_states", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_states), Z_Construct_UScriptStruct_FVehiclePhysicsStateArray, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_states_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_states_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastDispatchedState_MetaData[] = {
		{ "Comment", "/** Last state that was dispatched. This is every only used on the non controlling side. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "Last state that was dispatched. This is every only used on the non controlling side." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastDispatchedState = { "m_lastDispatchedState", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_lastDispatchedState), Z_Construct_UScriptStruct_FVehiclePhysicsState, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastDispatchedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastDispatchedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_runtimeState_MetaData[] = {
		{ "Comment", "/** \n\x09\x09This state is cached for dispatch. It is used on all sides locally for the actual calculation of the physics.\n\x09\x09The controlling side essentially sets up next physics step to work towards, and sends its initial state.\n\x09\x09Non controlling side assigns this runtime state when dispatching next physics step. That's when this is used.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponentBase.h" },
		{ "ToolTip", "This state is cached for dispatch. It is used on all sides locally for the actual calculation of the physics.\nThe controlling side essentially sets up next physics step to work towards, and sends its initial state.\nNon controlling side assigns this runtime state when dispatching next physics step. That's when this is used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_runtimeState = { "m_runtimeState", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_runtimeState), Z_Construct_UScriptStruct_FVehiclePhysicsState, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_runtimeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_runtimeState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_AccelerationInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_TurningInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_DriftInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_StabilizationInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_MaxSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsVehicleInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_wheelsInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bHasValidPhysicsState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsBraking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsEngineBraking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bBlockAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastAppliedBraking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_physicsUpdateTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_mutablePhysicsUpdateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_locationError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_rotationError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingLocationError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsCorrectingRotationError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_bIsReplayingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_pPathFollowingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_states,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_lastDispatchedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::NewProp_m_runtimeState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArcadeVehicleMovementComponentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::ClassParams = {
		&UArcadeVehicleMovementComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArcadeVehicleMovementComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArcadeVehicleMovementComponentBase, 905607725);
	template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<UArcadeVehicleMovementComponentBase>()
	{
		return UArcadeVehicleMovementComponentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArcadeVehicleMovementComponentBase(Z_Construct_UClass_UArcadeVehicleMovementComponentBase, &UArcadeVehicleMovementComponentBase::StaticClass, TEXT("/Script/ArcadeVehicleSystem"), TEXT("UArcadeVehicleMovementComponentBase"), false, nullptr, nullptr, nullptr);

	void UArcadeVehicleMovementComponentBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MaxSpeedMultiplier(TEXT("MaxSpeedMultiplier"));

		const bool bIsValid = true
			&& Name_MaxSpeedMultiplier == ClassReps[(int32)ENetFields_Private::MaxSpeedMultiplier].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UArcadeVehicleMovementComponentBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArcadeVehicleMovementComponentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
