// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVehiclePhysicsState;
class UPrimitiveComponent;
struct FVector;
struct FTransform;
#ifdef ARCADEVEHICLESYSTEM_ArcadeVehicleMovementComponentBase_generated_h
#error "ArcadeVehicleMovementComponentBase.generated.h already included, missing '#pragma once' in ArcadeVehicleMovementComponentBase.h"
#endif
#define ARCADEVEHICLESYSTEM_ArcadeVehicleMovementComponentBase_generated_h

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_SPARSE_DATA
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_RPC_WRAPPERS \
	virtual void OnReceiveState_Client_Implementation(FVehiclePhysicsState const& State); \
	virtual void OnReceiveState_Server_Implementation(FVehiclePhysicsState const& State); \
 \
	DECLARE_FUNCTION(execOnReceiveState_Client); \
	DECLARE_FUNCTION(execOnReceiveState_Server); \
	DECLARE_FUNCTION(execClearNetworkData); \
	DECLARE_FUNCTION(execGetVehicleMesh); \
	DECLARE_FUNCTION(execSetBlockAcceleration); \
	DECLARE_FUNCTION(execGetWheelOffset); \
	DECLARE_FUNCTION(execSetVehicleLinearVelocity); \
	DECLARE_FUNCTION(execTeleportVehicle); \
	DECLARE_FUNCTION(execIsEngineBraking); \
	DECLARE_FUNCTION(execIsBraking); \
	DECLARE_FUNCTION(execIsMovingAtAll); \
	DECLARE_FUNCTION(execIsMovingBackward); \
	DECLARE_FUNCTION(execIsMovingForward); \
	DECLARE_FUNCTION(execIsAccelerating); \
	DECLARE_FUNCTION(execSetStabilizationInput); \
	DECLARE_FUNCTION(execSetDriftInput); \
	DECLARE_FUNCTION(execSetTurningInput); \
	DECLARE_FUNCTION(execSetAccelerationInput); \
	DECLARE_FUNCTION(execGetMaxSpeedMultiplier); \
	DECLARE_FUNCTION(execSetMaxSpeedMultiplier); \
	DECLARE_FUNCTION(execGetLastAppliedBraking); \
	DECLARE_FUNCTION(execGetLastAppliedAcceleration); \
	DECLARE_FUNCTION(execGetCurrentSpeedUnit); \
	DECLARE_FUNCTION(execGetCurrentSpeedAbsolute); \
	DECLARE_FUNCTION(execGetCurrentSpeed);


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnReceiveState_Client); \
	DECLARE_FUNCTION(execOnReceiveState_Server); \
	DECLARE_FUNCTION(execClearNetworkData); \
	DECLARE_FUNCTION(execGetVehicleMesh); \
	DECLARE_FUNCTION(execSetBlockAcceleration); \
	DECLARE_FUNCTION(execGetWheelOffset); \
	DECLARE_FUNCTION(execSetVehicleLinearVelocity); \
	DECLARE_FUNCTION(execTeleportVehicle); \
	DECLARE_FUNCTION(execIsEngineBraking); \
	DECLARE_FUNCTION(execIsBraking); \
	DECLARE_FUNCTION(execIsMovingAtAll); \
	DECLARE_FUNCTION(execIsMovingBackward); \
	DECLARE_FUNCTION(execIsMovingForward); \
	DECLARE_FUNCTION(execIsAccelerating); \
	DECLARE_FUNCTION(execSetStabilizationInput); \
	DECLARE_FUNCTION(execSetDriftInput); \
	DECLARE_FUNCTION(execSetTurningInput); \
	DECLARE_FUNCTION(execSetAccelerationInput); \
	DECLARE_FUNCTION(execGetMaxSpeedMultiplier); \
	DECLARE_FUNCTION(execSetMaxSpeedMultiplier); \
	DECLARE_FUNCTION(execGetLastAppliedBraking); \
	DECLARE_FUNCTION(execGetLastAppliedAcceleration); \
	DECLARE_FUNCTION(execGetCurrentSpeedUnit); \
	DECLARE_FUNCTION(execGetCurrentSpeedAbsolute); \
	DECLARE_FUNCTION(execGetCurrentSpeed);


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_EVENT_PARMS \
	struct ArcadeVehicleMovementComponentBase_eventOnReceiveState_Client_Parms \
	{ \
		FVehiclePhysicsState State; \
	}; \
	struct ArcadeVehicleMovementComponentBase_eventOnReceiveState_Server_Parms \
	{ \
		FVehiclePhysicsState State; \
	};


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_CALLBACK_WRAPPERS
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArcadeVehicleMovementComponentBase(); \
	friend struct Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics; \
public: \
	DECLARE_CLASS(UArcadeVehicleMovementComponentBase, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcadeVehicleSystem"), NO_API) \
	DECLARE_SERIALIZER(UArcadeVehicleMovementComponentBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxSpeedMultiplier=NETFIELD_REP_START, \
		NETFIELD_REP_END=MaxSpeedMultiplier	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUArcadeVehicleMovementComponentBase(); \
	friend struct Z_Construct_UClass_UArcadeVehicleMovementComponentBase_Statics; \
public: \
	DECLARE_CLASS(UArcadeVehicleMovementComponentBase, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcadeVehicleSystem"), NO_API) \
	DECLARE_SERIALIZER(UArcadeVehicleMovementComponentBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxSpeedMultiplier=NETFIELD_REP_START, \
		NETFIELD_REP_END=MaxSpeedMultiplier	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArcadeVehicleMovementComponentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArcadeVehicleMovementComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArcadeVehicleMovementComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArcadeVehicleMovementComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArcadeVehicleMovementComponentBase(UArcadeVehicleMovementComponentBase&&); \
	NO_API UArcadeVehicleMovementComponentBase(const UArcadeVehicleMovementComponentBase&); \
public:


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArcadeVehicleMovementComponentBase(UArcadeVehicleMovementComponentBase&&); \
	NO_API UArcadeVehicleMovementComponentBase(const UArcadeVehicleMovementComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArcadeVehicleMovementComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArcadeVehicleMovementComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UArcadeVehicleMovementComponentBase)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AccelerationInput() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, AccelerationInput); } \
	FORCEINLINE static uint32 __PPO__TurningInput() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, TurningInput); } \
	FORCEINLINE static uint32 __PPO__DriftInput() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, DriftInput); } \
	FORCEINLINE static uint32 __PPO__StabilizationInput() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, StabilizationInput); } \
	FORCEINLINE static uint32 __PPO__MaxSpeedMultiplier() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, MaxSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, Settings); } \
	FORCEINLINE static uint32 __PPO__m_pMesh() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_pMesh); } \
	FORCEINLINE static uint32 __PPO__m_bIsVehicleInitialized() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_bIsVehicleInitialized); } \
	FORCEINLINE static uint32 __PPO__m_wheelsInfo() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_wheelsInfo); } \
	FORCEINLINE static uint32 __PPO__m_bHasValidPhysicsState() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_bHasValidPhysicsState); } \
	FORCEINLINE static uint32 __PPO__m_bIsAccelerating() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_bIsAccelerating); } \
	FORCEINLINE static uint32 __PPO__m_bIsBraking() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_bIsBraking); } \
	FORCEINLINE static uint32 __PPO__m_bIsEngineBraking() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_bIsEngineBraking); } \
	FORCEINLINE static uint32 __PPO__m_bBlockAcceleration() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_bBlockAcceleration); } \
	FORCEINLINE static uint32 __PPO__m_lastAppliedAcceleration() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_lastAppliedAcceleration); } \
	FORCEINLINE static uint32 __PPO__m_lastAppliedBraking() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_lastAppliedBraking); } \
	FORCEINLINE static uint32 __PPO__m_physicsUpdateTimer() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_physicsUpdateTimer); } \
	FORCEINLINE static uint32 __PPO__m_mutablePhysicsUpdateInterval() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_mutablePhysicsUpdateInterval); } \
	FORCEINLINE static uint32 __PPO__m_locationError() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_locationError); } \
	FORCEINLINE static uint32 __PPO__m_rotationError() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_rotationError); } \
	FORCEINLINE static uint32 __PPO__m_bIsCorrectingLocationError() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_bIsCorrectingLocationError); } \
	FORCEINLINE static uint32 __PPO__m_bIsCorrectingRotationError() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_bIsCorrectingRotationError); } \
	FORCEINLINE static uint32 __PPO__m_bIsReplayingState() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_bIsReplayingState); } \
	FORCEINLINE static uint32 __PPO__m_pPathFollowingComponent() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_pPathFollowingComponent); } \
	FORCEINLINE static uint32 __PPO__m_states() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_states); } \
	FORCEINLINE static uint32 __PPO__m_lastDispatchedState() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_lastDispatchedState); } \
	FORCEINLINE static uint32 __PPO__m_runtimeState() { return STRUCT_OFFSET(UArcadeVehicleMovementComponentBase, m_runtimeState); }


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_22_PROLOG \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_EVENT_PARMS


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_SPARSE_DATA \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_RPC_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_CALLBACK_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_INCLASS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_SPARSE_DATA \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_CALLBACK_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<class UArcadeVehicleMovementComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleMovementComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
