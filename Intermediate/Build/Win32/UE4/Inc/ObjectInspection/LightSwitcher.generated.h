// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTINSPECTION_LightSwitcher_generated_h
#error "LightSwitcher.generated.h already included, missing '#pragma once' in LightSwitcher.h"
#endif
#define OBJECTINSPECTION_LightSwitcher_generated_h

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_SPARSE_DATA
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitcher(); \
	friend struct Z_Construct_UClass_ALightSwitcher_Statics; \
public: \
	DECLARE_CLASS(ALightSwitcher, AInteractableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitcher)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitcher(); \
	friend struct Z_Construct_UClass_ALightSwitcher_Statics; \
public: \
	DECLARE_CLASS(ALightSwitcher, AInteractableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitcher)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitcher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitcher(ALightSwitcher&&); \
	NO_API ALightSwitcher(const ALightSwitcher&); \
public:


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitcher(ALightSwitcher&&); \
	NO_API ALightSwitcher(const ALightSwitcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitcher)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_PRIVATE_PROPERTY_OFFSET
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_13_PROLOG
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_RPC_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_INCLASS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_INCLASS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTINSPECTION_API UClass* StaticClass<class ALightSwitcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_LightSwitcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
