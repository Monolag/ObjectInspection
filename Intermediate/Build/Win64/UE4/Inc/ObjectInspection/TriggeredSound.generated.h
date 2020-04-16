// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef OBJECTINSPECTION_TriggeredSound_generated_h
#error "TriggeredSound.generated.h already included, missing '#pragma once' in TriggeredSound.h"
#endif
#define OBJECTINSPECTION_TriggeredSound_generated_h

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_SPARSE_DATA
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggeredSound(); \
	friend struct Z_Construct_UClass_ATriggeredSound_Statics; \
public: \
	DECLARE_CLASS(ATriggeredSound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(ATriggeredSound)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATriggeredSound(); \
	friend struct Z_Construct_UClass_ATriggeredSound_Statics; \
public: \
	DECLARE_CLASS(ATriggeredSound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(ATriggeredSound)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggeredSound(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggeredSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggeredSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggeredSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggeredSound(ATriggeredSound&&); \
	NO_API ATriggeredSound(const ATriggeredSound&); \
public:


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggeredSound(ATriggeredSound&&); \
	NO_API ATriggeredSound(const ATriggeredSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggeredSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggeredSound); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggeredSound)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxCollisionComponent() { return STRUCT_OFFSET(ATriggeredSound, BoxCollisionComponent); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(ATriggeredSound, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__Sound() { return STRUCT_OFFSET(ATriggeredSound, Sound); } \
	FORCEINLINE static uint32 __PPO__DoOnceResetDelay() { return STRUCT_OFFSET(ATriggeredSound, DoOnceResetDelay); }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_9_PROLOG
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_RPC_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_INCLASS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_INCLASS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTINSPECTION_API UClass* StaticClass<class ATriggeredSound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_TriggeredSound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
