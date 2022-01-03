// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCADEVEHICLESYSTEM_ArcadeVehicleAnimationSettings_generated_h
#error "ArcadeVehicleAnimationSettings.generated.h already included, missing '#pragma once' in ArcadeVehicleAnimationSettings.h"
#endif
#define ARCADEVEHICLESYSTEM_ArcadeVehicleAnimationSettings_generated_h

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleAnimationSettings_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleAnimationSettings_Statics; \
	ARCADEVEHICLESYSTEM_API static class UScriptStruct* StaticStruct();


template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<struct FVehicleAnimationSettings>();

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleAnimationSettings_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleAnimationRollSettings_Statics; \
	ARCADEVEHICLESYSTEM_API static class UScriptStruct* StaticStruct();


template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<struct FVehicleAnimationRollSettings>();

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleAnimationSettings_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleAnimationTiltSettings_Statics; \
	ARCADEVEHICLESYSTEM_API static class UScriptStruct* StaticStruct();


template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<struct FVehicleAnimationTiltSettings>();

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleAnimationSettings_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleBodyTiltData_Statics; \
	ARCADEVEHICLESYSTEM_API static class UScriptStruct* StaticStruct();


template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<struct FVehicleBodyTiltData>();

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleAnimationSettings_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleAnimationWheelsSettings_Statics; \
	ARCADEVEHICLESYSTEM_API static class UScriptStruct* StaticStruct();


template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<struct FVehicleAnimationWheelsSettings>();

#define HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleAnimationSettings_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleWheelAnimationInfo_Statics; \
	ARCADEVEHICLESYSTEM_API static class UScriptStruct* StaticStruct();


template<> ARCADEVEHICLESYSTEM_API UScriptStruct* StaticStruct<struct FVehicleWheelAnimationInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ArcadeVehicleSystem_Source_ArcadeVehicleSystem_Public_ArcadeVehicleAnimationSettings_h


#define FOREACH_ENUM_VEHICLEWHEELSIDE(op) \
	op(VehicleWheelSide::None) \
	op(VehicleWheelSide::Left) \
	op(VehicleWheelSide::Right) 

enum class VehicleWheelSide : uint8;
template<> ARCADEVEHICLESYSTEM_API UEnum* StaticEnum<VehicleWheelSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
