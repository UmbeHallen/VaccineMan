// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/StaticArcadeVehiclePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticArcadeVehiclePawn() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_AStaticArcadeVehiclePawn_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_AStaticArcadeVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ARCADEVEHICLESYSTEM_API UClass* Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_NoRegister();
// End Cross Module References
	static FName NAME_AStaticArcadeVehiclePawn_SetVehicleEnabled = FName(TEXT("SetVehicleEnabled"));
	void AStaticArcadeVehiclePawn::SetVehicleEnabled(bool Enable)
	{
		StaticArcadeVehiclePawn_eventSetVehicleEnabled_Parms Parms;
		Parms.Enable=Enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AStaticArcadeVehiclePawn_SetVehicleEnabled),&Parms);
	}
	void AStaticArcadeVehiclePawn::StaticRegisterNativesAStaticArcadeVehiclePawn()
	{
	}
	struct Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((StaticArcadeVehiclePawn_eventSetVehicleEnabled_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StaticArcadeVehiclePawn_eventSetVehicleEnabled_Parms), &Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Enable and disable the vehicles. */" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehiclePawn.h" },
		{ "ToolTip", "Enable and disable the vehicles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticArcadeVehiclePawn, nullptr, "SetVehicleEnabled", nullptr, nullptr, sizeof(StaticArcadeVehiclePawn_eventSetVehicleEnabled_Parms), Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStaticArcadeVehiclePawn_NoRegister()
	{
		return AStaticArcadeVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleVisualMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleVisualMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStaticArcadeVehiclePawn_SetVehicleEnabled, "SetVehicleEnabled" }, // 3070230090
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base class of the arcade vehicle. Because I want to keep this plugin as flexible as possible,\n* the whole vehicle movement is done entirely inside the single component,\n* so you may or may not use this pawn. You can absolutely create your own pawn without\n* deriving from this class. However, it's common to use this class as base, because it implements tiny bits\n* so that the vehicle is ready to go.\n* This pawn is designed for the vehicles using Static Mesh Component!\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StaticArcadeVehiclePawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehiclePawn.h" },
		{ "ToolTip", "Base class of the arcade vehicle. Because I want to keep this plugin as flexible as possible,\nthe whole vehicle movement is done entirely inside the single component,\nso you may or may not use this pawn. You can absolutely create your own pawn without\nderiving from this class. However, it's common to use this class as base, because it implements tiny bits\nso that the vehicle is ready to go.\nThis pawn is designed for the vehicles using Static Mesh Component!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Static mesh of this vehicle. It acts as root component and simulates all vehicle physics. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehiclePawn.h" },
		{ "ToolTip", "Static mesh of this vehicle. It acts as root component and simulates all vehicle physics." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleMesh = { "VehicleMesh", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStaticArcadeVehiclePawn, VehicleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleVisualMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Static mesh of this vehicle used purely for visual aspects of it without collision or physics. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehiclePawn.h" },
		{ "ToolTip", "Static mesh of this vehicle used purely for visual aspects of it without collision or physics." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleVisualMesh = { "VehicleVisualMesh", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStaticArcadeVehiclePawn, VehicleVisualMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleVisualMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleVisualMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Component responsible for the whole movement and networking physics. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StaticArcadeVehiclePawn.h" },
		{ "ToolTip", "Component responsible for the whole movement and networking physics." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStaticArcadeVehiclePawn, MovementComponent), Z_Construct_UClass_UStaticArcadeVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_MovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_VehicleVisualMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticArcadeVehiclePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::ClassParams = {
		&AStaticArcadeVehiclePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticArcadeVehiclePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStaticArcadeVehiclePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStaticArcadeVehiclePawn, 1680421898);
	template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<AStaticArcadeVehiclePawn>()
	{
		return AStaticArcadeVehiclePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStaticArcadeVehiclePawn(Z_Construct_UClass_AStaticArcadeVehiclePawn, &AStaticArcadeVehiclePawn::StaticClass, TEXT("/Script/ArcadeVehicleSystem"), TEXT("AStaticArcadeVehiclePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticArcadeVehiclePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
