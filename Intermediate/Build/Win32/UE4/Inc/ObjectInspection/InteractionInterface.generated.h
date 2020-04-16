// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef OBJECTINSPECTION_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define OBJECTINSPECTION_InteractionInterface_generated_h

#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_SPARSE_DATA
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_RPC_WRAPPERS \
	virtual void InteractWith_Implementation(AActor* InteractingActor) {}; \
	virtual void LeavePlayerRadius_Implementation(AActor* InteractingActor) {}; \
	virtual void EnterPlayerRadius_Implementation(AActor* InteractingActor) {}; \
 \
	DECLARE_FUNCTION(execInteractWith) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InteractingActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractWith_Implementation(Z_Param_InteractingActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeavePlayerRadius) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InteractingActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeavePlayerRadius_Implementation(Z_Param_InteractingActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterPlayerRadius) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InteractingActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterPlayerRadius_Implementation(Z_Param_InteractingActor); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InteractWith_Implementation(AActor* InteractingActor) {}; \
	virtual void LeavePlayerRadius_Implementation(AActor* InteractingActor) {}; \
	virtual void EnterPlayerRadius_Implementation(AActor* InteractingActor) {}; \
 \
	DECLARE_FUNCTION(execInteractWith) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InteractingActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractWith_Implementation(Z_Param_InteractingActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeavePlayerRadius) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InteractingActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeavePlayerRadius_Implementation(Z_Param_InteractingActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterPlayerRadius) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InteractingActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterPlayerRadius_Implementation(Z_Param_InteractingActor); \
		P_NATIVE_END; \
	}


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_EVENT_PARMS \
	struct InteractionInterface_eventEnterPlayerRadius_Parms \
	{ \
		AActor* InteractingActor; \
	}; \
	struct InteractionInterface_eventInteractWith_Parms \
	{ \
		AActor* InteractingActor; \
	}; \
	struct InteractionInterface_eventLeavePlayerRadius_Parms \
	{ \
		AActor* InteractingActor; \
	};


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_CALLBACK_WRAPPERS
#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBJECTINSPECTION_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBJECTINSPECTION_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBJECTINSPECTION_API UInteractionInterface(UInteractionInterface&&); \
	OBJECTINSPECTION_API UInteractionInterface(const UInteractionInterface&); \
public:


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBJECTINSPECTION_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBJECTINSPECTION_API UInteractionInterface(UInteractionInterface&&); \
	OBJECTINSPECTION_API UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBJECTINSPECTION_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ObjectInspection"), OBJECTINSPECTION_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_EnterPlayerRadius(UObject* O, AActor* InteractingActor); \
	static void Execute_InteractWith(UObject* O, AActor* InteractingActor); \
	static void Execute_LeavePlayerRadius(UObject* O, AActor* InteractingActor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_EnterPlayerRadius(UObject* O, AActor* InteractingActor); \
	static void Execute_InteractWith(UObject* O, AActor* InteractingActor); \
	static void Execute_LeavePlayerRadius(UObject* O, AActor* InteractingActor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_10_PROLOG \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_EVENT_PARMS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_RPC_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_SPARSE_DATA \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTINSPECTION_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectInspection_HostProject_Plugins_ObjectInspection_Source_ObjectInspection_Public_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
