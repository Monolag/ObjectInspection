// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTINSPECTION_GrabObjectCharacter_generated_h
#error "GrabObjectCharacter.generated.h already included, missing '#pragma once' in GrabObjectCharacter.h"
#endif
#define OBJECTINSPECTION_GrabObjectCharacter_generated_h

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_SPARSE_DATA
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exectryToInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->tryToInteract(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPause(); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exectryToInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->tryToInteract(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPause(); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrabObjectCharacter(); \
	friend struct Z_Construct_UClass_AGrabObjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGrabObjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(AGrabObjectCharacter)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGrabObjectCharacter(); \
	friend struct Z_Construct_UClass_AGrabObjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGrabObjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(AGrabObjectCharacter)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrabObjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrabObjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrabObjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrabObjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrabObjectCharacter(AGrabObjectCharacter&&); \
	NO_API AGrabObjectCharacter(const AGrabObjectCharacter&); \
public:


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrabObjectCharacter(AGrabObjectCharacter&&); \
	NO_API AGrabObjectCharacter(const AGrabObjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrabObjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrabObjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrabObjectCharacter)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InspectionScene() { return STRUCT_OFFSET(AGrabObjectCharacter, InspectionScene); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGrabObjectCharacter, FirstPersonCameraComponent); }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_13_PROLOG
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_RPC_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_INCLASS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_INCLASS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTINSPECTION_API UClass* StaticClass<class AGrabObjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_GrabObjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
