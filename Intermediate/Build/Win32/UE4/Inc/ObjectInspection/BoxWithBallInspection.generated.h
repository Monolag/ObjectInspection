// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTINSPECTION_BoxWithBallInspection_generated_h
#error "BoxWithBallInspection.generated.h already included, missing '#pragma once' in BoxWithBallInspection.h"
#endif
#define OBJECTINSPECTION_BoxWithBallInspection_generated_h

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_SPARSE_DATA
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_RPC_WRAPPERS \
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
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxWithBallInspection(); \
	friend struct Z_Construct_UClass_ABoxWithBallInspection_Statics; \
public: \
	DECLARE_CLASS(ABoxWithBallInspection, AInspectActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(ABoxWithBallInspection)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABoxWithBallInspection(); \
	friend struct Z_Construct_UClass_ABoxWithBallInspection_Statics; \
public: \
	DECLARE_CLASS(ABoxWithBallInspection, AInspectActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(ABoxWithBallInspection)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxWithBallInspection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxWithBallInspection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxWithBallInspection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxWithBallInspection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxWithBallInspection(ABoxWithBallInspection&&); \
	NO_API ABoxWithBallInspection(const ABoxWithBallInspection&); \
public:


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxWithBallInspection(ABoxWithBallInspection&&); \
	NO_API ABoxWithBallInspection(const ABoxWithBallInspection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxWithBallInspection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxWithBallInspection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoxWithBallInspection)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CupStaticMesh() { return STRUCT_OFFSET(ABoxWithBallInspection, CupStaticMesh); } \
	FORCEINLINE static uint32 __PPO__BallStaticMesh() { return STRUCT_OFFSET(ABoxWithBallInspection, BallStaticMesh); } \
	FORCEINLINE static uint32 __PPO__ItemName() { return STRUCT_OFFSET(ABoxWithBallInspection, ItemName); } \
	FORCEINLINE static uint32 __PPO__ItemImage() { return STRUCT_OFFSET(ABoxWithBallInspection, ItemImage); } \
	FORCEINLINE static uint32 __PPO__BoxWidget() { return STRUCT_OFFSET(ABoxWithBallInspection, BoxWidget); } \
	FORCEINLINE static uint32 __PPO__BallWidget() { return STRUCT_OFFSET(ABoxWithBallInspection, BallWidget); } \
	FORCEINLINE static uint32 __PPO__CupMesh() { return STRUCT_OFFSET(ABoxWithBallInspection, CupMesh); } \
	FORCEINLINE static uint32 __PPO__BallMesh() { return STRUCT_OFFSET(ABoxWithBallInspection, BallMesh); } \
	FORCEINLINE static uint32 __PPO__ItemInformatonWidgetClass() { return STRUCT_OFFSET(ABoxWithBallInspection, ItemInformatonWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MyTimeline() { return STRUCT_OFFSET(ABoxWithBallInspection, MyTimeline); } \
	FORCEINLINE static uint32 __PPO__fCurve() { return STRUCT_OFFSET(ABoxWithBallInspection, fCurve); }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_12_PROLOG
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_RPC_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_INCLASS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_INCLASS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTINSPECTION_API UClass* StaticClass<class ABoxWithBallInspection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_BoxWithBallInspection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
