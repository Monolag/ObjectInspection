// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTINSPECTION_InteractableActor_generated_h
#error "InteractableActor.generated.h already included, missing '#pragma once' in InteractableActor.h"
#endif
#define OBJECTINSPECTION_InteractableActor_generated_h

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_SPARSE_DATA
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_RPC_WRAPPERS
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableActor(); \
	friend struct Z_Construct_UClass_AInteractableActor_Statics; \
public: \
	DECLARE_CLASS(AInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(AInteractableActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableActor*>(this); }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableActor(); \
	friend struct Z_Construct_UClass_AInteractableActor_Statics; \
public: \
	DECLARE_CLASS(AInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(AInteractableActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableActor*>(this); }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableActor(AInteractableActor&&); \
	NO_API AInteractableActor(const AInteractableActor&); \
public:


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableActor(AInteractableActor&&); \
	NO_API AInteractableActor(const AInteractableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableActor)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__itemMesh() { return STRUCT_OFFSET(AInteractableActor, itemMesh); } \
	FORCEINLINE static uint32 __PPO__ItemMeshComp() { return STRUCT_OFFSET(AInteractableActor, ItemMeshComp); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AInteractableActor, Root); } \
	FORCEINLINE static uint32 __PPO__InteractSound() { return STRUCT_OFFSET(AInteractableActor, InteractSound); }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_12_PROLOG
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_RPC_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_INCLASS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_INCLASS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTINSPECTION_API UClass* StaticClass<class AInteractableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
