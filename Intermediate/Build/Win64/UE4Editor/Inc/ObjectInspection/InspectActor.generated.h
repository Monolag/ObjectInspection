// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
enum class EItemDirection : uint8;
#ifdef OBJECTINSPECTION_InspectActor_generated_h
#error "InspectActor.generated.h already included, missing '#pragma once' in InspectActor.h"
#endif
#define OBJECTINSPECTION_InspectActor_generated_h

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpecialRotations_Statics; \
	OBJECTINSPECTION_API static class UScriptStruct* StaticStruct();


template<> OBJECTINSPECTION_API UScriptStruct* StaticStruct<struct FSpecialRotations>();

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_SPARSE_DATA
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcheckRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->checkRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableCreatedWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableCreatedWidgets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCurrentDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnCurrentDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMouseMove) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_mouseLockation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMouseMove(Z_Param_mouseLockation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnClickEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClickEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnClickStart) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_mouseLockation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClickStart(Z_Param_mouseLockation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNeededDirection) \
	{ \
		P_GET_ENUM(EItemDirection,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnNeededDirection(EItemDirection(Z_Param_Direction)); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcheckRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->checkRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableCreatedWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableCreatedWidgets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCurrentDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnCurrentDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMouseMove) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_mouseLockation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMouseMove(Z_Param_mouseLockation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnClickEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClickEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnClickStart) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_mouseLockation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClickStart(Z_Param_mouseLockation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNeededDirection) \
	{ \
		P_GET_ENUM(EItemDirection,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnNeededDirection(EItemDirection(Z_Param_Direction)); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_EVENT_PARMS
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_CALLBACK_WRAPPERS
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInspectActor(); \
	friend struct Z_Construct_UClass_AInspectActor_Statics; \
public: \
	DECLARE_CLASS(AInspectActor, AInteractableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(AInspectActor)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAInspectActor(); \
	friend struct Z_Construct_UClass_AInspectActor_Statics; \
public: \
	DECLARE_CLASS(AInspectActor, AInteractableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectInspection"), NO_API) \
	DECLARE_SERIALIZER(AInspectActor)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInspectActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInspectActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInspectActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInspectActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInspectActor(AInspectActor&&); \
	NO_API AInspectActor(const AInspectActor&); \
public:


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInspectActor() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInspectActor(AInspectActor&&); \
	NO_API AInspectActor(const AInspectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInspectActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInspectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInspectActor)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__stepIndex() { return STRUCT_OFFSET(AInspectActor, stepIndex); } \
	FORCEINLINE static uint32 __PPO__onPosition() { return STRUCT_OFFSET(AInspectActor, onPosition); } \
	FORCEINLINE static uint32 __PPO__InteractActor() { return STRUCT_OFFSET(AInspectActor, InteractActor); } \
	FORCEINLINE static uint32 __PPO__NeededDirection() { return STRUCT_OFFSET(AInspectActor, NeededDirection); } \
	FORCEINLINE static uint32 __PPO__permissionRotationCoefficient() { return STRUCT_OFFSET(AInspectActor, permissionRotationCoefficient); } \
	FORCEINLINE static uint32 __PPO__InspectionWidgetClass() { return STRUCT_OFFSET(AInspectActor, InspectionWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MoveVOClass() { return STRUCT_OFFSET(AInspectActor, MoveVOClass); } \
	FORCEINLINE static uint32 __PPO__PutBackSound() { return STRUCT_OFFSET(AInspectActor, PutBackSound); } \
	FORCEINLINE static uint32 __PPO__bRotationEnabled() { return STRUCT_OFFSET(AInspectActor, bRotationEnabled); } \
	FORCEINLINE static uint32 __PPO__StartRotation() { return STRUCT_OFFSET(AInspectActor, StartRotation); }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_30_PROLOG \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_EVENT_PARMS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_RPC_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_CALLBACK_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_INCLASS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_PRIVATE_PROPERTY_OFFSET \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_CALLBACK_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_INCLASS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTINSPECTION_API UClass* StaticClass<class AInspectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InspectActor_h


#define FOREACH_ENUM_EITEMDIRECTION(op) \
	op(EItemDirection::None) \
	op(EItemDirection::Forward) \
	op(EItemDirection::Backward) \
	op(EItemDirection::Right) \
	op(EItemDirection::Left) \
	op(EItemDirection::Up) \
	op(EItemDirection::Down) 

enum class EItemDirection : uint8;
template<> OBJECTINSPECTION_API UEnum* StaticEnum<EItemDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
