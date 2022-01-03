// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/TankVehicleAnimationInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankVehicleAnimationInstance() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UTankVehicleAnimationInstance_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UTankVehicleAnimationInstance();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleAnimationInstance();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
// End Cross Module References
	void UTankVehicleAnimationInstance::StaticRegisterNativesUTankVehicleAnimationInstance()
	{
	}
	UClass* Z_Construct_UClass_UTankVehicleAnimationInstance_NoRegister()
	{
		return UTankVehicleAnimationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTankVehicleAnimationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlaceWheelRotationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlaceWheelRotationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelSideRotationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WheelSideRotationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleSpeedForInverseWheelRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleSpeedForInverseWheelRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArcadeVehicleAnimationInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09""Base for the animation instances that are driven by the arcade vehicle of this system.\n\x09Obviously, feel free to implement your own animation instance, but as a good base on how to use it,\n\x09this one is pretty good introduction and in most cases, there is all you need.\n\x09This implementation handles tank-like animations of the wheels.\n*/" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TankVehicleAnimationInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TankVehicleAnimationInstance.h" },
		{ "ToolTip", "Base for the animation instances that are driven by the arcade vehicle of this system.\nObviously, feel free to implement your own animation instance, but as a good base on how to use it,\nthis one is pretty good introduction and in most cases, there is all you need.\nThis implementation handles tank-like animations of the wheels." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_InPlaceWheelRotationMultiplier_MetaData[] = {
		{ "Category", "TankAnimation" },
		{ "Comment", "/** Multiplier for the wheel speed when in-place. */" },
		{ "ModuleRelativePath", "Public/TankVehicleAnimationInstance.h" },
		{ "ToolTip", "Multiplier for the wheel speed when in-place." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_InPlaceWheelRotationMultiplier = { "InPlaceWheelRotationMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankVehicleAnimationInstance, InPlaceWheelRotationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_InPlaceWheelRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_InPlaceWheelRotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_WheelSideRotationMultiplier_MetaData[] = {
		{ "Category", "TankAnimation" },
		{ "Comment", "/** Multiplier for the wheels rotation slowing when turning the tank in movement. */" },
		{ "ModuleRelativePath", "Public/TankVehicleAnimationInstance.h" },
		{ "ToolTip", "Multiplier for the wheels rotation slowing when turning the tank in movement." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_WheelSideRotationMultiplier = { "WheelSideRotationMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankVehicleAnimationInstance, WheelSideRotationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_WheelSideRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_WheelSideRotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_VehicleSpeedForInverseWheelRotation_MetaData[] = {
		{ "Category", "TankAnimation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Speed of the vehicle required for the wheels opposite direction rotation. */" },
		{ "ModuleRelativePath", "Public/TankVehicleAnimationInstance.h" },
		{ "ToolTip", "Speed of the vehicle required for the wheels opposite direction rotation." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_VehicleSpeedForInverseWheelRotation = { "VehicleSpeedForInverseWheelRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankVehicleAnimationInstance, VehicleSpeedForInverseWheelRotation), METADATA_PARAMS(Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_VehicleSpeedForInverseWheelRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_VehicleSpeedForInverseWheelRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_InPlaceWheelRotationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_WheelSideRotationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::NewProp_VehicleSpeedForInverseWheelRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankVehicleAnimationInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::ClassParams = {
		&UTankVehicleAnimationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankVehicleAnimationInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankVehicleAnimationInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankVehicleAnimationInstance, 4189830473);
	template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<UTankVehicleAnimationInstance>()
	{
		return UTankVehicleAnimationInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankVehicleAnimationInstance(Z_Construct_UClass_UTankVehicleAnimationInstance, &UTankVehicleAnimationInstance::StaticClass, TEXT("/Script/ArcadeVehicleSystem"), TEXT("UTankVehicleAnimationInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankVehicleAnimationInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
