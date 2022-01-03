// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/ArcadeVehicleCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeVehicleCameraController() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UEnum* Z_Construct_UEnum_ArcadeVehicleSystem_CameraOwnerPitchState();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ARCADEVEHICLESYSTEM_API UEnum* Z_Construct_UEnum_ArcadeVehicleSystem_CameraSnappingSequenceState();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCameraSnappingData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleCameraController_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleCameraController();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleMovementComponentBase_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	static UEnum* CameraOwnerPitchState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArcadeVehicleSystem_CameraOwnerPitchState, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("CameraOwnerPitchState"));
		}
		return Singleton;
	}
	template<> ARCADEVEHICLESYSTEM_API UEnum* StaticEnum<CameraOwnerPitchState>()
	{
		return CameraOwnerPitchState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CameraOwnerPitchState(CameraOwnerPitchState_StaticEnum, TEXT("/Script/ArcadeVehicleSystem"), TEXT("CameraOwnerPitchState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArcadeVehicleSystem_CameraOwnerPitchState_Hash() { return 1070460326U; }
	UEnum* Z_Construct_UEnum_ArcadeVehicleSystem_CameraOwnerPitchState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CameraOwnerPitchState"), 0, Get_Z_Construct_UEnum_ArcadeVehicleSystem_CameraOwnerPitchState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CameraOwnerPitchState::Down", (int64)CameraOwnerPitchState::Down },
				{ "CameraOwnerPitchState::Flat", (int64)CameraOwnerPitchState::Flat },
				{ "CameraOwnerPitchState::Up", (int64)CameraOwnerPitchState::Up },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n\x09""Enumerator that specifies pitch state of the owner vehicle.\n*/" },
				{ "Down.Name", "CameraOwnerPitchState::Down" },
				{ "Flat.Name", "CameraOwnerPitchState::Flat" },
				{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
				{ "ToolTip", "Enumerator that specifies pitch state of the owner vehicle." },
				{ "Up.Name", "CameraOwnerPitchState::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
				nullptr,
				"CameraOwnerPitchState",
				"CameraOwnerPitchState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* CameraSnappingSequenceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArcadeVehicleSystem_CameraSnappingSequenceState, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("CameraSnappingSequenceState"));
		}
		return Singleton;
	}
	template<> ARCADEVEHICLESYSTEM_API UEnum* StaticEnum<CameraSnappingSequenceState>()
	{
		return CameraSnappingSequenceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CameraSnappingSequenceState(CameraSnappingSequenceState_StaticEnum, TEXT("/Script/ArcadeVehicleSystem"), TEXT("CameraSnappingSequenceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArcadeVehicleSystem_CameraSnappingSequenceState_Hash() { return 2570081171U; }
	UEnum* Z_Construct_UEnum_ArcadeVehicleSystem_CameraSnappingSequenceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CameraSnappingSequenceState"), 0, Get_Z_Construct_UEnum_ArcadeVehicleSystem_CameraSnappingSequenceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CameraSnappingSequenceState::None", (int64)CameraSnappingSequenceState::None },
				{ "CameraSnappingSequenceState::Interpolating", (int64)CameraSnappingSequenceState::Interpolating },
				{ "CameraSnappingSequenceState::Snapped", (int64)CameraSnappingSequenceState::Snapped },
				{ "CameraSnappingSequenceState::Blocked", (int64)CameraSnappingSequenceState::Blocked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blocked.Name", "CameraSnappingSequenceState::Blocked" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n\x09""Enumerator that defines current state of the camera snapping sequence.\n*/" },
				{ "Interpolating.Name", "CameraSnappingSequenceState::Interpolating" },
				{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
				{ "None.Name", "CameraSnappingSequenceState::None" },
				{ "Snapped.Name", "CameraSnappingSequenceState::Snapped" },
				{ "ToolTip", "Enumerator that defines current state of the camera snapping sequence." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
				nullptr,
				"CameraSnappingSequenceState",
				"CameraSnappingSequenceState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCameraSnappingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FCameraSnappingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraSnappingData, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("CameraSnappingData"), sizeof(FCameraSnappingData), Get_Z_Construct_UScriptStruct_FCameraSnappingData_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FCameraSnappingData>()
{
	return FCameraSnappingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraSnappingData(FCameraSnappingData::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("CameraSnappingData"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFCameraSnappingData
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFCameraSnappingData()
	{
		UScriptStruct::DeferCppStructOps<FCameraSnappingData>(FName(TEXT("CameraSnappingData")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFCameraSnappingData;
	struct Z_Construct_UScriptStruct_FCameraSnappingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraSnappingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Helper structure used to gather values used for camera snapping.\n\x09""Easier to keep them in one bag.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Helper structure used to gather values used for camera snapping.\nEasier to keep them in one bag." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraSnappingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_SnapRotation_MetaData[] = {
		{ "Category", "CameraSnapping" },
		{ "Comment", "/** Rotation cached on begin play as snap rotation for the flat surfaces. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Rotation cached on begin play as snap rotation for the flat surfaces." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_SnapRotation = { "SnapRotation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraSnappingData, SnapRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_SnapRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_SnapRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CameraSnapping" },
		{ "Comment", "/** Defines current state of the camera snapping. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines current state of the camera snapping." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraSnappingData, State), Z_Construct_UEnum_ArcadeVehicleSystem_CameraSnappingSequenceState, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_BlockTimer_MetaData[] = {
		{ "Category", "CameraSnapping" },
		{ "Comment", "/** Timer used for blocked state to calculate how long it should be blocked for. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Timer used for blocked state to calculate how long it should be blocked for." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_BlockTimer = { "BlockTimer", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraSnappingData, BlockTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_BlockTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_BlockTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraSnappingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_SnapRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSnappingData_Statics::NewProp_BlockTimer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraSnappingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"CameraSnappingData",
		sizeof(FCameraSnappingData),
		alignof(FCameraSnappingData),
		Z_Construct_UScriptStruct_FCameraSnappingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSnappingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraSnappingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSnappingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraSnappingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraSnappingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraSnappingData"), sizeof(FCameraSnappingData), Get_Z_Construct_UScriptStruct_FCameraSnappingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraSnappingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraSnappingData_Hash() { return 1034508880U; }
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execUpdateTurnAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TurnAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTurnAngle(Z_Param_TurnAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execUpdateOwnerSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOwnerSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execClearSnappedState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSnappedState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execBlockSnappingSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockSnappingSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execStopSnappingSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSnappingSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execBeginSnappingSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginSnappingSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execAddPitchInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPitchInput(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execAddYawInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddYawInput(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execIsFrontCameraActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFrontCameraActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execDeactivateAllCameras)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAllCameras();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execActivateRearCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateRearCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execActivateFrontCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateFrontCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArcadeVehicleCameraController::execInitializeCameras)
	{
		P_GET_OBJECT(UArcadeVehicleMovementComponentBase,Z_Param_MovementComponent);
		P_GET_OBJECT(UCineCameraComponent,Z_Param_FrontCamera);
		P_GET_OBJECT(UCineCameraComponent,Z_Param_RearCamera);
		P_GET_OBJECT(USpringArmComponent,Z_Param_RearCameraArm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCameras(Z_Param_MovementComponent,Z_Param_FrontCamera,Z_Param_RearCamera,Z_Param_RearCameraArm);
		P_NATIVE_END;
	}
	void UArcadeVehicleCameraController::StaticRegisterNativesUArcadeVehicleCameraController()
	{
		UClass* Class = UArcadeVehicleCameraController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateFrontCamera", &UArcadeVehicleCameraController::execActivateFrontCamera },
			{ "ActivateRearCamera", &UArcadeVehicleCameraController::execActivateRearCamera },
			{ "AddPitchInput", &UArcadeVehicleCameraController::execAddPitchInput },
			{ "AddYawInput", &UArcadeVehicleCameraController::execAddYawInput },
			{ "BeginSnappingSequence", &UArcadeVehicleCameraController::execBeginSnappingSequence },
			{ "BlockSnappingSequence", &UArcadeVehicleCameraController::execBlockSnappingSequence },
			{ "ClearSnappedState", &UArcadeVehicleCameraController::execClearSnappedState },
			{ "DeactivateAllCameras", &UArcadeVehicleCameraController::execDeactivateAllCameras },
			{ "InitializeCameras", &UArcadeVehicleCameraController::execInitializeCameras },
			{ "IsFrontCameraActive", &UArcadeVehicleCameraController::execIsFrontCameraActive },
			{ "StopSnappingSequence", &UArcadeVehicleCameraController::execStopSnappingSequence },
			{ "UpdateOwnerSpeed", &UArcadeVehicleCameraController::execUpdateOwnerSpeed },
			{ "UpdateTurnAngle", &UArcadeVehicleCameraController::execUpdateTurnAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateFrontCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateFrontCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Activates front camera and deactivates rear one. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Activates front camera and deactivates rear one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateFrontCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "ActivateFrontCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateFrontCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateFrontCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateFrontCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateFrontCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateRearCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateRearCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Activates rear camera and deactivates front one. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Activates rear camera and deactivates front one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateRearCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "ActivateRearCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateRearCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateRearCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateRearCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateRearCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics
	{
		struct ArcadeVehicleCameraController_eventAddPitchInput_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleCameraController_eventAddPitchInput_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Applies camera pitch input. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Applies camera pitch input." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "AddPitchInput", nullptr, nullptr, sizeof(ArcadeVehicleCameraController_eventAddPitchInput_Parms), Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics
	{
		struct ArcadeVehicleCameraController_eventAddYawInput_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleCameraController_eventAddYawInput_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Applies camera yaw input. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Applies camera yaw input." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "AddYawInput", nullptr, nullptr, sizeof(ArcadeVehicleCameraController_eventAddYawInput_Parms), Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_BeginSnappingSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_BeginSnappingSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Begins camera snapping sequence. Note that if snapping is disabled, this will silently bail. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Begins camera snapping sequence. Note that if snapping is disabled, this will silently bail." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_BeginSnappingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "BeginSnappingSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_BeginSnappingSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_BeginSnappingSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_BeginSnappingSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_BeginSnappingSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_BlockSnappingSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_BlockSnappingSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Stops currently ongoing snapping sequence if any, and blocks potentially new one for given amount of time. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Stops currently ongoing snapping sequence if any, and blocks potentially new one for given amount of time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_BlockSnappingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "BlockSnappingSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_BlockSnappingSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_BlockSnappingSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_BlockSnappingSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_BlockSnappingSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_ClearSnappedState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_ClearSnappedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Clears currently snapped state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Clears currently snapped state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_ClearSnappedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "ClearSnappedState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_ClearSnappedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_ClearSnappedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_ClearSnappedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_ClearSnappedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_DeactivateAllCameras_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_DeactivateAllCameras_Statics::Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Deactivates all cameras. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Deactivates all cameras." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_DeactivateAllCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "DeactivateAllCameras", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_DeactivateAllCameras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_DeactivateAllCameras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_DeactivateAllCameras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_DeactivateAllCameras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics
	{
		struct ArcadeVehicleCameraController_eventInitializeCameras_Parms
		{
			UArcadeVehicleMovementComponentBase* MovementComponent;
			UCineCameraComponent* FrontCamera;
			UCineCameraComponent* RearCamera;
			USpringArmComponent* RearCameraArm;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrontCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RearCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearCameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RearCameraArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleCameraController_eventInitializeCameras_Parms, MovementComponent), Z_Construct_UClass_UArcadeVehicleMovementComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_FrontCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_FrontCamera = { "FrontCamera", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleCameraController_eventInitializeCameras_Parms, FrontCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_FrontCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_FrontCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCamera = { "RearCamera", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleCameraController_eventInitializeCameras_Parms, RearCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCameraArm_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCameraArm = { "RearCameraArm", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleCameraController_eventInitializeCameras_Parms, RearCameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCameraArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_FrontCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::NewProp_RearCameraArm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "Comment", "/** Sets references to the cameras managed by this controller. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Sets references to the cameras managed by this controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "InitializeCameras", nullptr, nullptr, sizeof(ArcadeVehicleCameraController_eventInitializeCameras_Parms), Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics
	{
		struct ArcadeVehicleCameraController_eventIsFrontCameraActive_Parms
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
	void Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArcadeVehicleCameraController_eventIsFrontCameraActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehicleCameraController_eventIsFrontCameraActive_Parms), &Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Checks if the front camera is active. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Checks if the front camera is active." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "IsFrontCameraActive", nullptr, nullptr, sizeof(ArcadeVehicleCameraController_eventIsFrontCameraActive_Parms), Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_StopSnappingSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_StopSnappingSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Stops latest camera snapping sequence completely. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Stops latest camera snapping sequence completely." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_StopSnappingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "StopSnappingSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_StopSnappingSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_StopSnappingSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_StopSnappingSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_StopSnappingSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics
	{
		struct ArcadeVehicleCameraController_eventUpdateOwnerSpeed_Parms
		{
			float Speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleCameraController_eventUpdateOwnerSpeed_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpeedEffects" },
		{ "Comment", "/** Sets owner speed to this component. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Sets owner speed to this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "UpdateOwnerSpeed", nullptr, nullptr, sizeof(ArcadeVehicleCameraController_eventUpdateOwnerSpeed_Parms), Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics
	{
		struct ArcadeVehicleCameraController_eventUpdateTurnAngle_Parms
		{
			float TurnAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::NewProp_TurnAngle = { "TurnAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcadeVehicleCameraController_eventUpdateTurnAngle_Parms, TurnAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::NewProp_TurnAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpeedEffects" },
		{ "Comment", "/** Updates owner turn angle for this controller. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Updates owner turn angle for this controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArcadeVehicleCameraController, nullptr, "UpdateTurnAngle", nullptr, nullptr, sizeof(ArcadeVehicleCameraController_eventUpdateTurnAngle_Parms), Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArcadeVehicleCameraController_NoRegister()
	{
		return UArcadeVehicleCameraController::StaticClass();
	}
	struct Z_Construct_UClass_UArcadeVehicleCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPossessingBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPossessingBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRotationSnapping_MetaData[];
#endif
		static void NewProp_bUseRotationSnapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRotationSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePitchHelper_MetaData[];
#endif
		static void NewProp_bUsePitchHelper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePitchHelper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSnappingDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSnappingDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawSnappingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawSnappingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchSnappingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchSnappingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSnappingTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSnappingTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchUpwardAngularOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchUpwardAngularOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchDownwardAngularOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchDownwardAngularOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocalLengthSpeedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocalLengthSpeedRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocalLengthValuesRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocalLengthValuesRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraApproachSpeedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraApproachSpeedRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraApproachValuesRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraApproachValuesRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsControllerInitialized_MetaData[];
#endif
		static void NewProp_m_bIsControllerInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsControllerInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pFrontCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pFrontCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pRearCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pRearCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pRearCameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pRearCameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pLocalPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pLocalPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_yawSnappingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_yawSnappingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pitchSnappingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_pitchSnappingData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ownerPitchState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ownerPitchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ownerPitchState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ownerTurnAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_ownerTurnAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ownerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_ownerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bIsOwnerSpeedDirty_MetaData[];
#endif
		static void NewProp_m_bIsOwnerSpeedDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bIsOwnerSpeedDirty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArcadeVehicleCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArcadeVehicleCameraController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateFrontCamera, "ActivateFrontCamera" }, // 2777434653
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_ActivateRearCamera, "ActivateRearCamera" }, // 1363645092
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_AddPitchInput, "AddPitchInput" }, // 3946810485
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_AddYawInput, "AddYawInput" }, // 1592784120
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_BeginSnappingSequence, "BeginSnappingSequence" }, // 2768546726
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_BlockSnappingSequence, "BlockSnappingSequence" }, // 3731281883
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_ClearSnappedState, "ClearSnappedState" }, // 1689511877
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_DeactivateAllCameras, "DeactivateAllCameras" }, // 3685278141
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_InitializeCameras, "InitializeCameras" }, // 3376794184
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_IsFrontCameraActive, "IsFrontCameraActive" }, // 1596724668
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_StopSnappingSequence, "StopSnappingSequence" }, // 3495727805
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateOwnerSpeed, "UpdateOwnerSpeed" }, // 2573152875
		{ &Z_Construct_UFunction_UArcadeVehicleCameraController_UpdateTurnAngle, "UpdateTurnAngle" }, // 4201841452
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09""Extension for the spring arm component that implements custom rotation sampling.\n*/" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "ArcadeVehicleCameraController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Extension for the spring arm component that implements custom rotation sampling." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraPossessingBlendTime_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Defines time used for this camera to be blended in. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines time used for this camera to be blended in." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraPossessingBlendTime = { "CameraPossessingBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, CameraPossessingBlendTime), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraPossessingBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraPossessingBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUseRotationSnapping_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Value that enables and disables capability of the rotation snapping at all. Even starting snap sequence won't work when this is false. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Value that enables and disables capability of the rotation snapping at all. Even starting snap sequence won't work when this is false." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUseRotationSnapping_SetBit(void* Obj)
	{
		((UArcadeVehicleCameraController*)Obj)->bUseRotationSnapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUseRotationSnapping = { "bUseRotationSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleCameraController), &Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUseRotationSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUseRotationSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUseRotationSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUsePitchHelper_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Value that enables and disables pitch helper at all. Only takes effect if rotation snapping is enabled. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Value that enables and disables pitch helper at all. Only takes effect if rotation snapping is enabled." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUsePitchHelper_SetBit(void* Obj)
	{
		((UArcadeVehicleCameraController*)Obj)->bUsePitchHelper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUsePitchHelper = { "bUsePitchHelper", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleCameraController), &Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUsePitchHelper_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUsePitchHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUsePitchHelper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingDelay_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Delay used to begin scheduled snapping sequence. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Delay used to begin scheduled snapping sequence." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingDelay = { "RotationSnappingDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, RotationSnappingDelay), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_YawSnappingSpeed_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Defines speed of the camera snapping rotation for the Yaw axis. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines speed of the camera snapping rotation for the Yaw axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_YawSnappingSpeed = { "YawSnappingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, YawSnappingSpeed), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_YawSnappingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_YawSnappingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchSnappingSpeed_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Defines speed of the camera snapping rotation for the Pitch axis. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines speed of the camera snapping rotation for the Pitch axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchSnappingSpeed = { "PitchSnappingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, PitchSnappingSpeed), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchSnappingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchSnappingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingTolerance_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Defines tolerance needed for the camera to be considered snapped. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines tolerance needed for the camera to be considered snapped." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingTolerance = { "RotationSnappingTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, RotationSnappingTolerance), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchThreshold_MetaData[] = {
		{ "Category", "PitchHelper" },
		{ "Comment", "/** Defines how many degrees of the pitch is required for the owner to trigger pitch blending. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines how many degrees of the pitch is required for the owner to trigger pitch blending." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchThreshold = { "PitchThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, PitchThreshold), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchUpwardAngularOffset_MetaData[] = {
		{ "Category", "PitchHelper" },
		{ "Comment", "/** Defines how much pitch rotation is added to the pitch on slopes up. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines how much pitch rotation is added to the pitch on slopes up." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchUpwardAngularOffset = { "PitchUpwardAngularOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, PitchUpwardAngularOffset), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchUpwardAngularOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchUpwardAngularOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchDownwardAngularOffset_MetaData[] = {
		{ "Category", "PitchHelper" },
		{ "Comment", "/** Defines how much pitch rotation is added to the pitch on slopes down. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines how much pitch rotation is added to the pitch on slopes down." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchDownwardAngularOffset = { "PitchDownwardAngularOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, PitchDownwardAngularOffset), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchDownwardAngularOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchDownwardAngularOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthSpeedRange_MetaData[] = {
		{ "Category", "SpeedEffects" },
		{ "Comment", "/** Defines range of the speeds used for the focal length calculations. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines range of the speeds used for the focal length calculations." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthSpeedRange = { "FocalLengthSpeedRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, FocalLengthSpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthSpeedRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthValuesRange_MetaData[] = {
		{ "Category", "SpeedEffects" },
		{ "Comment", "/** Defines range of the focal length values that will be mapped to the speeds. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines range of the focal length values that will be mapped to the speeds." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthValuesRange = { "FocalLengthValuesRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, FocalLengthValuesRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthValuesRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthValuesRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachSpeedRange_MetaData[] = {
		{ "Category", "SpeedEffects" },
		{ "Comment", "/** Defines range of the speeds used for the camera approach calculations. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines range of the speeds used for the camera approach calculations." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachSpeedRange = { "CameraApproachSpeedRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, CameraApproachSpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachSpeedRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachValuesRange_MetaData[] = {
		{ "Category", "SpeedEffects" },
		{ "Comment", "/** Defines range of the camera approach values that will be mapped to the speeds. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines range of the camera approach values that will be mapped to the speeds." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachValuesRange = { "CameraApproachValuesRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, CameraApproachValuesRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachValuesRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachValuesRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsControllerInitialized_MetaData[] = {
		{ "Comment", "/** Flag set upon controller initialization, when all the refs are valid to use. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Flag set upon controller initialization, when all the refs are valid to use." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsControllerInitialized_SetBit(void* Obj)
	{
		((UArcadeVehicleCameraController*)Obj)->m_bIsControllerInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsControllerInitialized = { "m_bIsControllerInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleCameraController), &Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsControllerInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsControllerInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsControllerInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pMovementComponent_MetaData[] = {
		{ "Comment", "/** Movement component of the vehicle currently using this camera controller. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Movement component of the vehicle currently using this camera controller." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pMovementComponent = { "m_pMovementComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_pMovementComponent), Z_Construct_UClass_UArcadeVehicleMovementComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pFrontCamera_MetaData[] = {
		{ "Comment", "/** Camera pointing forward vehicle. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Camera pointing forward vehicle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pFrontCamera = { "m_pFrontCamera", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_pFrontCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pFrontCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pFrontCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCamera_MetaData[] = {
		{ "Comment", "/** Camera pointing backward vehicle. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Camera pointing backward vehicle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCamera = { "m_pRearCamera", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_pRearCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCameraArm_MetaData[] = {
		{ "Comment", "/** Camera spring arm parent used for the rear camera. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Camera spring arm parent used for the rear camera." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCameraArm = { "m_pRearCameraArm", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_pRearCameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pLocalPlayerController_MetaData[] = {
		{ "Comment", "/** Local player controller. Value is cached for quicker access. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Local player controller. Value is cached for quicker access." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pLocalPlayerController = { "m_pLocalPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_pLocalPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pLocalPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pLocalPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_yawSnappingData_MetaData[] = {
		{ "Comment", "/** Keeps all information about the yaw axis snapping sequence. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Keeps all information about the yaw axis snapping sequence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_yawSnappingData = { "m_yawSnappingData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_yawSnappingData), Z_Construct_UScriptStruct_FCameraSnappingData, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_yawSnappingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_yawSnappingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pitchSnappingData_MetaData[] = {
		{ "Comment", "/** Keeps all information about the pitch axis snapping sequence. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Keeps all information about the pitch axis snapping sequence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pitchSnappingData = { "m_pitchSnappingData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_pitchSnappingData), Z_Construct_UScriptStruct_FCameraSnappingData, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pitchSnappingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pitchSnappingData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerPitchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerPitchState_MetaData[] = {
		{ "Comment", "/** Tracks last known owner pitch state. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Tracks last known owner pitch state." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerPitchState = { "m_ownerPitchState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_ownerPitchState), Z_Construct_UEnum_ArcadeVehicleSystem_CameraOwnerPitchState, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerPitchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerPitchState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerTurnAngle_MetaData[] = {
		{ "Comment", "/** Tracks owner turning angle. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Tracks owner turning angle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerTurnAngle = { "m_ownerTurnAngle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_ownerTurnAngle), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerTurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerTurnAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerSpeed_MetaData[] = {
		{ "Comment", "/** Cached owner's speed as alpha to be used for calculations. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Cached owner's speed as alpha to be used for calculations." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerSpeed = { "m_ownerSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleCameraController, m_ownerSpeed), METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsOwnerSpeedDirty_MetaData[] = {
		{ "Comment", "/** Defines whether or not owner's speed has changed to avoid unnecessary calculations. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleCameraController.h" },
		{ "ToolTip", "Defines whether or not owner's speed has changed to avoid unnecessary calculations." },
	};
#endif
	void Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsOwnerSpeedDirty_SetBit(void* Obj)
	{
		((UArcadeVehicleCameraController*)Obj)->m_bIsOwnerSpeedDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsOwnerSpeedDirty = { "m_bIsOwnerSpeedDirty", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UArcadeVehicleCameraController), &Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsOwnerSpeedDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsOwnerSpeedDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsOwnerSpeedDirty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArcadeVehicleCameraController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraPossessingBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUseRotationSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_bUsePitchHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_YawSnappingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchSnappingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_RotationSnappingTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchUpwardAngularOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_PitchDownwardAngularOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthSpeedRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_FocalLengthValuesRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachSpeedRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_CameraApproachValuesRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsControllerInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pFrontCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pRearCameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pLocalPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_yawSnappingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_pitchSnappingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerPitchState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerPitchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerTurnAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_ownerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleCameraController_Statics::NewProp_m_bIsOwnerSpeedDirty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArcadeVehicleCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArcadeVehicleCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArcadeVehicleCameraController_Statics::ClassParams = {
		&UArcadeVehicleCameraController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArcadeVehicleCameraController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArcadeVehicleCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArcadeVehicleCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArcadeVehicleCameraController, 4071183894);
	template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<UArcadeVehicleCameraController>()
	{
		return UArcadeVehicleCameraController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArcadeVehicleCameraController(Z_Construct_UClass_UArcadeVehicleCameraController, &UArcadeVehicleCameraController::StaticClass, TEXT("/Script/ArcadeVehicleSystem"), TEXT("UArcadeVehicleCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArcadeVehicleCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
