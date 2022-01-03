// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/StaticArcadeVehicleMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticArcadeVehicleMovementComponent() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UStaticArcadeVehicleMovementComponent();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleMovementComponentBase();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UStaticArcadeVehicleAnimator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStaticArcadeVehicleMovementComponent::execGetVisualsMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetVisualsMesh();
		P_NATIVE_END;
	}
	void UStaticArcadeVehicleMovementComponent::StaticRegisterNativesUStaticArcadeVehicleMovementComponent()
	{
		UClass* Class = UStaticArcadeVehicleMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVisualsMesh", &UStaticArcadeVehicleMovementComponent::execGetVisualsMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics
	{
		struct StaticArcadeVehicleMovementComponent_eventGetVisualsMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticArcadeVehicleMovementComponent_eventGetVisualsMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleMesh" },
		{ "Comment", "/**\n\x09 * Returns static mesh used for visual aspects\n\x09 * of this vehicle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleMovementComponent.h" },
		{ "ToolTip", "Returns static mesh used for visual aspects\nof this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticArcadeVehicleMovementComponent, nullptr, "GetVisualsMesh", nullptr, nullptr, sizeof(StaticArcadeVehicleMovementComponent_eventGetVisualsMesh_Parms), Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_NoRegister()
	{
		return UStaticArcadeVehicleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimatorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pVehicleStaticMeshPhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pVehicleStaticMeshPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pVehicleStaticMeshVisuals_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pVehicleStaticMeshVisuals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArcadeVehicleMovementComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticArcadeVehicleMovementComponent_GetVisualsMesh, "GetVisualsMesh" }, // 1567353482
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Implements arcade vehicle movement component logic for\n* the vehicles that are created using Static Mesh Component.\n* If your vehicles use Skeletal Mesh Component, please use different movement\n* component for it.\n* This component unlike its skeletal version, uses static mesh sockets\n* to locate the wheel springs.\n*/" },
		{ "IncludePath", "StaticArcadeVehicleMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleMovementComponent.h" },
		{ "ToolTip", "Implements arcade vehicle movement component logic for\nthe vehicles that are created using Static Mesh Component.\nIf your vehicles use Skeletal Mesh Component, please use different movement\ncomponent for it.\nThis component unlike its skeletal version, uses static mesh sockets\nto locate the wheel springs." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_AnimatorClass_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Class of the static vehicle movement animator.\n\x09 * Animation is created at runtime at the moment of initialization,\n\x09 * and provides suspension and wheels animation logic.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleMovementComponent.h" },
		{ "ToolTip", "Class of the static vehicle movement animator.\nAnimation is created at runtime at the moment of initialization,\nand provides suspension and wheels animation logic." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_AnimatorClass = { "AnimatorClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticArcadeVehicleMovementComponent, AnimatorClass), Z_Construct_UClass_UStaticArcadeVehicleAnimator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_AnimatorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_AnimatorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshPhysics_MetaData[] = {
		{ "Comment", "/**\n\x09* Stores vehicle root primitive\n\x09* component cast to static mesh.\n\x09* This is hidden mesh, but used for the simulation only.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleMovementComponent.h" },
		{ "ToolTip", "Stores vehicle root primitive\ncomponent cast to static mesh.\nThis is hidden mesh, but used for the simulation only." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshPhysics = { "m_pVehicleStaticMeshPhysics", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticArcadeVehicleMovementComponent, m_pVehicleStaticMeshPhysics), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshVisuals_MetaData[] = {
		{ "Comment", "/**\n\x09* Stores actual vehicle mesh. It should be a child of\n\x09* the physical component. This component should be visible,\n\x09* but do not have physics at all.\n\x09* They are separate beings in order to allow decoupling them\n\x09* to simulate tilt and roll animations.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleMovementComponent.h" },
		{ "ToolTip", "Stores actual vehicle mesh. It should be a child of\nthe physical component. This component should be visible,\nbut do not have physics at all.\nThey are separate beings in order to allow decoupling them\nto simulate tilt and roll animations." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshVisuals = { "m_pVehicleStaticMeshVisuals", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticArcadeVehicleMovementComponent, m_pVehicleStaticMeshVisuals), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshVisuals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_AnimatorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::NewProp_m_pVehicleStaticMeshVisuals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticArcadeVehicleMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::ClassParams = {
		&UStaticArcadeVehicleMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticArcadeVehicleMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticArcadeVehicleMovementComponent, 3087049994);
	template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<UStaticArcadeVehicleMovementComponent>()
	{
		return UStaticArcadeVehicleMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticArcadeVehicleMovementComponent(Z_Construct_UClass_UStaticArcadeVehicleMovementComponent, &UStaticArcadeVehicleMovementComponent::StaticClass, TEXT("/Script/ArcadeVehicleSystem"), TEXT("UStaticArcadeVehicleMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticArcadeVehicleMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
