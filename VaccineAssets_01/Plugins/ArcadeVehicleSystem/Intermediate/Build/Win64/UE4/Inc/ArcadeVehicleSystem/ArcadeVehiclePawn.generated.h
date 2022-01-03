// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCADEVEHICLESYSTEM_ArcadeVehiclePawn_generated_h
#error "ArcadeVehiclePawn.generated.h already included, missing '#pragma once' in ArcadeVehiclePawn.h"
#endif
#define ARCADEVEHICLESYSTEM_ArcadeVehiclePawn_generated_h

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_SPARSE_DATA
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_RPC_WRAPPERS
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_EVENT_PARMS \
	struct ArcadeVehiclePawn_eventSetVehicleEnabled_Parms \
	{ \
		bool Enable; \
	};


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_CALLBACK_WRAPPERS
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArcadeVehiclePawn(); \
	friend struct Z_Construct_UClass_AArcadeVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AArcadeVehiclePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcadeVehicleSystem"), NO_API) \
	DECLARE_SERIALIZER(AArcadeVehiclePawn)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAArcadeVehiclePawn(); \
	friend struct Z_Construct_UClass_AArcadeVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(AArcadeVehiclePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcadeVehicleSystem"), NO_API) \
	DECLARE_SERIALIZER(AArcadeVehiclePawn)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArcadeVehiclePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArcadeVehiclePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArcadeVehiclePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArcadeVehiclePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArcadeVehiclePawn(AArcadeVehiclePawn&&); \
	NO_API AArcadeVehiclePawn(const AArcadeVehiclePawn&); \
public:


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArcadeVehiclePawn(AArcadeVehiclePawn&&); \
	NO_API AArcadeVehiclePawn(const AArcadeVehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArcadeVehiclePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArcadeVehiclePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArcadeVehiclePawn)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VehicleMesh() { return STRUCT_OFFSET(AArcadeVehiclePawn, VehicleMesh); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(AArcadeVehiclePawn, MovementComponent); }


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_17_PROLOG \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_EVENT_PARMS


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_SPARSE_DATA \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_RPC_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_CALLBACK_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_INCLASS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_SPARSE_DATA \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_CALLBACK_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<class AArcadeVehiclePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
