// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/ArcadeVehicleAnimationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeVehicleAnimationSettings() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UEnum* Z_Construct_UEnum_ArcadeVehicleSystem_VehicleWheelSide();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationRollSettings();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleBodyTiltData();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static UEnum* VehicleWheelSide_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArcadeVehicleSystem_VehicleWheelSide, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleWheelSide"));
		}
		return Singleton;
	}
	template<> ARCADEVEHICLESYSTEM_API UEnum* StaticEnum<VehicleWheelSide>()
	{
		return VehicleWheelSide_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_VehicleWheelSide(VehicleWheelSide_StaticEnum, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleWheelSide"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArcadeVehicleSystem_VehicleWheelSide_Hash() { return 758058479U; }
	UEnum* Z_Construct_UEnum_ArcadeVehicleSystem_VehicleWheelSide()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("VehicleWheelSide"), 0, Get_Z_Construct_UEnum_ArcadeVehicleSystem_VehicleWheelSide_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VehicleWheelSide::None", (int64)VehicleWheelSide::None },
				{ "VehicleWheelSide::Left", (int64)VehicleWheelSide::Left },
				{ "VehicleWheelSide::Right", (int64)VehicleWheelSide::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n\x09""Enumerator that allows to specify which side of the vehicle\n\x09the wheel belongs to.\n*/" },
				{ "Left.Name", "VehicleWheelSide::Left" },
				{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
				{ "None.Name", "VehicleWheelSide::None" },
				{ "Right.Name", "VehicleWheelSide::Right" },
				{ "ToolTip", "Enumerator that allows to specify which side of the vehicle\nthe wheel belongs to." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
				nullptr,
				"VehicleWheelSide",
				"VehicleWheelSide",
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
class UScriptStruct* FVehicleAnimationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleAnimationSettings, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleAnimationSettings"), sizeof(FVehicleAnimationSettings), Get_Z_Construct_UScriptStruct_FVehicleAnimationSettings_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleAnimationSettings>()
{
	return FVehicleAnimationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleAnimationSettings(FVehicleAnimationSettings::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleAnimationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationSettings
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationSettings()
	{
		UScriptStruct::DeferCppStructOps<FVehicleAnimationSettings>(FName(TEXT("VehicleAnimationSettings")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationSettings;
	struct Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wheels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wheels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Structure for grouping all of the vehicle animation settings together,\n\x09""and to make them easier to copy between blueprints.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Structure for grouping all of the vehicle animation settings together,\nand to make them easier to copy between blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleAnimationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Wheels_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** All wheels settings for this vehicle animation. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "All wheels settings for this vehicle animation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Wheels = { "Wheels", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationSettings, Wheels), Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Wheels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Wheels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Tilt_MetaData[] = {
		{ "Category", "Tilt" },
		{ "Comment", "/** All tilt settings for this vehicle animation. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "All tilt settings for this vehicle animation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Tilt = { "Tilt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationSettings, Tilt), Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Tilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Tilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Roll" },
		{ "Comment", "/** All roll settings for this vehicle animation. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "All roll settings for this vehicle animation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationSettings, Roll), Z_Construct_UScriptStruct_FVehicleAnimationRollSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Roll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Wheels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Tilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::NewProp_Roll,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleAnimationSettings",
		sizeof(FVehicleAnimationSettings),
		alignof(FVehicleAnimationSettings),
		Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleAnimationSettings"), sizeof(FVehicleAnimationSettings), Get_Z_Construct_UScriptStruct_FVehicleAnimationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationSettings_Hash() { return 3401621718U; }
class UScriptStruct* FVehicleAnimationRollSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleAnimationRollSettings"), sizeof(FVehicleAnimationRollSettings), Get_Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleAnimationRollSettings>()
{
	return FVehicleAnimationRollSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleAnimationRollSettings(FVehicleAnimationRollSettings::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleAnimationRollSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationRollSettings
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationRollSettings()
	{
		UScriptStruct::DeferCppStructOps<FVehicleAnimationRollSettings>(FName(TEXT("VehicleAnimationRollSettings")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationRollSettings;
	struct Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollDampingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollDampingSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Helper structure that gathers all body roll animation-related\n\x09settings of the vehicle animation instance.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Helper structure that gathers all body roll animation-related\nsettings of the vehicle animation instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleAnimationRollSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_CurrentRoll_MetaData[] = {
		{ "Category", "Roll" },
		{ "Comment", "/** The most up-to-date vehicle body roll angle. It is only exposed here to allow users to preview it. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "The most up-to-date vehicle body roll angle. It is only exposed here to allow users to preview it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_CurrentRoll = { "CurrentRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationRollSettings, CurrentRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_CurrentRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_CurrentRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Roll" },
		{ "Comment", "/** Maximum roll angle that the vehicle can be in. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Maximum roll angle that the vehicle can be in." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationRollSettings, MaxAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_MaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_MaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Roll" },
		{ "Comment", "/** Strength of the roll. It is just simple multiplier of how much this effect takes place. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Strength of the roll. It is just simple multiplier of how much this effect takes place." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationRollSettings, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_RollDampingSpeed_MetaData[] = {
		{ "Category", "Roll" },
		{ "Comment", "/**\n\x09\x09This parameter defines angular speed of the vehicle required for achieving full roll angle.\n\x09\x09So the vehicle side-speed will be divided by this value, and when it reaches this value,\n\x09\x09""full roll will be applied. Basically it just defines how much roll is given at certain speed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "This parameter defines angular speed of the vehicle required for achieving full roll angle.\nSo the vehicle side-speed will be divided by this value, and when it reaches this value,\nfull roll will be applied. Basically it just defines how much roll is given at certain speed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_RollDampingSpeed = { "RollDampingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationRollSettings, RollDampingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_RollDampingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_RollDampingSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_CurrentRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_MaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::NewProp_RollDampingSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleAnimationRollSettings",
		sizeof(FVehicleAnimationRollSettings),
		alignof(FVehicleAnimationRollSettings),
		Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationRollSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleAnimationRollSettings"), sizeof(FVehicleAnimationRollSettings), Get_Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Hash() { return 743207644U; }
class UScriptStruct* FVehicleAnimationTiltSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleAnimationTiltSettings"), sizeof(FVehicleAnimationTiltSettings), Get_Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleAnimationTiltSettings>()
{
	return FVehicleAnimationTiltSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleAnimationTiltSettings(FVehicleAnimationTiltSettings::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleAnimationTiltSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationTiltSettings
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationTiltSettings()
	{
		UScriptStruct::DeferCppStructOps<FVehicleAnimationTiltSettings>(FName(TEXT("VehicleAnimationTiltSettings")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationTiltSettings;
	struct Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationTilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelerationTilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingTilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrakingTilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeTilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeTilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Helper structure that gathers all body tilt animation-related\n\x09settings of the vehicle animation instance.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Helper structure that gathers all body tilt animation-related\nsettings of the vehicle animation instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleAnimationTiltSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_AccelerationTilt_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "Comment", "/** \n\x09\x09Tilt animation settings for the acceleration of the vehicle.\n\x09\x09Note that the acceleration can mean both forward or backward.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Tilt animation settings for the acceleration of the vehicle.\nNote that the acceleration can mean both forward or backward." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_AccelerationTilt = { "AccelerationTilt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationTiltSettings, AccelerationTilt), Z_Construct_UScriptStruct_FVehicleBodyTiltData, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_AccelerationTilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_AccelerationTilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_BrakingTilt_MetaData[] = {
		{ "Category", "Braking" },
		{ "Comment", "/**\n\x09\x09Tilt animation settings for the braking of the vehicle.\n\x09\x09Note that braking in this case simply means releasing input, or accelerating\n\x09\x09in the opposite direction of the vehicle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Tilt animation settings for the braking of the vehicle.\nNote that braking in this case simply means releasing input, or accelerating\nin the opposite direction of the vehicle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_BrakingTilt = { "BrakingTilt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationTiltSettings, BrakingTilt), Z_Construct_UScriptStruct_FVehicleBodyTiltData, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_BrakingTilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_BrakingTilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_RuntimeTilt_MetaData[] = {
		{ "Comment", "/** Runtime tilt data filled out at runtime from appropriate tilt type selected. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Runtime tilt data filled out at runtime from appropriate tilt type selected." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_RuntimeTilt = { "RuntimeTilt", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationTiltSettings, RuntimeTilt), Z_Construct_UScriptStruct_FVehicleBodyTiltData, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_RuntimeTilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_RuntimeTilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_CurrentTilt_MetaData[] = {
		{ "Category", "Tilt" },
		{ "Comment", "/** The most up-to-date vehicle body tilt angle. It is only exposed here to allow users to preview it. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "The most up-to-date vehicle body tilt angle. It is only exposed here to allow users to preview it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_CurrentTilt = { "CurrentTilt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationTiltSettings, CurrentTilt), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_CurrentTilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_CurrentTilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_Timer_MetaData[] = {
		{ "Comment", "/** Runtime timer, that calculates oscillation time for sinus for the tilting animation. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Runtime timer, that calculates oscillation time for sinus for the tilting animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationTiltSettings, Timer), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_AccelerationTilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_BrakingTilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_RuntimeTilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_CurrentTilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::NewProp_Timer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleAnimationTiltSettings",
		sizeof(FVehicleAnimationTiltSettings),
		alignof(FVehicleAnimationTiltSettings),
		Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleAnimationTiltSettings"), sizeof(FVehicleAnimationTiltSettings), Get_Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Hash() { return 3574316567U; }
class UScriptStruct* FVehicleBodyTiltData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleBodyTiltData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleBodyTiltData, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleBodyTiltData"), sizeof(FVehicleBodyTiltData), Get_Z_Construct_UScriptStruct_FVehicleBodyTiltData_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleBodyTiltData>()
{
	return FVehicleBodyTiltData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleBodyTiltData(FVehicleBodyTiltData::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleBodyTiltData"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleBodyTiltData
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleBodyTiltData()
	{
		UScriptStruct::DeferCppStructOps<FVehicleBodyTiltData>(FName(TEXT("VehicleBodyTiltData")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleBodyTiltData;
	struct Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiltAccelerationTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiltAccelerationTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiltDampingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiltDampingSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Helper structure to gather all info about single\n\x09vehicle body tilt setting for the total tilt settings.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Helper structure to gather all info about single\nvehicle body tilt setting for the total tilt settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleBodyTiltData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Tilt" },
		{ "Comment", "/** Defines maximum angle that the vehicle body can reach when using this tilt data. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Defines maximum angle that the vehicle body can reach when using this tilt data." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleBodyTiltData, MaxAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_MaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_MaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Tilt" },
		{ "Comment", "/** Defines how fast tilting animation is performed. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Defines how fast tilting animation is performed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleBodyTiltData, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "Tilt" },
		{ "Comment", "/** Defines how tilt animation is damped. If zero, then it will just keep going. Higher values will stop sooner. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Defines how tilt animation is damped. If zero, then it will just keep going. Higher values will stop sooner." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleBodyTiltData, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltAccelerationTarget_MetaData[] = {
		{ "Category", "Tilt" },
		{ "Comment", "/** \n\x09\x09""Defines acceleration value that needs to be reached in order to achieve full tilt angle.\n\x09\x09The closer vehicle acceleration is to this value, the more it multiplies tilt.\n\x09\x09It allows to have smaller tilts when for example using controller, where the input\n\x09\x09might not be fully 1 or 0.\n\x09\x09This takes acceleration value. Check acceleration curve in your vehicle to understand\n\x09\x09what kind of acceleration values you want here. Typically about 10 is good.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Defines acceleration value that needs to be reached in order to achieve full tilt angle.\nThe closer vehicle acceleration is to this value, the more it multiplies tilt.\nIt allows to have smaller tilts when for example using controller, where the input\nmight not be fully 1 or 0.\nThis takes acceleration value. Check acceleration curve in your vehicle to understand\nwhat kind of acceleration values you want here. Typically about 10 is good." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltAccelerationTarget = { "TiltAccelerationTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleBodyTiltData, TiltAccelerationTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltAccelerationTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltAccelerationTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltDampingSpeed_MetaData[] = {
		{ "Category", "Tilt" },
		{ "Comment", "/**\n\x09\x09This setting defines how current vehicle speed affects tilting animation.\n\x09\x09So for example, if the vehicle runs very fast, close to this value,\n\x09\x09the tilting speed will be very small. This allows to add more stability\n\x09\x09when running faster, than when at low speeds. So the way it works is,\n\x09\x09that the vehicle current speed will be divided by this value and clamped between 0 and 1.\n\x09\x09Then the speed of the oscillation of the tilt will be multiplied by this value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "This setting defines how current vehicle speed affects tilting animation.\nSo for example, if the vehicle runs very fast, close to this value,\nthe tilting speed will be very small. This allows to add more stability\nwhen running faster, than when at low speeds. So the way it works is,\nthat the vehicle current speed will be divided by this value and clamped between 0 and 1.\nThen the speed of the oscillation of the tilt will be multiplied by this value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltDampingSpeed = { "TiltDampingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleBodyTiltData, TiltDampingSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltDampingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltDampingSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_MaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltAccelerationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::NewProp_TiltDampingSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleBodyTiltData",
		sizeof(FVehicleBodyTiltData),
		alignof(FVehicleBodyTiltData),
		Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleBodyTiltData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleBodyTiltData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleBodyTiltData"), sizeof(FVehicleBodyTiltData), Get_Z_Construct_UScriptStruct_FVehicleBodyTiltData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleBodyTiltData_Hash() { return 4227874374U; }
class UScriptStruct* FVehicleAnimationWheelsSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleAnimationWheelsSettings"), sizeof(FVehicleAnimationWheelsSettings), Get_Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleAnimationWheelsSettings>()
{
	return FVehicleAnimationWheelsSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleAnimationWheelsSettings(FVehicleAnimationWheelsSettings::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleAnimationWheelsSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationWheelsSettings
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationWheelsSettings()
	{
		UScriptStruct::DeferCppStructOps<FVehicleAnimationWheelsSettings>(FName(TEXT("VehicleAnimationWheelsSettings")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleAnimationWheelsSettings;
	struct Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Registry_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Registry_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Registry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionBeginEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionBeginEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopRotationOnBraking_MetaData[];
#endif
		static void NewProp_bStopRotationOnBraking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopRotationOnBraking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Helper structure that gathers all wheels animation-related\n\x09settings of the vehicle animation instance.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Helper structure that gathers all wheels animation-related\nsettings of the vehicle animation instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleAnimationWheelsSettings>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Registry_Inner = { "Registry", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Registry_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** The most known up-to-date wheels rotation. If the wheels info is not filled out in the panel, system will make sure they match what is in the vehicle. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "The most known up-to-date wheels rotation. If the wheels info is not filled out in the panel, system will make sure they match what is in the vehicle." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Registry = { "Registry", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationWheelsSettings, Registry), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Registry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Registry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_DirectionBeginEnd_MetaData[] = {
		{ "Comment", "/** Runtime value that defines begin and end rotation of the wheel direction for smooth blending. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Runtime value that defines begin and end rotation of the wheel direction for smooth blending." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_DirectionBeginEnd = { "DirectionBeginEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationWheelsSettings, DirectionBeginEnd), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_DirectionBeginEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_DirectionBeginEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDirection_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** The most known up-to-date wheels direction. It is only exposed here to allow users to preview it. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "The most known up-to-date wheels direction. It is only exposed here to allow users to preview it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationWheelsSettings, CurrentDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_MaxDirection_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** Defines max angle of the wheels turn. Angle is defined in degrees. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Defines max angle of the wheels turn. Angle is defined in degrees." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_MaxDirection = { "MaxDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationWheelsSettings, MaxDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_MaxDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_MaxDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_TransitionTime_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** Defines wheels turn transition time, so how much time it takes for the wheels to perform full direction change. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Defines wheels turn transition time, so how much time it takes for the wheels to perform full direction change." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_TransitionTime = { "TransitionTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationWheelsSettings, TransitionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_TransitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_TransitionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Timer_MetaData[] = {
		{ "Comment", "/** Runtime timer for the wheels direction blending. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Runtime timer for the wheels direction blending." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationWheelsSettings, Timer), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDuration_MetaData[] = {
		{ "Comment", "/** Runtime value of the time required for the blending. It is calculated on change based on how many degrees left there are. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Runtime value of the time required for the blending. It is calculated on change based on how many degrees left there are." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDuration = { "CurrentDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleAnimationWheelsSettings, CurrentDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_bStopRotationOnBraking_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** An optional flag. When it's true, the wheels will immediately stop rotating when braking. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "An optional flag. When it's true, the wheels will immediately stop rotating when braking." },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_bStopRotationOnBraking_SetBit(void* Obj)
	{
		((FVehicleAnimationWheelsSettings*)Obj)->bStopRotationOnBraking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_bStopRotationOnBraking = { "bStopRotationOnBraking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleAnimationWheelsSettings), &Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_bStopRotationOnBraking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_bStopRotationOnBraking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_bStopRotationOnBraking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Registry_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Registry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_DirectionBeginEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_MaxDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_TransitionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_CurrentDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::NewProp_bStopRotationOnBraking,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleAnimationWheelsSettings",
		sizeof(FVehicleAnimationWheelsSettings),
		alignof(FVehicleAnimationWheelsSettings),
		Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleAnimationWheelsSettings"), sizeof(FVehicleAnimationWheelsSettings), Get_Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Hash() { return 169076186U; }
class UScriptStruct* FVehicleWheelAnimationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("VehicleWheelAnimationInfo"), sizeof(FVehicleWheelAnimationInfo), Get_Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVehicleWheelAnimationInfo>()
{
	return FVehicleWheelAnimationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleWheelAnimationInfo(FVehicleWheelAnimationInfo::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("VehicleWheelAnimationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleWheelAnimationInfo
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleWheelAnimationInfo()
	{
		UScriptStruct::DeferCppStructOps<FVehicleWheelAnimationInfo>(FName(TEXT("VehicleWheelAnimationInfo")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVehicleWheelAnimationInfo;
	struct Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Side_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Side_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Side;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialWheelMeshTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialWheelMeshTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSteeringWheel_MetaData[];
#endif
		static void NewProp_bIsSteeringWheel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSteeringWheel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09""Additional structure to gather vehicle wheel data for the animation specifically.\n*/" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Additional structure to gather vehicle wheel data for the animation specifically." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleWheelAnimationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** Stores latest up-to-date wheel rotation. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Stores latest up-to-date wheel rotation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelAnimationInfo, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** Stores latest up-to-date wheel offset in Z axis. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Stores latest up-to-date wheel offset in Z axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelAnimationInfo, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Swing_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** Stores latest up-to-date wheel swing amopunt. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Stores latest up-to-date wheel swing amopunt." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Swing = { "Swing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelAnimationInfo, Swing), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Swing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Swing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Side_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Side_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** Allows to specify which side of the vehicle this wheel lays on. It is not used currently, but can be. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Allows to specify which side of the vehicle this wheel lays on. It is not used currently, but can be." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelAnimationInfo, Side), Z_Construct_UEnum_ArcadeVehicleSystem_VehicleWheelSide, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Side_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Side_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_WheelMesh_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** Static mesh component associated with this wheel. It can perfectly be valid to be null if not used. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Static mesh component associated with this wheel. It can perfectly be valid to be null if not used." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_WheelMesh = { "WheelMesh", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelAnimationInfo, WheelMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_WheelMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_WheelMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_InitialWheelMeshTransform_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** Initial relative transform of the wheel mesh upon initialization. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Initial relative transform of the wheel mesh upon initialization." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_InitialWheelMeshTransform = { "InitialWheelMeshTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleWheelAnimationInfo, InitialWheelMeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_InitialWheelMeshTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_InitialWheelMeshTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_bIsSteeringWheel_MetaData[] = {
		{ "Category", "Wheels" },
		{ "Comment", "/** Value grabbed when the wheels are allocated and taken from the vehicle settings. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleAnimationSettings.h" },
		{ "ToolTip", "Value grabbed when the wheels are allocated and taken from the vehicle settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_bIsSteeringWheel_SetBit(void* Obj)
	{
		((FVehicleWheelAnimationInfo*)Obj)->bIsSteeringWheel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_bIsSteeringWheel = { "bIsSteeringWheel", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleWheelAnimationInfo), &Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_bIsSteeringWheel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_bIsSteeringWheel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_bIsSteeringWheel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Swing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Side_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_Side,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_WheelMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_InitialWheelMeshTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::NewProp_bIsSteeringWheel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"VehicleWheelAnimationInfo",
		sizeof(FVehicleWheelAnimationInfo),
		alignof(FVehicleWheelAnimationInfo),
		Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleWheelAnimationInfo"), sizeof(FVehicleWheelAnimationInfo), Get_Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Hash() { return 1929706522U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
