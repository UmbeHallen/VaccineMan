// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcadeVehicleSystem/Public/ArcadeVehicleNetSerialization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeVehicleNetSerialization() {}
// Cross Module References
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D_NetQuantize();
	UPackage* Z_Construct_UPackage__Script_ArcadeVehicleSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ARCADEVEHICLESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFloat_NetQuantize();
// End Cross Module References

static_assert(std::is_polymorphic<FVector2D_NetQuantize>() == std::is_polymorphic<FVector2D>(), "USTRUCT FVector2D_NetQuantize cannot be polymorphic unless super FVector2D is polymorphic");

class UScriptStruct* FVector2D_NetQuantize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FVector2D_NetQuantize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2D_NetQuantize, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("Vector2D_NetQuantize"), sizeof(FVector2D_NetQuantize), Get_Z_Construct_UScriptStruct_FVector2D_NetQuantize_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FVector2D_NetQuantize>()
{
	return FVector2D_NetQuantize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector2D_NetQuantize(FVector2D_NetQuantize::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("Vector2D_NetQuantize"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVector2D_NetQuantize
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVector2D_NetQuantize()
	{
		UScriptStruct::DeferCppStructOps<FVector2D_NetQuantize>(FName(TEXT("Vector2D_NetQuantize")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFVector2D_NetQuantize;
	struct Z_Construct_UScriptStruct_FVector2D_NetQuantize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2D_NetQuantize_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * 0 decimal place of precision.\n  * Up to 20 bits per component.\n  * Valid range: 2^20 = +/- 1,048,576\n */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetSerialization.h" },
		{ "ToolTip", "0 decimal place of precision.\nUp to 20 bits per component.\nValid range: 2^20 = +/- 1,048,576" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector2D_NetQuantize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2D_NetQuantize>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2D_NetQuantize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		Z_Construct_UScriptStruct_FVector2D,
		&NewStructOps,
		"Vector2D_NetQuantize",
		sizeof(FVector2D_NetQuantize),
		alignof(FVector2D_NetQuantize),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2D_NetQuantize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2D_NetQuantize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector2D_NetQuantize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector2D_NetQuantize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector2D_NetQuantize"), sizeof(FVector2D_NetQuantize), Get_Z_Construct_UScriptStruct_FVector2D_NetQuantize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector2D_NetQuantize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector2D_NetQuantize_Hash() { return 1605482688U; }
class UScriptStruct* FFloat_NetQuantize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCADEVEHICLESYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FFloat_NetQuantize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloat_NetQuantize, Z_Construct_UPackage__Script_ArcadeVehicleSystem(), TEXT("Float_NetQuantize"), sizeof(FFloat_NetQuantize), Get_Z_Construct_UScriptStruct_FFloat_NetQuantize_Hash());
	}
	return Singleton;
}
template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<FFloat_NetQuantize>()
{
	return FFloat_NetQuantize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFloat_NetQuantize(FFloat_NetQuantize::StaticStruct, TEXT("/Script/ArcadeVehicleSystem"), TEXT("Float_NetQuantize"), false, nullptr, nullptr);
static struct FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFFloat_NetQuantize
{
	FScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFFloat_NetQuantize()
	{
		UScriptStruct::DeferCppStructOps<FFloat_NetQuantize>(FName(TEXT("Float_NetQuantize")));
	}
} ScriptStruct_ArcadeVehicleSystem_StaticRegisterNativesFFloat_NetQuantize;
	struct Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * 8 bit float compression for networking.\n * 0 decimal places precision.\n */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetSerialization.h" },
		{ "ToolTip", "8 bit float compression for networking.\n0 decimal places precision." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloat_NetQuantize>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::NewProp_m_value_MetaData[] = {
		{ "Comment", "/** Underlying float value. */" },
		{ "ModuleRelativePath", "Public/ArcadeVehicleNetSerialization.h" },
		{ "ToolTip", "Underlying float value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::NewProp_m_value = { "m_value", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloat_NetQuantize, m_value), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::NewProp_m_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::NewProp_m_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::NewProp_m_value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcadeVehicleSystem,
		nullptr,
		&NewStructOps,
		"Float_NetQuantize",
		sizeof(FFloat_NetQuantize),
		alignof(FFloat_NetQuantize),
		Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloat_NetQuantize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloat_NetQuantize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcadeVehicleSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Float_NetQuantize"), sizeof(FFloat_NetQuantize), Get_Z_Construct_UScriptStruct_FFloat_NetQuantize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloat_NetQuantize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloat_NetQuantize_Hash() { return 1564006468U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
