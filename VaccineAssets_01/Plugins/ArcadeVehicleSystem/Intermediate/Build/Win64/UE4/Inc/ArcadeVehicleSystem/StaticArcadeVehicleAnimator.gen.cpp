// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/StaticArcadeVehicleAnimator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticArcadeVehicleAnimator() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UStaticArcadeVehicleAnimator_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UStaticArcadeVehicleAnimator();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_NoRegister();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationSettings();
// End Cross Module References
	DEFINE_FUNCTION(UStaticArcadeVehicleAnimator::execApplyAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticArcadeVehicleAnimator::execGetVehicleMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticArcadeVehicleMovementComponent**)Z_Param__Result=P_THIS->GetVehicleMovementComponent();
		P_NATIVE_END;
	}
	static FName NAME_UStaticArcadeVehicleAnimator_ApplyAnimation = FName(TEXT("ApplyAnimation"));
	void UStaticArcadeVehicleAnimator::ApplyAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UStaticArcadeVehicleAnimator_ApplyAnimation),NULL);
	}
	void UStaticArcadeVehicleAnimator::StaticRegisterNativesUStaticArcadeVehicleAnimator()
	{
		UClass* Class = UStaticArcadeVehicleAnimator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAnimation", &UStaticArcadeVehicleAnimator::execApplyAnimation },
			{ "GetVehicleMovementComponent", &UStaticArcadeVehicleAnimator::execGetVehicleMovementComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticArcadeVehicleAnimator_ApplyAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticArcadeVehicleAnimator_ApplyAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** This actually applies animation values to the vehicle meshes. Implement logic here if needed. */" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleAnimator.h" },
		{ "ToolTip", "This actually applies animation values to the vehicle meshes. Implement logic here if needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticArcadeVehicleAnimator_ApplyAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticArcadeVehicleAnimator, nullptr, "ApplyAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticArcadeVehicleAnimator_ApplyAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticArcadeVehicleAnimator_ApplyAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticArcadeVehicleAnimator_ApplyAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticArcadeVehicleAnimator_ApplyAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics
	{
		struct StaticArcadeVehicleAnimator_eventGetVehicleMovementComponent_Parms
		{
			UStaticArcadeVehicleMovementComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticArcadeVehicleAnimator_eventGetVehicleMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09  * Returns vehicle movement component associated with this animator.\n\x09  * It is not Pure node, because what it basically does is, it checks if we have valid instance,\n\x09  * and if not, it will try to return one from the owner actor.\n\x09  * It will throw error if there was not available vehicle movement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleAnimator.h" },
		{ "ToolTip", "Returns vehicle movement component associated with this animator.\nIt is not Pure node, because what it basically does is, it checks if we have valid instance,\nand if not, it will try to return one from the owner actor.\nIt will throw error if there was not available vehicle movement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticArcadeVehicleAnimator, nullptr, "GetVehicleMovementComponent", nullptr, nullptr, sizeof(StaticArcadeVehicleAnimator_eventGetVehicleMovementComponent_Parms), Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStaticArcadeVehicleAnimator_NoRegister()
	{
		return UStaticArcadeVehicleAnimator::StaticClass();
	}
	struct Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bWasAccelerating_MetaData[];
#endif
		static void NewProp_m_bWasAccelerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bWasAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bWasBraking_MetaData[];
#endif
		static void NewProp_m_bWasBraking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bWasBraking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pVehicleMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pVehicleMovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticArcadeVehicleAnimator_ApplyAnimation, "ApplyAnimation" }, // 728347574
		{ &Z_Construct_UFunction_UStaticArcadeVehicleAnimator_GetVehicleMovementComponent, "GetVehicleMovementComponent" }, // 2776742973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Component that is used to animate arcade vehicles, that use static mesh instead of skeletal.\n * It has exactly the same logic as skeletal version, but because static meshes can't have animations\n * this component handles the transform logic just like anim instance.\n */" },
		{ "IncludePath", "StaticArcadeVehicleAnimator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleAnimator.h" },
		{ "ToolTip", "Component that is used to animate arcade vehicles, that use static mesh instead of skeletal.\nIt has exactly the same logic as skeletal version, but because static meshes can't have animations\nthis component handles the transform logic just like anim instance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Total settings for this animation instance of the vehicle. */" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleAnimator.h" },
		{ "ToolTip", "Total settings for this animation instance of the vehicle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticArcadeVehicleAnimator, Settings), Z_Construct_UScriptStruct_FVehicleAnimationSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasAccelerating_MetaData[] = {
		{ "Comment", "/** Cached vehicle acceleration flag to see when it changes. */" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleAnimator.h" },
		{ "ToolTip", "Cached vehicle acceleration flag to see when it changes." },
	};
#endif
	void Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasAccelerating_SetBit(void* Obj)
	{
		((UStaticArcadeVehicleAnimator*)Obj)->m_bWasAccelerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasAccelerating = { "m_bWasAccelerating", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticArcadeVehicleAnimator), &Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasBraking_MetaData[] = {
		{ "Comment", "/** Cached vehicle braking flag to see when it changes. */" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleAnimator.h" },
		{ "ToolTip", "Cached vehicle braking flag to see when it changes." },
	};
#endif
	void Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasBraking_SetBit(void* Obj)
	{
		((UStaticArcadeVehicleAnimator*)Obj)->m_bWasBraking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasBraking = { "m_bWasBraking", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticArcadeVehicleAnimator), &Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasBraking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasBraking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasBraking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_pVehicleMovementComponent_MetaData[] = {
		{ "Comment", "/** Arcade vehicle movement component that calculates the movement that will then be animated via this anim instance. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehicleAnimator.h" },
		{ "ToolTip", "Arcade vehicle movement component that calculates the movement that will then be animated via this anim instance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_pVehicleMovementComponent = { "m_pVehicleMovementComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticArcadeVehicleAnimator, m_pVehicleMovementComponent), Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_pVehicleMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_pVehicleMovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_bWasBraking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::NewProp_m_pVehicleMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticArcadeVehicleAnimator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::ClassParams = {
		&UStaticArcadeVehicleAnimator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticArcadeVehicleAnimator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticArcadeVehicleAnimator, 1722432942);
	template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<UStaticArcadeVehicleAnimator>()
	{
		return UStaticArcadeVehicleAnimator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticArcadeVehicleAnimator(Z_Construct_UClass_UStaticArcadeVehicleAnimator, &UStaticArcadeVehicleAnimator::StaticClass, TEXT("/Script/ArcadeVehicleSystem"), TEXT("UStaticArcadeVehicleAnimator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticArcadeVehicleAnimator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
