// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/ArcadeVehicleMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeVehicleMovementComponent() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleMovementComponent_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleMovementComponent();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleMovementComponentBase();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void UArcadeVehicleMovementComponent::StaticRegisterNativesUArcadeVehicleMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UArcadeVehicleMovementComponent_NoRegister()
	{
		return UArcadeVehicleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pVehicleSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pVehicleSkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements arcade vehicle movement component logic for\n * the vehicles that are created using Skeletal Mesh Component.\n * If your vehicles use Static Mesh Component, please use different movement\n * component for it.\n */" },
		{ "DisplayName", "SkeletalArcadeVehicleMovementComponent" },
		{ "IncludePath", "ArcadeVehicleMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponent.h" },
		{ "ToolTip", "Implements arcade vehicle movement component logic for\nthe vehicles that are created using Skeletal Mesh Component.\nIf your vehicles use Static Mesh Component, please use different movement\ncomponent for it." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleSkeletalMesh_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores vehicle root primitive\n\x09 * component cast to skeletal mesh.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleMovementComponent.h" },
		{ "ToolTip", "Stores vehicle root primitive\ncomponent cast to skeletal mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleSkeletalMesh = { "m_pVehicleSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArcadeVehicleMovementComponent, m_pVehicleSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArcadeVehicleMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::ClassParams = {
		&UArcadeVehicleMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArcadeVehicleMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArcadeVehicleMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArcadeVehicleMovementComponent, 3892902387);
	template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<UArcadeVehicleMovementComponent>()
	{
		return UArcadeVehicleMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArcadeVehicleMovementComponent(Z_Construct_UClass_UArcadeVehicleMovementComponent, &UArcadeVehicleMovementComponent::StaticClass, TEXT("/Script/ArcadeVehicleSystem"), TEXT("UArcadeVehicleMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArcadeVehicleMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
