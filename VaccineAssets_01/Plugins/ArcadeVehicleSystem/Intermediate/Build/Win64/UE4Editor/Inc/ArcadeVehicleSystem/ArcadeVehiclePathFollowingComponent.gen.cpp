// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/ArcadeVehiclePathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeVehiclePathFollowingComponent() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehiclePathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
// End Cross Module References
	void UArcadeVehiclePathFollowingComponent::StaticRegisterNativesUArcadeVehiclePathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_NoRegister()
	{
		return UArcadeVehiclePathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Path following component for the arcade vehicles.\n\x09Implements simple path following fixes, so that creating\n\x09""AI movement is possible.\n*/" },
		{ "IncludePath", "ArcadeVehiclePathFollowingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehiclePathFollowingComponent.h" },
		{ "ToolTip", "Path following component for the arcade vehicles.\nImplements simple path following fixes, so that creating\nAI movement is possible." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArcadeVehiclePathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_Statics::ClassParams = {
		&UArcadeVehiclePathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArcadeVehiclePathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArcadeVehiclePathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArcadeVehiclePathFollowingComponent, 744628984);
	template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<UArcadeVehiclePathFollowingComponent>()
	{
		return UArcadeVehiclePathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArcadeVehiclePathFollowingComponent(Z_Construct_UClass_UArcadeVehiclePathFollowingComponent, &UArcadeVehiclePathFollowingComponent::StaticClass, TEXT("/Script/ArcadeVehicleSystem"), TEXT("UArcadeVehiclePathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArcadeVehiclePathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
