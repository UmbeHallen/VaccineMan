// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticArcadeVehicleMovementComponent;
#ifdef ARCADEVEHICLESYSTEM_StaticArcadeVehicleAnimator_generated_h
#error "StaticArcadeVehicleAnimator.generated.h already included, missing '#pragma once' in StaticArcadeVehicleAnimator.h"
#endif
#define ARCADEVEHICLESYSTEM_StaticArcadeVehicleAnimator_generated_h

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_SPARSE_DATA
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_RPC_WRAPPERS \
	virtual void ApplyAnimation_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyAnimation); \
	DECLARE_FUNCTION(execGetVehicleMovementComponent);


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyAnimation); \
	DECLARE_FUNCTION(execGetVehicleMovementComponent);


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_EVENT_PARMS
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_CALLBACK_WRAPPERS
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticArcadeVehicleAnimator(); \
	friend struct Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics; \
public: \
	DECLARE_CLASS(UStaticArcadeVehicleAnimator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcadeVehicleSystem"), NO_API) \
	DECLARE_SERIALIZER(UStaticArcadeVehicleAnimator)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUStaticArcadeVehicleAnimator(); \
	friend struct Z_Construct_UClass_UStaticArcadeVehicleAnimator_Statics; \
public: \
	DECLARE_CLASS(UStaticArcadeVehicleAnimator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcadeVehicleSystem"), NO_API) \
	DECLARE_SERIALIZER(UStaticArcadeVehicleAnimator)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticArcadeVehicleAnimator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticArcadeVehicleAnimator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticArcadeVehicleAnimator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticArcadeVehicleAnimator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticArcadeVehicleAnimator(UStaticArcadeVehicleAnimator&&); \
	NO_API UStaticArcadeVehicleAnimator(const UStaticArcadeVehicleAnimator&); \
public:


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticArcadeVehicleAnimator(UStaticArcadeVehicleAnimator&&); \
	NO_API UStaticArcadeVehicleAnimator(const UStaticArcadeVehicleAnimator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticArcadeVehicleAnimator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticArcadeVehicleAnimator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStaticArcadeVehicleAnimator)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(UStaticArcadeVehicleAnimator, Settings); } \
	FORCEINLINE static uint32 __PPO__m_bWasAccelerating() { return STRUCT_OFFSET(UStaticArcadeVehicleAnimator, m_bWasAccelerating); } \
	FORCEINLINE static uint32 __PPO__m_bWasBraking() { return STRUCT_OFFSET(UStaticArcadeVehicleAnimator, m_bWasBraking); } \
	FORCEINLINE static uint32 __PPO__m_pVehicleMovementComponent() { return STRUCT_OFFSET(UStaticArcadeVehicleAnimator, m_pVehicleMovementComponent); }


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_16_PROLOG \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_EVENT_PARMS


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_SPARSE_DATA \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_RPC_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_INCLASS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_SPARSE_DATA \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<class UStaticArcadeVehicleAnimator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_StaticArcadeVehicleAnimator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
