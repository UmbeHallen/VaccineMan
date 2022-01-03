// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArcadeVehicleMovementComponentBase;
class UCineCameraComponent;
class USpringArmComponent;
#ifdef ARCADEVEHICLESYSTEM_ArcadeVehicleCameraController_generated_h
#error "ArcadeVehicleCameraController.generated.h already included, missing '#pragma once' in ArcadeVehicleCameraController.h"
#endif
#define ARCADEVEHICLESYSTEM_ArcadeVehicleCameraController_generated_h

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraSnappingData_Statics; \
	ARCADEVEHICLESYSTEM_API static class UScriptStruct* StaticStruct();


template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<struct FCameraSnappingData>();

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_SPARSE_DATA
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTurnAngle); \
	DECLARE_FUNCTION(execUpdateOwnerSpeed); \
	DECLARE_FUNCTION(execClearSnappedState); \
	DECLARE_FUNCTION(execBlockSnappingSequence); \
	DECLARE_FUNCTION(execStopSnappingSequence); \
	DECLARE_FUNCTION(execBeginSnappingSequence); \
	DECLARE_FUNCTION(execAddPitchInput); \
	DECLARE_FUNCTION(execAddYawInput); \
	DECLARE_FUNCTION(execIsFrontCameraActive); \
	DECLARE_FUNCTION(execDeactivateAllCameras); \
	DECLARE_FUNCTION(execActivateRearCamera); \
	DECLARE_FUNCTION(execActivateFrontCamera); \
	DECLARE_FUNCTION(execInitializeCameras);


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTurnAngle); \
	DECLARE_FUNCTION(execUpdateOwnerSpeed); \
	DECLARE_FUNCTION(execClearSnappedState); \
	DECLARE_FUNCTION(execBlockSnappingSequence); \
	DECLARE_FUNCTION(execStopSnappingSequence); \
	DECLARE_FUNCTION(execBeginSnappingSequence); \
	DECLARE_FUNCTION(execAddPitchInput); \
	DECLARE_FUNCTION(execAddYawInput); \
	DECLARE_FUNCTION(execIsFrontCameraActive); \
	DECLARE_FUNCTION(execDeactivateAllCameras); \
	DECLARE_FUNCTION(execActivateRearCamera); \
	DECLARE_FUNCTION(execActivateFrontCamera); \
	DECLARE_FUNCTION(execInitializeCameras);


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArcadeVehicleCameraController(); \
	friend struct Z_Construct_UClass_UArcadeVehicleCameraController_Statics; \
public: \
	DECLARE_CLASS(UArcadeVehicleCameraController, USpringArmComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcadeVehicleSystem"), NO_API) \
	DECLARE_SERIALIZER(UArcadeVehicleCameraController)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUArcadeVehicleCameraController(); \
	friend struct Z_Construct_UClass_UArcadeVehicleCameraController_Statics; \
public: \
	DECLARE_CLASS(UArcadeVehicleCameraController, USpringArmComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcadeVehicleSystem"), NO_API) \
	DECLARE_SERIALIZER(UArcadeVehicleCameraController)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArcadeVehicleCameraController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArcadeVehicleCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArcadeVehicleCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArcadeVehicleCameraController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArcadeVehicleCameraController(UArcadeVehicleCameraController&&); \
	NO_API UArcadeVehicleCameraController(const UArcadeVehicleCameraController&); \
public:


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArcadeVehicleCameraController(UArcadeVehicleCameraController&&); \
	NO_API UArcadeVehicleCameraController(const UArcadeVehicleCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArcadeVehicleCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArcadeVehicleCameraController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UArcadeVehicleCameraController)


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_bIsControllerInitialized() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_bIsControllerInitialized); } \
	FORCEINLINE static uint32 __PPO__m_pMovementComponent() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_pMovementComponent); } \
	FORCEINLINE static uint32 __PPO__m_pFrontCamera() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_pFrontCamera); } \
	FORCEINLINE static uint32 __PPO__m_pRearCamera() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_pRearCamera); } \
	FORCEINLINE static uint32 __PPO__m_pRearCameraArm() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_pRearCameraArm); } \
	FORCEINLINE static uint32 __PPO__m_pLocalPlayerController() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_pLocalPlayerController); } \
	FORCEINLINE static uint32 __PPO__m_yawSnappingData() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_yawSnappingData); } \
	FORCEINLINE static uint32 __PPO__m_pitchSnappingData() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_pitchSnappingData); } \
	FORCEINLINE static uint32 __PPO__m_ownerPitchState() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_ownerPitchState); } \
	FORCEINLINE static uint32 __PPO__m_ownerTurnAngle() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_ownerTurnAngle); } \
	FORCEINLINE static uint32 __PPO__m_ownerSpeed() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_ownerSpeed); } \
	FORCEINLINE static uint32 __PPO__m_bIsOwnerSpeedDirty() { return STRUCT_OFFSET(UArcadeVehicleCameraController, m_bIsOwnerSpeedDirty); }


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_59_PROLOG
#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_SPARSE_DATA \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_RPC_WRAPPERS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_INCLASS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_SPARSE_DATA \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCADEVEHICLESYSTEM_API UClass* StaticClass<class UArcadeVehicleCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleCameraController_h


#define FOREACH_ENUM_CAMERAOWNERPITCHSTATE(op) \
	op(CameraOwnerPitchState::Down) \
	op(CameraOwnerPitchState::Flat) \
	op(CameraOwnerPitchState::Up) 

enum class CameraOwnerPitchState : uint8;
template<> ARCADEVEHICLESYSTEM_API UEnum* StaticEnum<CameraOwnerPitchState>();

#define FOREACH_ENUM_CAMERASNAPPINGSEQUENCESTATE(op) \
	op(CameraSnappingSequenceState::None) \
	op(CameraSnappingSequenceState::Interpolating) \
	op(CameraSnappingSequenceState::Snapped) \
	op(CameraSnappingSequenceState::Blocked) 

enum class CameraSnappingSequenceState : uint8;
template<> ARCADEVEHICLESYSTEM_API UEnum* StaticEnum<CameraSnappingSequenceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
