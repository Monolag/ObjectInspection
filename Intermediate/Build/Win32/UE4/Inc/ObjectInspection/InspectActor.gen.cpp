// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectInspection/Public/InspectActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInspectActor() {}
// Cross Module References
	OBJECTINSPECTION_API UEnum* Z_Construct_UEnum_ObjectInspection_EItemDirection();
	UPackage* Z_Construct_UPackage__Script_ObjectInspection();
	OBJECTINSPECTION_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialRotations();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_AInspectActor_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_AInspectActor();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_AInteractableActor();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_checkRotation();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_DisableCreatedWidgets();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_InteractionEvent();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_InteractToActor();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_OnClickEnd();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_OnClickStart();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_OnCurrentDirection();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_OnMouseMove();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_OnNeededDirection();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_RemoveWidgets();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_AInspectActor_TestRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EItemDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ObjectInspection_EItemDirection, Z_Construct_UPackage__Script_ObjectInspection(), TEXT("EItemDirection"));
		}
		return Singleton;
	}
	template<> OBJECTINSPECTION_API UEnum* StaticEnum<EItemDirection>()
	{
		return EItemDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemDirection(EItemDirection_StaticEnum, TEXT("/Script/ObjectInspection"), TEXT("EItemDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ObjectInspection_EItemDirection_Hash() { return 2207270273U; }
	UEnum* Z_Construct_UEnum_ObjectInspection_EItemDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ObjectInspection();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemDirection"), 0, Get_Z_Construct_UEnum_ObjectInspection_EItemDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemDirection::None", (int64)EItemDirection::None },
				{ "EItemDirection::Forward", (int64)EItemDirection::Forward },
				{ "EItemDirection::Backward", (int64)EItemDirection::Backward },
				{ "EItemDirection::Right", (int64)EItemDirection::Right },
				{ "EItemDirection::Left", (int64)EItemDirection::Left },
				{ "EItemDirection::Up", (int64)EItemDirection::Up },
				{ "EItemDirection::Down", (int64)EItemDirection::Down },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Backward.Name", "EItemDirection::Backward" },
				{ "BlueprintType", "true" },
				{ "Down.Name", "EItemDirection::Down" },
				{ "Forward.Name", "EItemDirection::Forward" },
				{ "Left.Name", "EItemDirection::Left" },
				{ "ModuleRelativePath", "Public/InspectActor.h" },
				{ "None.Name", "EItemDirection::None" },
				{ "Right.Name", "EItemDirection::Right" },
				{ "Up.Name", "EItemDirection::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ObjectInspection,
				nullptr,
				"EItemDirection",
				"EItemDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSpecialRotations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OBJECTINSPECTION_API uint32 Get_Z_Construct_UScriptStruct_FSpecialRotations_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialRotations, Z_Construct_UPackage__Script_ObjectInspection(), TEXT("SpecialRotations"), sizeof(FSpecialRotations), Get_Z_Construct_UScriptStruct_FSpecialRotations_Hash());
	}
	return Singleton;
}
template<> OBJECTINSPECTION_API UScriptStruct* StaticStruct<FSpecialRotations>()
{
	return FSpecialRotations::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialRotations(FSpecialRotations::StaticStruct, TEXT("/Script/ObjectInspection"), TEXT("SpecialRotations"), false, nullptr, nullptr);
static struct FScriptStruct_ObjectInspection_StaticRegisterNativesFSpecialRotations
{
	FScriptStruct_ObjectInspection_StaticRegisterNativesFSpecialRotations()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialRotations")),new UScriptStruct::TCppStructOps<FSpecialRotations>);
	}
} ScriptStruct_ObjectInspection_StaticRegisterNativesFSpecialRotations;
	struct Z_Construct_UScriptStruct_FSpecialRotations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialRotations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialRotations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialRotations>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialRotations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
		nullptr,
		&NewStructOps,
		"SpecialRotations",
		sizeof(FSpecialRotations),
		alignof(FSpecialRotations),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialRotations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialRotations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialRotations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialRotations_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ObjectInspection();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialRotations"), sizeof(FSpecialRotations), Get_Z_Construct_UScriptStruct_FSpecialRotations_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialRotations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialRotations_Hash() { return 2845990684U; }
	static FName NAME_AInspectActor_InteractToActor = FName(TEXT("InteractToActor"));
	void AInspectActor::InteractToActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInspectActor_InteractToActor),NULL);
	}
	static FName NAME_AInspectActor_RemoveWidgets = FName(TEXT("RemoveWidgets"));
	void AInspectActor::RemoveWidgets()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInspectActor_RemoveWidgets),NULL);
	}
	static FName NAME_AInspectActor_TestRotation = FName(TEXT("TestRotation"));
	void AInspectActor::TestRotation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInspectActor_TestRotation),NULL);
	}
	void AInspectActor::StaticRegisterNativesAInspectActor()
	{
		UClass* Class = AInspectActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "checkRotation", &AInspectActor::execcheckRotation },
			{ "DisableCreatedWidgets", &AInspectActor::execDisableCreatedWidgets },
			{ "InteractionEvent", &AInspectActor::execInteractionEvent },
			{ "OnClickEnd", &AInspectActor::execOnClickEnd },
			{ "OnClickStart", &AInspectActor::execOnClickStart },
			{ "OnCurrentDirection", &AInspectActor::execOnCurrentDirection },
			{ "OnMouseMove", &AInspectActor::execOnMouseMove },
			{ "OnNeededDirection", &AInspectActor::execOnNeededDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInspectActor_checkRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_checkRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_checkRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "checkRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_checkRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_checkRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_checkRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_checkRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_DisableCreatedWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_DisableCreatedWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_DisableCreatedWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "DisableCreatedWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_DisableCreatedWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_DisableCreatedWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_DisableCreatedWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_DisableCreatedWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_InteractionEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_InteractionEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_InteractionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "InteractionEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_InteractionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_InteractionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_InteractionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_InteractionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_InteractToActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_InteractToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_InteractToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "InteractToActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_InteractToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_InteractToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_InteractToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_InteractToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_OnClickEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_OnClickEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_OnClickEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "OnClickEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_OnClickEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_OnClickEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_OnClickEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_OnClickEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_OnClickStart_Statics
	{
		struct InspectActor_eventOnClickStart_Parms
		{
			FVector2D mouseLockation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseLockation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::NewProp_mouseLockation = { "mouseLockation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InspectActor_eventOnClickStart_Parms, mouseLockation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::NewProp_mouseLockation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "OnClickStart", nullptr, nullptr, sizeof(InspectActor_eventOnClickStart_Parms), Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_OnClickStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_OnClickStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics
	{
		struct InspectActor_eventOnCurrentDirection_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InspectActor_eventOnCurrentDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InspectActor_eventOnCurrentDirection_Parms), &Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "OnCurrentDirection", nullptr, nullptr, sizeof(InspectActor_eventOnCurrentDirection_Parms), Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_OnCurrentDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_OnCurrentDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics
	{
		struct InspectActor_eventOnMouseMove_Parms
		{
			FVector2D mouseLockation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseLockation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::NewProp_mouseLockation = { "mouseLockation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InspectActor_eventOnMouseMove_Parms, mouseLockation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::NewProp_mouseLockation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "OnMouseMove", nullptr, nullptr, sizeof(InspectActor_eventOnMouseMove_Parms), Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_OnMouseMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_OnMouseMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics
	{
		struct InspectActor_eventOnNeededDirection_Parms
		{
			EItemDirection Direction;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InspectActor_eventOnNeededDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InspectActor_eventOnNeededDirection_Parms), &Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InspectActor_eventOnNeededDirection_Parms, Direction), Z_Construct_UEnum_ObjectInspection_EItemDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::NewProp_Direction_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "OnNeededDirection", nullptr, nullptr, sizeof(InspectActor_eventOnNeededDirection_Parms), Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_OnNeededDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_OnNeededDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_RemoveWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_RemoveWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_RemoveWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "RemoveWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_RemoveWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_RemoveWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_RemoveWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_RemoveWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInspectActor_TestRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInspectActor_TestRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInspectActor_TestRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInspectActor, nullptr, "TestRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInspectActor_TestRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInspectActor_TestRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInspectActor_TestRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInspectActor_TestRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInspectActor_NoRegister()
	{
		return AInspectActor::StaticClass();
	}
	struct Z_Construct_UClass_AInspectActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartObjectRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartObjectRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddViewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddViewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotationEnabled_MetaData[];
#endif
		static void NewProp_bRotationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotationEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PutBackSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PutBackSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveVOClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MoveVOClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectionWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InspectionWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_permissionRotationCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_permissionRotationCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeededDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NeededDirection;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NeededDirection_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NeededDirection_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onPosition_MetaData[];
#endif
		static void NewProp_onPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_onPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stepIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_stepIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInspectActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInspectActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInspectActor_checkRotation, "checkRotation" }, // 1433277799
		{ &Z_Construct_UFunction_AInspectActor_DisableCreatedWidgets, "DisableCreatedWidgets" }, // 3191441814
		{ &Z_Construct_UFunction_AInspectActor_InteractionEvent, "InteractionEvent" }, // 64324546
		{ &Z_Construct_UFunction_AInspectActor_InteractToActor, "InteractToActor" }, // 1784708122
		{ &Z_Construct_UFunction_AInspectActor_OnClickEnd, "OnClickEnd" }, // 56980022
		{ &Z_Construct_UFunction_AInspectActor_OnClickStart, "OnClickStart" }, // 310074029
		{ &Z_Construct_UFunction_AInspectActor_OnCurrentDirection, "OnCurrentDirection" }, // 784105694
		{ &Z_Construct_UFunction_AInspectActor_OnMouseMove, "OnMouseMove" }, // 2689240919
		{ &Z_Construct_UFunction_AInspectActor_OnNeededDirection, "OnNeededDirection" }, // 2268055890
		{ &Z_Construct_UFunction_AInspectActor_RemoveWidgets, "RemoveWidgets" }, // 2672530578
		{ &Z_Construct_UFunction_AInspectActor_TestRotation, "TestRotation" }, // 2368900328
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InspectActor.h" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_StartObjectRotation_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_StartObjectRotation = { "StartObjectRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, StartObjectRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_StartObjectRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_StartObjectRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_AddViewLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_AddViewLocation = { "AddViewLocation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, AddViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_AddViewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_AddViewLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_StartRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, StartRotation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_StartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_StartRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_bRotationEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	void Z_Construct_UClass_AInspectActor_Statics::NewProp_bRotationEnabled_SetBit(void* Obj)
	{
		((AInspectActor*)Obj)->bRotationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_bRotationEnabled = { "bRotationEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInspectActor), &Z_Construct_UClass_AInspectActor_Statics::NewProp_bRotationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_bRotationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_bRotationEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_PutBackSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_PutBackSound = { "PutBackSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, PutBackSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_PutBackSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_PutBackSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_MoveVOClass_MetaData[] = {
		{ "Category", "UMG" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_MoveVOClass = { "MoveVOClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, MoveVOClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_MoveVOClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_MoveVOClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_InspectionWidgetClass_MetaData[] = {
		{ "Category", "UMG" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_InspectionWidgetClass = { "InspectionWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, InspectionWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_InspectionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_InspectionWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_permissionRotationCoefficient_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_permissionRotationCoefficient = { "permissionRotationCoefficient", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, permissionRotationCoefficient), METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_permissionRotationCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_permissionRotationCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_NeededDirection_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Check if item is rotated correctly to interact with\n" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
		{ "ToolTip", "Check if item is rotated correctly to interact with" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_NeededDirection = { "NeededDirection", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, NeededDirection), METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_NeededDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_NeededDirection_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_NeededDirection_Inner = { "NeededDirection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ObjectInspection_EItemDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_NeededDirection_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_InteractActor_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_InteractActor = { "InteractActor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, InteractActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_InteractActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_InteractActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_onPosition_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	void Z_Construct_UClass_AInspectActor_Statics::NewProp_onPosition_SetBit(void* Obj)
	{
		((AInspectActor*)Obj)->onPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_onPosition = { "onPosition", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInspectActor), &Z_Construct_UClass_AInspectActor_Statics::NewProp_onPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_onPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_onPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInspectActor_Statics::NewProp_stepIndex_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/InspectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AInspectActor_Statics::NewProp_stepIndex = { "stepIndex", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInspectActor, stepIndex), METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::NewProp_stepIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::NewProp_stepIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInspectActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_StartObjectRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_AddViewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_StartRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_bRotationEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_PutBackSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_MoveVOClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_InspectionWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_permissionRotationCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_NeededDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_NeededDirection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_NeededDirection_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_InteractActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_onPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInspectActor_Statics::NewProp_stepIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInspectActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInspectActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInspectActor_Statics::ClassParams = {
		&AInspectActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInspectActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInspectActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInspectActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInspectActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInspectActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInspectActor, 3485583769);
	template<> OBJECTINSPECTION_API UClass* StaticClass<AInspectActor>()
	{
		return AInspectActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInspectActor(Z_Construct_UClass_AInspectActor, &AInspectActor::StaticClass, TEXT("/Script/ObjectInspection"), TEXT("AInspectActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInspectActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
