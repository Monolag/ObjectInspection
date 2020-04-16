// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTINSPECTION_InteractLibrary_generated_h
#error "InteractLibrary.generated.h already included, missing '#pragma once' in InteractLibrary.h"
#endif
#define OBJECTINSPECTION_InteractLibrary_generated_h

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_SPARSE_DATA
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_RPC_WRAPPERS
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractLibrary(); \
	friend struct Z_Construct_UClass_UInteractLibrary_Statics; \
public: \
	DECLARE_CLASS(UInteractLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(UInteractLibrary)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUInteractLibrary(); \
	friend struct Z_Construct_UClass_UInteractLibrary_Statics; \
public: \
	DECLARE_CLASS(UInteractLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(UInteractLibrary)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractLibrary(UInteractLibrary&&); \
	NO_API UInteractLibrary(const UInteractLibrary&); \
public:


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractLibrary(UInteractLibrary&&); \
	NO_API UInteractLibrary(const UInteractLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractLibrary)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_PRIVATE_PROPERTY_OFFSET
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_19_PROLOG
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_RPC_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_INCLASS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_INCLASS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTINSPECTION_API UClass* StaticClass<class UInteractLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractLibrary_h


#define FOREACH_ENUM_EPLAYERSTATE(op) \
	op(EPlayerState::None) \
	op(EPlayerState::Inspecting) \
	op(EPlayerState::ChangingAnimation) 

enum class EPlayerState : uint8;
template<> OBJECTINSPECTION_API UEnum* StaticEnum<EPlayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
