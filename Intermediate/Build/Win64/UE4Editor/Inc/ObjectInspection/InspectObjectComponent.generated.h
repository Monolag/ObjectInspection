// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInspectActor;
#ifdef OBJECTINSPECTION_InspectObjectComponent_generated_h
#error "InspectObjectComponent.generated.h already included, missing '#pragma once' in InspectObjectComponent.h"
#endif
#define OBJECTINSPECTION_InspectObjectComponent_generated_h

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_SPARSE_DATA
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateUpDown) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateUpDown(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateLeftRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateLeftRight(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exectryInspectionAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->tryInspectionAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverseTimeline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReverseTimeline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayTimeline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayTimeline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInspectionObject) \
	{ \
		P_GET_OBJECT(AInspectActor,Z_Param_SetInspectionActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInspectionObject(Z_Param_SetInspectionActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimelineFloatReturn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TimelineFloatReturn(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTimelineFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTimelineFinished(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveObjectToInspectionPlace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveObjectToInspectionPlace(); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateUpDown) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateUpDown(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateLeftRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateLeftRight(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exectryInspectionAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->tryInspectionAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverseTimeline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReverseTimeline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayTimeline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayTimeline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInspectionObject) \
	{ \
		P_GET_OBJECT(AInspectActor,Z_Param_SetInspectionActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInspectionObject(Z_Param_SetInspectionActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimelineFloatReturn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TimelineFloatReturn(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTimelineFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTimelineFinished(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveObjectToInspectionPlace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveObjectToInspectionPlace(); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInspectObjectComponent(); \
	friend struct Z_Construct_UClass_UInspectObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UInspectObjectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(UInspectObjectComponent)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInspectObjectComponent(); \
	friend struct Z_Construct_UClass_UInspectObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UInspectObjectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(UInspectObjectComponent)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInspectObjectComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInspectObjectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInspectObjectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInspectObjectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInspectObjectComponent(UInspectObjectComponent&&); \
	NO_API UInspectObjectComponent(const UInspectObjectComponent&); \
public:


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInspectObjectComponent(UInspectObjectComponent&&); \
	NO_API UInspectObjectComponent(const UInspectObjectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInspectObjectComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInspectObjectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInspectObjectComponent)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__fCurve() { return STRUCT_OFFSET(UInspectObjectComponent, fCurve); } \
	FORCEINLINE static uint32 __PPO__OwningActor() { return STRUCT_OFFSET(UInspectObjectComponent, OwningActor); }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_12_PROLOG
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_RPC_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_INCLASS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_INCLASS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTINSPECTION_API UClass* StaticClass<class UInspectObjectComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectObjectComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
