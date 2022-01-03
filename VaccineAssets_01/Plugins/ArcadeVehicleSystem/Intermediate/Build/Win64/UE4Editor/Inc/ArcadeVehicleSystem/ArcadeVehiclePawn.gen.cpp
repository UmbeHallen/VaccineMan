// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/ArcadeVehiclePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeVehiclePawn() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_AArcadeVehiclePawn_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_AArcadeVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UArcadeVehicleMovementComponent_NoRegister();
// End Cross Module References
	static FName NAME_AArcadeVehiclePawn_SetVehicleEnabled = FName(TEXT("SetVehicleEnabled"));
	void AArcadeVehiclePawn::SetVehicleEnabled(bool Enable)
	{
		ArcadeVehiclePawn_eventSetVehicleEnabled_Parms Parms;
		Parms.Enable=Enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AArcadeVehiclePawn_SetVehicleEnabled),&Parms);
	}
	void AArcadeVehiclePawn::StaticRegisterNativesAArcadeVehiclePawn()
	{
	}
	struct Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ArcadeVehiclePawn_eventSetVehicleEnabled_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArcadeVehiclePawn_eventSetVehicleEnabled_Parms), &Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Enable and disable the vehicles. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehiclePawn.h" },
		{ "ToolTip", "Enable and disable the vehicles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArcadeVehiclePawn, nullptr, "SetVehicleEnabled", nullptr, nullptr, sizeof(ArcadeVehiclePawn_eventSetVehicleEnabled_Parms), Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArcadeVehiclePawn_NoRegister()
	{
		return AArcadeVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AArcadeVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcadeVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArcadeVehiclePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArcadeVehiclePawn_SetVehicleEnabled, "SetVehicleEnabled" }, // 3436313131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcadeVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * Base class of the arcade vehicle. Because I want to keep this plugin as flexible as possible,\n  * the whole vehicle movement is done entirely inside the single component,\n  * so you may or may not use this pawn. You can absolutely create your own pawn without\n  * deriving from this class. However, it's common to use this class as base, because it implements tiny bits\n  * so that the vehicle is ready to go.\n  * This pawn is designed for the vehicles using Skeletal Mesh Component!\n*/" },
		{ "DisplayName", "SkeletalArcadeVehiclePawn" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ArcadeVehiclePawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehiclePawn.h" },
		{ "ToolTip", "Base class of the arcade vehicle. Because I want to keep this plugin as flexible as possible,\nthe whole vehicle movement is done entirely inside the single component,\nso you may or may not use this pawn. You can absolutely create your own pawn without\nderiving from this class. However, it's common to use this class as base, because it implements tiny bits\nso that the vehicle is ready to go.\nThis pawn is designed for the vehicles using Skeletal Mesh Component!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_VehicleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Skeletal mesh of this vehicle. It acts as root component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehiclePawn.h" },
		{ "ToolTip", "Skeletal mesh of this vehicle. It acts as root component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_VehicleMesh = { "VehicleMesh", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcadeVehiclePawn, VehicleMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_VehicleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_VehicleMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Component responsible for the whole movement and networking physics. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ArcadeVehiclePawn.h" },
		{ "ToolTip", "Component responsible for the whole movement and networking physics." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcadeVehiclePawn, MovementComponent), Z_Construct_UClass_UArcadeVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_MovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArcadeVehiclePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_VehicleMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcadeVehiclePawn_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcadeVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcadeVehiclePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcadeVehiclePawn_Statics::ClassParams = {
		&AArcadeVehiclePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArcadeVehiclePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArcadeVehiclePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArcadeVehiclePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcadeVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcadeVehiclePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcadeVehiclePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcadeVehiclePawn, 289149816);
	template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<AArcadeVehiclePawn>()
	{
		return AArcadeVehiclePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcadeVehiclePawn(Z_Construct_UClass_AArcadeVehiclePawn, &AArcadeVehiclePawn::StaticClass, TEXT("/Script/ArcadeVehicleSystem"), TEXT("AArcadeVehiclePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcadeVehiclePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
