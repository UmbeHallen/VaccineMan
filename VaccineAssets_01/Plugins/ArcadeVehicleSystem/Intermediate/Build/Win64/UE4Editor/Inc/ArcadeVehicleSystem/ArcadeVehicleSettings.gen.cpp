// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/ArcadeVehicleSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeVehicleSettings() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleEngineSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleSteeringSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleSuspensionSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleSuspensionSpring();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
class UScriptStruct* FVehicleWheelsRuntimeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleWheelsRuntimeInfo"), sizeof(FVehicleWheelsRuntimeInfo), Get_Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleWheelsRuntimeInfo>()
{
	return FVehicleWheelsRuntimeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleWheelsRuntimeInfo(FVehicleWheelsRuntimeInfo::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleWheelsRuntimeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleWheelsRuntimeInfo
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleWheelsRuntimeInfo()
	{
		UScriptStruct::DeferCppStructOps<FVehicleWheelsRuntimeInfo>(FName(TEXT("VehicleWheelsRuntimeInfo")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleWheelsRuntimeInfo;
	struct Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringWheelsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SteeringWheelsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriveWheelsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DriveWheelsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringWheelsOnGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SteeringWheelsOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriveWheelsOnGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DriveWheelsOnGround;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime information about the vehicle wheels.\n * It's only here to gather this information in one place\n * not to make too big mess in the actual component.\n */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime information about the vehicle wheels.\nIt's only here to gather this information in one place\nnot to make too big mess in the actual component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleWheelsRuntimeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsCount_MetaData[] = {
		{ "Comment", "/** How many steering wheels there are are in total. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "How many steering wheels there are are in total." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsCount = { "SteeringWheelsCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelsRuntimeInfo, SteeringWheelsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsCount_MetaData[] = {
		{ "Comment", "/** How many drive wheels there are in total. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "How many drive wheels there are in total." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsCount = { "DriveWheelsCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelsRuntimeInfo, DriveWheelsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsOnGround_MetaData[] = {
		{ "Comment", "/** How many steering wheels are currently on the ground. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "How many steering wheels are currently on the ground." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsOnGround = { "SteeringWheelsOnGround", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelsRuntimeInfo, SteeringWheelsOnGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsOnGround_MetaData[] = {
		{ "Comment", "/** How many drive wheels are currently on the ground. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "How many drive wheels are currently on the ground." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsOnGround = { "DriveWheelsOnGround", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelsRuntimeInfo, DriveWheelsOnGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsOnGround_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_SteeringWheelsOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::NewProp_DriveWheelsOnGround,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleWheelsRuntimeInfo",
		sizeof(FVehicleWheelsRuntimeInfo),
		alignof(FVehicleWheelsRuntimeInfo),
		Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleWheelsRuntimeInfo"), sizeof(FVehicleWheelsRuntimeInfo), Get_Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleWheelsRuntimeInfo_Hash() { return 3707401206U; }
class UScriptStruct* FVehicleSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleSettings, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleSettings"), sizeof(FVehicleSettings), Get_Z_Construct_UScriptStruct_FVehicleSettings_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleSettings>()
{
	return FVehicleSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleSettings(FVehicleSettings::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSettings
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSettings()
	{
		UScriptStruct::DeferCppStructOps<FVehicleSettings>(FName(TEXT("VehicleSettings")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSettings;
	struct Z_Construct_UScriptStruct_FVehicleSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Physics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Engine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Engine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Steering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Steering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suspension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Suspension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Groups all of vehicle settings. They are in one place so they are very easy to copy and pase if needed. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Groups all of vehicle settings. They are in one place so they are very easy to copy and pase if needed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Physics_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Physics settings of this vehicle. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Physics settings of this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Physics = { "Physics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSettings, Physics), Z_Construct_UScriptStruct_FVehiclePhysicsSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Physics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Physics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Engine_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Engine settings of this vehicle. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Engine settings of this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Engine = { "Engine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSettings, Engine), Z_Construct_UScriptStruct_FVehicleEngineSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Engine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Engine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Steering_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/** Steering settings of this vehicle. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Steering settings of this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSettings, Steering), Z_Construct_UScriptStruct_FVehicleSteeringSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Steering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Steering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Suspension_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Steering settings of this vehicle. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Steering settings of this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Suspension = { "Suspension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSettings, Suspension), Z_Construct_UScriptStruct_FVehicleSuspensionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Suspension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Suspension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Physics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Engine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Steering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSettings_Statics::NewProp_Suspension,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleSettings",
		sizeof(FVehicleSettings),
		alignof(FVehicleSettings),
		Z_Construct_UScriptStruct_FVehicleSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleSettings"), sizeof(FVehicleSettings), Get_Z_Construct_UScriptStruct_FVehicleSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleSettings_Hash() { return 1387301218U; }
class UScriptStruct* FVehicleSuspensionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleSuspensionSettings, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleSuspensionSettings"), sizeof(FVehicleSuspensionSettings), Get_Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleSuspensionSettings>()
{
	return FVehicleSuspensionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleSuspensionSettings(FVehicleSuspensionSettings::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleSuspensionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSuspensionSettings
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSuspensionSettings()
	{
		UScriptStruct::DeferCppStructOps<FVehicleSuspensionSettings>(FName(TEXT("VehicleSuspensionSettings")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSuspensionSettings;
	struct Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionParentBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SuspensionParentBoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Springs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Springs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Springs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionParentBoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuspensionParentBoneIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Grouped settings of the vehicle suspension.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Grouped settings of the vehicle suspension." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleSuspensionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Defines how far suspension line traces reach. This allows to define how the vehicle is snapped to the ground. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines how far suspension line traces reach. This allows to define how the vehicle is snapped to the ground." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSettings, TraceLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceThickness_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Defines thickness of the suspension trace. When the thickness is 0, it will just use raycast, otherwise sphere cast. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines thickness of the suspension trace. When the thickness is 0, it will just use raycast, otherwise sphere cast." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceThickness = { "TraceThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSettings, TraceThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneName_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** \n\x09\x09Name of the bone that the suspension bones should be transformed to world by.\n\x09\x09This one is important, because if we are doing some kind of animations on that bone,\n\x09\x09""and it is a parent of the spring bones, we will want to keep them up-to-date\n\x09\x09with their parent transform. This could be a root bone, or bone after that most likely.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Name of the bone that the suspension bones should be transformed to world by.\nThis one is important, because if we are doing some kind of animations on that bone,\nand it is a parent of the spring bones, we will want to keep them up-to-date\nwith their parent transform. This could be a root bone, or bone after that most likely." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneName = { "SuspensionParentBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSettings, SuspensionParentBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_Springs_Inner = { "Springs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVehicleSuspensionSpring, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_Springs_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** List of the springs that drive suspension of this vehicle. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "List of the springs that drive suspension of this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_Springs = { "Springs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSettings, Springs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_Springs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_Springs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneIndex_MetaData[] = {
		{ "Comment", "/** Runtime value that stores index of the suspension parent bone for quicker access. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value that stores index of the suspension parent bone for quicker access." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneIndex = { "SuspensionParentBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSettings, SuspensionParentBoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_TraceThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_Springs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_Springs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::NewProp_SuspensionParentBoneIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleSuspensionSettings",
		sizeof(FVehicleSuspensionSettings),
		alignof(FVehicleSuspensionSettings),
		Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleSuspensionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleSuspensionSettings"), sizeof(FVehicleSuspensionSettings), Get_Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleSuspensionSettings_Hash() { return 171425010U; }
class UScriptStruct* FVehicleSuspensionSpring::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleSuspensionSpring, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleSuspensionSpring"), sizeof(FVehicleSuspensionSpring), Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleSuspensionSpring>()
{
	return FVehicleSuspensionSpring::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleSuspensionSpring(FVehicleSuspensionSpring::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleSuspensionSpring"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSuspensionSpring
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSuspensionSpring()
	{
		UScriptStruct::DeferCppStructOps<FVehicleSuspensionSpring>(FName(TEXT("VehicleSuspensionSpring")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSuspensionSpring;
	struct Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSteeringWheel_MetaData[];
#endif
		static void NewProp_bIsSteeringWheel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSteeringWheel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDriveWheel_MetaData[];
#endif
		static void NewProp_bIsDriveWheel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDriveWheel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingPivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingPivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SwingMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMaxOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinMaxOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WheelOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSwing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSwing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatestTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatestTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatestSpringForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatestSpringForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Helper structure that allows to map suspension\n\x09spring physics data with the name of the bone,\n\x09where the spring belongs.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Helper structure that allows to map suspension\nspring physics data with the name of the bone,\nwhere the spring belongs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleSuspensionSpring>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Defines the name of the bone that is used to locate the spring in runtime. If this is using static mesh, enter socket name instead. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines the name of the bone that is used to locate the spring in runtime. If this is using static mesh, enter socket name instead." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SpringForce_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Defines how strong is this spring. Higher values will apply stronger force upwards. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines how strong is this spring. Higher values will apply stronger force upwards." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SpringForce = { "SpringForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, SpringForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SpringForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SpringForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_TargetHeight_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Defines height of the suspension at this particular spring. The system will try to settle this spring at this height. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines height of the suspension at this particular spring. The system will try to settle this spring at this height." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_TargetHeight = { "TargetHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, TargetHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_TargetHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_TargetHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Damping factor allows to define how suspension damps the impacts. Kind of like softness. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Damping factor allows to define how suspension damps the impacts. Kind of like softness." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsSteeringWheel_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Defines whether this spring contains a wheel that is steering wheel. Value used purely for animations, not for physics. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines whether this spring contains a wheel that is steering wheel. Value used purely for animations, not for physics." },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsSteeringWheel_SetBit(void* Obj)
	{
		((FVehicleSuspensionSpring*)Obj)->bIsSteeringWheel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsSteeringWheel = { "bIsSteeringWheel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleSuspensionSpring), &Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsSteeringWheel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsSteeringWheel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsSteeringWheel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsDriveWheel_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/**\n\x09 * Defines whether this spring contains a wheel that is drive wheel. Actually affects acceleration.\n\x09 * Drive wheels that have connection to the ground will allow applying acceleration.\n\x09 * This means, that if there are 2 drive wheels, and only one touches the ground,\n\x09 * only 50% force will be applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines whether this spring contains a wheel that is drive wheel. Actually affects acceleration.\nDrive wheels that have connection to the ground will allow applying acceleration.\nThis means, that if there are 2 drive wheels, and only one touches the ground,\nonly 50% force will be applied." },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsDriveWheel_SetBit(void* Obj)
	{
		((FVehicleSuspensionSpring*)Obj)->bIsDriveWheel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsDriveWheel = { "bIsDriveWheel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleSuspensionSpring), &Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsDriveWheel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsDriveWheel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsDriveWheel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelRadius_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Defines radius of the wheel we expect to attach to this suspension part. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines radius of the wheel we expect to attach to this suspension part." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, WheelRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingPivot_MetaData[] = {
		{ "Category", "Suspension" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines where the swing pivot should be from 0 to 1 along the SwingMinMax value. Smaller values will begin earlier. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines where the swing pivot should be from 0 to 1 along the SwingMinMax value. Smaller values will begin earlier." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingPivot = { "SwingPivot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, SwingPivot), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingPivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingMinMax_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Defines behaviour of the swing arm. Min and max value corresponds with the value in the wheels offsets min and max. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines behaviour of the swing arm. Min and max value corresponds with the value in the wheels offsets min and max." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingMinMax = { "SwingMinMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, SwingMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_MinMaxOffsetZ_MetaData[] = {
		{ "Category", "Suspension" },
		{ "Comment", "/** Defines minimum and maximum offset for this spring wheel. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines minimum and maximum offset for this spring wheel." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_MinMaxOffsetZ = { "MinMaxOffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, MinMaxOffsetZ), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_MinMaxOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_MinMaxOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/** Non-exposed value. It is just location of the bone associated with this spring in component-space. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Non-exposed value. It is just location of the bone associated with this spring in component-space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelOffset_MetaData[] = {
		{ "Comment", "/** Stores runtime-calculated wheel offset on this spring. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Stores runtime-calculated wheel offset on this spring." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelOffset = { "WheelOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, WheelOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_CurrentSwing_MetaData[] = {
		{ "Comment", "/** Runtime value that defines current swing arm swing amount. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value that defines current swing arm swing amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_CurrentSwing = { "CurrentSwing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, CurrentSwing), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_CurrentSwing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_CurrentSwing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestTrace_MetaData[] = {
		{ "Comment", "/** Runtime value. Stores information about the last performed line trace for this string. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value. Stores information about the last performed line trace for this string." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestTrace = { "LatestTrace", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, LatestTrace), Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestSpringForce_MetaData[] = {
		{ "Comment", "/** Runtime value. Stores lates spring force calculated. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value. Stores lates spring force calculated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestSpringForce = { "LatestSpringForce", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpring, LatestSpringForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestSpringForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestSpringForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SpringForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_TargetHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsSteeringWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_bIsDriveWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_SwingMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_MinMaxOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_WheelOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_CurrentSwing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::NewProp_LatestSpringForce,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleSuspensionSpring",
		sizeof(FVehicleSuspensionSpring),
		alignof(FVehicleSuspensionSpring),
		Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleSuspensionSpring()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleSuspensionSpring"), sizeof(FVehicleSuspensionSpring), Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpring_Hash() { return 262764897U; }
class UScriptStruct* FVehicleSuspensionSpringTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleSuspensionSpringTrace"), sizeof(FVehicleSuspensionSpringTrace), Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleSuspensionSpringTrace>()
{
	return FVehicleSuspensionSpringTrace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleSuspensionSpringTrace(FVehicleSuspensionSpringTrace::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleSuspensionSpringTrace"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSuspensionSpringTrace
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSuspensionSpringTrace()
	{
		UScriptStruct::DeferCppStructOps<FVehicleSuspensionSpringTrace>(FName(TEXT("VehicleSuspensionSpringTrace")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSuspensionSpringTrace;
	struct Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeginLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHitValid_MetaData[];
#endif
		static void NewProp_IsHitValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHitValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n\x09Helper structure that allows to store less info for the FHitResult\n\x09""for the springs, as we do not need all of the data.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Helper structure that allows to store less info for the FHitResult\nfor the springs, as we do not need all of the data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleSuspensionSpringTrace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_BeginLocation_MetaData[] = {
		{ "Comment", "/** Location where the hit was shot from. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Location where the hit was shot from." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_BeginLocation = { "BeginLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpringTrace, BeginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_BeginLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_BeginLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_EndLocation_MetaData[] = {
		{ "Comment", "/** Location of the hit. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Location of the hit." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpringTrace, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "/** Normal of the hit. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Normal of the hit." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpringTrace, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Distance_MetaData[] = {
		{ "Comment", "/** Distance of the hit for the suspension force. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Distance of the hit for the suspension force." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSuspensionSpringTrace, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_IsHitValid_MetaData[] = {
		{ "Comment", "/** Whether or not the hit is valid. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Whether or not the hit is valid." },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_IsHitValid_SetBit(void* Obj)
	{
		((FVehicleSuspensionSpringTrace*)Obj)->IsHitValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_IsHitValid = { "IsHitValid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleSuspensionSpringTrace), &Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_IsHitValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_IsHitValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_IsHitValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_BeginLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::NewProp_IsHitValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleSuspensionSpringTrace",
		sizeof(FVehicleSuspensionSpringTrace),
		alignof(FVehicleSuspensionSpringTrace),
		Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleSuspensionSpringTrace"), sizeof(FVehicleSuspensionSpringTrace), Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleSuspensionSpringTrace_Hash() { return 1982196681U; }
class UScriptStruct* FVehicleSteeringSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleSteeringSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleSteeringSettings, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleSteeringSettings"), sizeof(FVehicleSteeringSettings), Get_Z_Construct_UScriptStruct_FVehicleSteeringSettings_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleSteeringSettings>()
{
	return FVehicleSteeringSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleSteeringSettings(FVehicleSteeringSettings::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleSteeringSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSteeringSettings
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSteeringSettings()
	{
		UScriptStruct::DeferCppStructOps<FVehicleSteeringSettings>(FName(TEXT("VehicleSteeringSettings")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleSteeringSettings;
	struct Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SteeringCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriftAdherencePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DriftAdherencePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriftRotationPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DriftRotationPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriftRecoverySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DriftRecoverySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriftMinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DriftMinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdherenceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdherenceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Grouped settings of the vehicle steering.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Grouped settings of the vehicle steering." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleSteeringSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringCurve_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/** Special curve used to scale turning force of the vehicle based on its absolute speed. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Special curve used to scale turning force of the vehicle based on its absolute speed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringCurve = { "SteeringCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, SteeringCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringDamping_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/** Defines amount of turn damping. This damping is used to avoid hard-snap feeling when releasing turn input. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines amount of turn damping. This damping is used to avoid hard-snap feeling when releasing turn input." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringDamping = { "SteeringDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, SteeringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_LinearDamping_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/** Defines strength of the linear damping. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines strength of the linear damping." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, LinearDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_LinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AngularDamping_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/** Defines strength of the angular damping. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines strength of the angular damping." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AngularDamping = { "AngularDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, AngularDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftAdherencePercentage_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/** Defines how many percent of regular adherence there is when drifting. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines how many percent of regular adherence there is when drifting." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftAdherencePercentage = { "DriftAdherencePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, DriftAdherencePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftAdherencePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftAdherencePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRotationPercentage_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/** Defines how many percent of regular rotation there is when drifting. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines how many percent of regular rotation there is when drifting." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRotationPercentage = { "DriftRotationPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, DriftRotationPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRotationPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRotationPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRecoverySpeed_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/** Defines how fast vehicle will recover its full adherence after drifting. It's speed multiplier, not a time. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines how fast vehicle will recover its full adherence after drifting. It's speed multiplier, not a time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRecoverySpeed = { "DriftRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, DriftRecoverySpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRecoverySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRecoverySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftMinSpeed_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/** Defines minimal speed required to drift. It won't activate below this speed. It is defined by KM/h just like vehicle speed. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines minimal speed required to drift. It won't activate below this speed. It is defined by KM/h just like vehicle speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftMinSpeed = { "DriftMinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, DriftMinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftMinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftMinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AdherenceMultiplier_MetaData[] = {
		{ "Comment", "/** Runtime value used as a adherence multiplier. It's 1 by default and clamps to 1. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value used as a adherence multiplier. It's 1 by default and clamps to 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AdherenceMultiplier = { "AdherenceMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, AdherenceMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AdherenceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AdherenceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_RotationMultiplier_MetaData[] = {
		{ "Comment", "/** Runtime value used as rotation multiplier. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value used as rotation multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_RotationMultiplier = { "RotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleSteeringSettings, RotationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_RotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_RotationMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_SteeringDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_LinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftAdherencePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRotationPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftRecoverySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_DriftMinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_AdherenceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::NewProp_RotationMultiplier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleSteeringSettings",
		sizeof(FVehicleSteeringSettings),
		alignof(FVehicleSteeringSettings),
		Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleSteeringSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleSteeringSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleSteeringSettings"), sizeof(FVehicleSteeringSettings), Get_Z_Construct_UScriptStruct_FVehicleSteeringSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleSteeringSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleSteeringSettings_Hash() { return 309957635U; }
class UScriptStruct* FVehicleEngineSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleEngineSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleEngineSettings, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleEngineSettings"), sizeof(FVehicleEngineSettings), Get_Z_Construct_UScriptStruct_FVehicleEngineSettings_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleEngineSettings>()
{
	return FVehicleEngineSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleEngineSettings(FVehicleEngineSettings::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleEngineSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleEngineSettings
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleEngineSettings()
	{
		UScriptStruct::DeferCppStructOps<FVehicleEngineSettings>(FName(TEXT("VehicleEngineSettings")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleEngineSettings;
	struct Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelerationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReversingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReversingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineBrakingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineBrakingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrakingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxReverseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxReverseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeedUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeedUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleAccelerationByDriveWheels_MetaData[];
#endif
		static void NewProp_bScaleAccelerationByDriveWheels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleAccelerationByDriveWheels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantBrakingForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantBrakingForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantEngineBrakingForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantEngineBrakingForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Grouped settings of the vehicle engine.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Grouped settings of the vehicle engine." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleEngineSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_AccelerationCurve_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Special curve used to scale acceleration forward force. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Special curve used to scale acceleration forward force." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_AccelerationCurve = { "AccelerationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, AccelerationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_AccelerationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_AccelerationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ReversingCurve_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Special curve used to scale acceleration backwards force. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Special curve used to scale acceleration backwards force." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ReversingCurve = { "ReversingCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, ReversingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ReversingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ReversingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_EngineBrakingCurve_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Special curve used to scale engine braking force, which is applied when there is no acceleration input. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Special curve used to scale engine braking force, which is applied when there is no acceleration input." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_EngineBrakingCurve = { "EngineBrakingCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, EngineBrakingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_EngineBrakingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_EngineBrakingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_BrakingCurve_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Special curve used to scale regular braking force, which is applied when the acceleration direction is opposite to the direction of heading of the vehicle. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Special curve used to scale regular braking force, which is applied when the acceleration direction is opposite to the direction of heading of the vehicle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_BrakingCurve = { "BrakingCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, BrakingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_BrakingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_BrakingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Defines maximum speed of this vehicle. No acceleration will be applied when this value is reached. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines maximum speed of this vehicle. No acceleration will be applied when this value is reached." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxReverseSpeed_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Defines maximum reversing speed. No reverse acceleration will be applied when this value is reached. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines maximum reversing speed. No reverse acceleration will be applied when this value is reached." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxReverseSpeed = { "MaxReverseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, MaxReverseSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxReverseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxReverseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Runtime value, calculated by the physics tick. Current speed of this vehicle defined in kilometers per hour. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value, calculated by the physics tick. Current speed of this vehicle defined in kilometers per hour." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, CurrentSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeedUnit_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Runtime value, calculated by the physics tick along with current speed. It divides current speed by the max value from the acceleration or reversing curves to return 0-1 speed value. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value, calculated by the physics tick along with current speed. It divides current speed by the max value from the acceleration or reversing curves to return 0-1 speed value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeedUnit = { "CurrentSpeedUnit", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, CurrentSpeedUnit), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeedUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeedUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_bScaleAccelerationByDriveWheels_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * If this is true, each drive wheel will contribute to the acceleration\n\x09 * so if we have two drive wheels, and only one touches the ground,\n\x09 * the acceleration force will be 50%.\n\x09 * If this is false, then the acceleration will not be scaled this way, and the\n\x09 * acceleration will be always the same as long as there\n\x09 * is at least one drive wheel touching the ground.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "If this is true, each drive wheel will contribute to the acceleration\nso if we have two drive wheels, and only one touches the ground,\nthe acceleration force will be 50%.\nIf this is false, then the acceleration will not be scaled this way, and the\nacceleration will be always the same as long as there\nis at least one drive wheel touching the ground." },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_bScaleAccelerationByDriveWheels_SetBit(void* Obj)
	{
		((FVehicleEngineSettings*)Obj)->bScaleAccelerationByDriveWheels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_bScaleAccelerationByDriveWheels = { "bScaleAccelerationByDriveWheels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleEngineSettings), &Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_bScaleAccelerationByDriveWheels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_bScaleAccelerationByDriveWheels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_bScaleAccelerationByDriveWheels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantBrakingForce_MetaData[] = {
		{ "Comment", "/** Runtime value assigned on physics step. It is cached even if not used, so it's consistent across all clients. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value assigned on physics step. It is cached even if not used, so it's consistent across all clients." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantBrakingForce = { "ConstantBrakingForce", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, ConstantBrakingForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantBrakingForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantBrakingForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantEngineBrakingForce_MetaData[] = {
		{ "Comment", "/** Runtime value assigned on physics step. It is cached even if not used, so it's consistent across all clients. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value assigned on physics step. It is cached even if not used, so it's consistent across all clients." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantEngineBrakingForce = { "ConstantEngineBrakingForce", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleEngineSettings, ConstantEngineBrakingForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantEngineBrakingForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantEngineBrakingForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_AccelerationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ReversingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_EngineBrakingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_BrakingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_MaxReverseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_CurrentSpeedUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_bScaleAccelerationByDriveWheels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantBrakingForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::NewProp_ConstantEngineBrakingForce,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleEngineSettings",
		sizeof(FVehicleEngineSettings),
		alignof(FVehicleEngineSettings),
		Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleEngineSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleEngineSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleEngineSettings"), sizeof(FVehicleEngineSettings), Get_Z_Construct_UScriptStruct_FVehicleEngineSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleEngineSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleEngineSettings_Hash() { return 2134633325U; }
class UScriptStruct* FVehiclePhysicsSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehiclePhysicsSettings, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehiclePhysicsSettings"), sizeof(FVehiclePhysicsSettings), Get_Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehiclePhysicsSettings>()
{
	return FVehiclePhysicsSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehiclePhysicsSettings(FVehiclePhysicsSettings::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehiclePhysicsSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehiclePhysicsSettings
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehiclePhysicsSettings()
	{
		UScriptStruct::DeferCppStructOps<FVehiclePhysicsSettings>(FName(TEXT("VehiclePhysicsSettings")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehiclePhysicsSettings;
	struct Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalLinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalLinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFrictionSnapLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TotalFrictionSnapLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilizationForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabilizationForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionForceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionForceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFrictionSpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalFrictionSpeedThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDirectionTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementDirectionTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsUpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicsUpdateInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsPerStatePaceIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicsPerStatePaceIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsLocationErrorTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicsLocationErrorTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsRotationErrorTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicsRotationErrorTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsCorrectionExponential_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicsCorrectionExponential;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasLastTotalFriction_MetaData[];
#endif
		static void NewProp_HasLastTotalFriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasLastTotalFriction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Grouped settings of the physics of the vehicle.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Grouped settings of the physics of the vehicle." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehiclePhysicsSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_LocalLinearVelocity_MetaData[] = {
		{ "Comment", "/** Runtime value, that tracks vehicle local linear velocity. Calculated each frame. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value, that tracks vehicle local linear velocity. Calculated each frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_LocalLinearVelocity = { "LocalLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, LocalLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_LocalLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_LocalLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Comment", "/** Runtime value, that tracks vehicle angular velocity. Calculated each frame. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value, that tracks vehicle angular velocity. Calculated each frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSnapLocation_MetaData[] = {
		{ "Comment", "/** Runtime value, that comes together with the HasLastTotalFriction. It stores vehicle location at the applied friction point. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value, that comes together with the HasLastTotalFriction. It stores vehicle location at the applied friction point." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSnapLocation = { "TotalFrictionSnapLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, TotalFrictionSnapLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSnapLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSnapLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_StabilizationForce_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Defines how strong is the stabilization force. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines how strong is the stabilization force." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_StabilizationForce = { "StabilizationForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, StabilizationForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_StabilizationForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_StabilizationForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForce_MetaData[] = {
		{ "Category", "Engine" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines friction force of this vehicle. It zeroes out Y velocity movment and lerps with current using the force. 0 will do nothing, 1 will use force opposite to the current. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines friction force of this vehicle. It zeroes out Y velocity movment and lerps with current using the force. 0 will do nothing, 1 will use force opposite to the current." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForce = { "FrictionForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, FrictionForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForceThreshold_MetaData[] = {
		{ "Category", "Engine" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines friction force threshold. If the vehicle is pushed stronger than this value, the side friction won't be applied. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines friction force threshold. If the vehicle is pushed stronger than this value, the side friction won't be applied." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForceThreshold = { "FrictionForceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, FrictionForceThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSpeedThreshold_MetaData[] = {
		{ "Category", "Engine" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines what speed needs to be reached in order to achieve full friction - locking vehicle in place. 0 will never lock it. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines what speed needs to be reached in order to achieve full friction - locking vehicle in place. 0 will never lock it." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSpeedThreshold = { "TotalFrictionSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, TotalFrictionSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_MovementDirectionTolerance_MetaData[] = {
		{ "Category", "Engine" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines tolerance which allows vehicle to decide whether it is moving forward or backward. Useful for many scenarios to ease out error with low speeds. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines tolerance which allows vehicle to decide whether it is moving forward or backward. Useful for many scenarios to ease out error with low speeds." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_MovementDirectionTolerance = { "MovementDirectionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, MovementDirectionTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_MovementDirectionTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_MovementDirectionTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsUpdateInterval_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Defines physics update interval of this component. Not the same as tick interval. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines physics update interval of this component. Not the same as tick interval." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsUpdateInterval = { "PhysicsUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, PhysicsUpdateInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsPerStatePaceIncrease_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Defines how much each running behind state will speed up the physics tick speed fro non-controllers. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines how much each running behind state will speed up the physics tick speed fro non-controllers." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsPerStatePaceIncrease = { "PhysicsPerStatePaceIncrease", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, PhysicsPerStatePaceIncrease), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsPerStatePaceIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsPerStatePaceIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsLocationErrorTolerance_MetaData[] = {
		{ "Category", "PhysicsCorrection" },
		{ "Comment", "/**\n\x09\x09""Defines location distance tolerance. If the state dispatched,\n\x09\x09""and the current location of the vehicle have location further apart\n\x09\x09than this tolerance, the location will be snapped hard. Otherwise\n\x09\x09it will calculate location error and slowly reduce it over time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines location distance tolerance. If the state dispatched,\nand the current location of the vehicle have location further apart\nthan this tolerance, the location will be snapped hard. Otherwise\nit will calculate location error and slowly reduce it over time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsLocationErrorTolerance = { "PhysicsLocationErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, PhysicsLocationErrorTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsLocationErrorTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsLocationErrorTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsRotationErrorTolerance_MetaData[] = {
		{ "Category", "PhysicsCorrection" },
		{ "Comment", "/** Defines rotation error tolerance. Used the same way as location tolerance. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines rotation error tolerance. Used the same way as location tolerance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsRotationErrorTolerance = { "PhysicsRotationErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, PhysicsRotationErrorTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsRotationErrorTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsRotationErrorTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsCorrectionExponential_MetaData[] = {
		{ "Category", "PhysicsCorrection" },
		{ "Comment", "/** Defines exponential parameter for the error correction. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Defines exponential parameter for the error correction." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsCorrectionExponential = { "PhysicsCorrectionExponential", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehiclePhysicsSettings, PhysicsCorrectionExponential), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsCorrectionExponential_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsCorrectionExponential_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_HasLastTotalFriction_MetaData[] = {
		{ "Comment", "/** Runtime value, that stores total friction flag. If true, the vehicle will be locked in place. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleSettings.h" },
		{ "ToolTip", "Runtime value, that stores total friction flag. If true, the vehicle will be locked in place." },
	};
#endif
	void Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_HasLastTotalFriction_SetBit(void* Obj)
	{
		((FVehiclePhysicsSettings*)Obj)->HasLastTotalFriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_HasLastTotalFriction = { "HasLastTotalFriction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehiclePhysicsSettings), &Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_HasLastTotalFriction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_HasLastTotalFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_HasLastTotalFriction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_LocalLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSnapLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_StabilizationForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_FrictionForceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_TotalFrictionSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_MovementDirectionTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsUpdateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsPerStatePaceIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsLocationErrorTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsRotationErrorTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_PhysicsCorrectionExponential,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::NewProp_HasLastTotalFriction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehiclePhysicsSettings",
		sizeof(FVehiclePhysicsSettings),
		alignof(FVehiclePhysicsSettings),
		Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehiclePhysicsSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehiclePhysicsSettings"), sizeof(FVehiclePhysicsSettings), Get_Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehiclePhysicsSettings_Hash() { return 473754402U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
