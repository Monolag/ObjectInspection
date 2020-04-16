// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectInspection/Public/InspectObjectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInspectObjectComponent() {}
// Cross Module References
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UInspectObjectComponent_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UInspectObjectComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ObjectInspection();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInspectObjectComponent_MoveObjectToInspectionPlace();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInspectObjectComponent_OnTimelineFinished();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInspectObjectComponent_PlayTimeline();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInspectObjectComponent_ReverseTimeline();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_AInspectActor_NoRegister();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInspectObjectComponent_tryInspectionAction();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_AGrabObjectCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UInspectObjectComponent::StaticRegisterNativesUInspectObjectComponent()
	{
		UClass* Class = UInspectObjectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveObjectToInspectionPlace", &UInspectObjectComponent::execMoveObjectToInspectionPlace },
			{ "OnTimelineFinished", &UInspectObjectComponent::execOnTimelineFinished },
			{ "PlayTimeline", &UInspectObjectComponent::execPlayTimeline },
			{ "ReverseTimeline", &UInspectObjectComponent::execReverseTimeline },
			{ "RotateLeftRight", &UInspectObjectComponent::execRotateLeftRight },
			{ "RotateUpDown", &UInspectObjectComponent::execRotateUpDown },
			{ "SetInspectionObject", &UInspectObjectComponent::execSetInspectionObject },
			{ "TimelineFloatReturn", &UInspectObjectComponent::execTimelineFloatReturn },
			{ "tryInspectionAction", &UInspectObjectComponent::exectryInspectionAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInspectObjectComponent_MoveObjectToInspectionPlace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectObjectComponent_MoveObjectToInspectionPlace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectObjectComponent_MoveObjectToInspectionPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectObjectComponent, nullptr, "MoveObjectToInspectionPlace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectObjectComponent_MoveObjectToInspectionPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_MoveObjectToInspectionPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectObjectComponent_MoveObjectToInspectionPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectObjectComponent_MoveObjectToInspectionPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectObjectComponent_OnTimelineFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectObjectComponent_OnTimelineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectObjectComponent_OnTimelineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectObjectComponent, nullptr, "OnTimelineFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectObjectComponent_OnTimelineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_OnTimelineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectObjectComponent_OnTimelineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectObjectComponent_OnTimelineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectObjectComponent_PlayTimeline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectObjectComponent_PlayTimeline_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Timeline Functions\n" },
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
		{ "ToolTip", "Timeline Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectObjectComponent_PlayTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectObjectComponent, nullptr, "PlayTimeline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectObjectComponent_PlayTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_PlayTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectObjectComponent_PlayTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectObjectComponent_PlayTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectObjectComponent_ReverseTimeline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectObjectComponent_ReverseTimeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectObjectComponent_ReverseTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectObjectComponent, nullptr, "ReverseTimeline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectObjectComponent_ReverseTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_ReverseTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectObjectComponent_ReverseTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectObjectComponent_ReverseTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics
	{
		struct InspectObjectComponent_eventRotateLeftRight_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InspectObjectComponent_eventRotateLeftRight_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectObjectComponent, nullptr, "RotateLeftRight", nullptr, nullptr, sizeof(InspectObjectComponent_eventRotateLeftRight_Parms), Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics
	{
		struct InspectObjectComponent_eventRotateUpDown_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InspectObjectComponent_eventRotateUpDown_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectObjectComponent, nullptr, "RotateUpDown", nullptr, nullptr, sizeof(InspectObjectComponent_eventRotateUpDown_Parms), Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics
	{
		struct InspectObjectComponent_eventSetInspectionObject_Parms
		{
			AInspectActor* SetInspectionActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SetInspectionActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::NewProp_SetInspectionActor = { "SetInspectionActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InspectObjectComponent_eventSetInspectionObject_Parms, SetInspectionActor), Z_Construct_UClass_AInspectActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::NewProp_SetInspectionActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectObjectComponent, nullptr, "SetInspectionObject", nullptr, nullptr, sizeof(InspectObjectComponent_eventSetInspectionObject_Parms), Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics
	{
		struct InspectObjectComponent_eventTimelineFloatReturn_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InspectObjectComponent_eventTimelineFloatReturn_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectObjectComponent, nullptr, "TimelineFloatReturn", nullptr, nullptr, sizeof(InspectObjectComponent_eventTimelineFloatReturn_Parms), Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInspectObjectComponent_tryInspectionAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInspectObjectComponent_tryInspectionAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInspectObjectComponent_tryInspectionAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInspectObjectComponent, nullptr, "tryInspectionAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInspectObjectComponent_tryInspectionAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInspectObjectComponent_tryInspectionAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInspectObjectComponent_tryInspectionAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInspectObjectComponent_tryInspectionAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInspectObjectComponent_NoRegister()
	{
		return UInspectObjectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInspectObjectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInspectObjectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInspectObjectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInspectObjectComponent_MoveObjectToInspectionPlace, "MoveObjectToInspectionPlace" }, // 617752231
		{ &Z_Construct_UFunction_UInspectObjectComponent_OnTimelineFinished, "OnTimelineFinished" }, // 1131688049
		{ &Z_Construct_UFunction_UInspectObjectComponent_PlayTimeline, "PlayTimeline" }, // 1476047097
		{ &Z_Construct_UFunction_UInspectObjectComponent_ReverseTimeline, "ReverseTimeline" }, // 3340186812
		{ &Z_Construct_UFunction_UInspectObjectComponent_RotateLeftRight, "RotateLeftRight" }, // 932721988
		{ &Z_Construct_UFunction_UInspectObjectComponent_RotateUpDown, "RotateUpDown" }, // 2667902023
		{ &Z_Construct_UFunction_UInspectObjectComponent_SetInspectionObject, "SetInspectionObject" }, // 1609327490
		{ &Z_Construct_UFunction_UInspectObjectComponent_TimelineFloatReturn, "TimelineFloatReturn" }, // 489975307
		{ &Z_Construct_UFunction_UInspectObjectComponent_tryInspectionAction, "tryInspectionAction" }, // 1971109657
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectObjectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InspectObjectComponent.h" },
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectObjectComponent, OwningActor), Z_Construct_UClass_AGrabObjectCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_fCurve_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/InspectObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_fCurve = { "fCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectObjectComponent, fCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_fCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_fCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInspectObjectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_OwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectObjectComponent_Statics::NewProp_fCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInspectObjectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInspectObjectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInspectObjectComponent_Statics::ClassParams = {
		&UInspectObjectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInspectObjectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInspectObjectComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInspectObjectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectObjectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInspectObjectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInspectObjectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInspectObjectComponent, 1676209384);
	template<> OBJECTINSPECTION_API UClass* StaticClass<UInspectObjectComponent>()
	{
		return UInspectObjectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInspectObjectComponent(Z_Construct_UClass_UInspectObjectComponent, &UInspectObjectComponent::StaticClass, TEXT("/Script/ObjectInspection"), TEXT("UInspectObjectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInspectObjectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
