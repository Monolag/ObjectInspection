// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectInspection/Public/BoxWithBallInspection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxWithBallInspection() {}
// Cross Module References
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_ABoxWithBallInspection_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_ABoxWithBallInspection();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_AInspectActor();
	UPackage* Z_Construct_UPackage__Script_ObjectInspection();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_ABoxWithBallInspection_OnTimelineFinished();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void ABoxWithBallInspection::StaticRegisterNativesABoxWithBallInspection()
	{
		UClass* Class = ABoxWithBallInspection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTimelineFinished", &ABoxWithBallInspection::execOnTimelineFinished },
			{ "TimelineFloatReturn", &ABoxWithBallInspection::execTimelineFloatReturn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoxWithBallInspection_OnTimelineFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxWithBallInspection_OnTimelineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxWithBallInspection_OnTimelineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxWithBallInspection, nullptr, "OnTimelineFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxWithBallInspection_OnTimelineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxWithBallInspection_OnTimelineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxWithBallInspection_OnTimelineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxWithBallInspection_OnTimelineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics
	{
		struct BoxWithBallInspection_eventTimelineFloatReturn_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxWithBallInspection_eventTimelineFloatReturn_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxWithBallInspection, nullptr, "TimelineFloatReturn", nullptr, nullptr, sizeof(BoxWithBallInspection_eventTimelineFloatReturn_Parms), Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoxWithBallInspection_NoRegister()
	{
		return ABoxWithBallInspection::StaticClass();
	}
	struct Z_Construct_UClass_ABoxWithBallInspection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInformatonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemInformatonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CupMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CupStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CupStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxWithBallInspection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInspectActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxWithBallInspection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxWithBallInspection_OnTimelineFinished, "OnTimelineFinished" }, // 3657832462
		{ &Z_Construct_UFunction_ABoxWithBallInspection_TimelineFloatReturn, "TimelineFloatReturn" }, // 909174200
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BoxWithBallInspection.h" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_fCurve_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_fCurve = { "fCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, fCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_fCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_fCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_MyTimeline_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Open Cup Timeline\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
		{ "ToolTip", "Open Cup Timeline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_MyTimeline = { "MyTimeline", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, MyTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_MyTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_MyTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemInformatonWidgetClass_MetaData[] = {
		{ "Category", "UMG" },
		{ "Comment", "//World widgets\n" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
		{ "ToolTip", "World widgets" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemInformatonWidgetClass = { "ItemInformatonWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, ItemInformatonWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemInformatonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemInformatonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, BallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupMesh = { "CupMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, CupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallWidget = { "BallWidget", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, BallWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BoxWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//Setup Widgets \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
		{ "ToolTip", "Setup Widgets" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BoxWidget = { "BoxWidget", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, BoxWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BoxWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BoxWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemImage_MetaData[] = {
		{ "Category", "Item Information" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, ItemImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Item Information" },
		{ "Comment", "// Item Information setup\n" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
		{ "ToolTip", "Item Information setup" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, ItemName), METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallStaticMesh_MetaData[] = {
		{ "Category", "Setup Meshes" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallStaticMesh = { "BallStaticMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, BallStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupStaticMesh_MetaData[] = {
		{ "Category", "Setup Meshes" },
		{ "Comment", "//Setup Meshes\n" },
		{ "ModuleRelativePath", "Public/BoxWithBallInspection.h" },
		{ "ToolTip", "Setup Meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupStaticMesh = { "CupStaticMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxWithBallInspection, CupStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxWithBallInspection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_fCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_MyTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemInformatonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BoxWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_BallStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxWithBallInspection_Statics::NewProp_CupStaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxWithBallInspection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxWithBallInspection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxWithBallInspection_Statics::ClassParams = {
		&ABoxWithBallInspection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoxWithBallInspection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxWithBallInspection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxWithBallInspection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxWithBallInspection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxWithBallInspection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxWithBallInspection, 823527133);
	template<> OBJECTINSPECTION_API UClass* StaticClass<ABoxWithBallInspection>()
	{
		return ABoxWithBallInspection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxWithBallInspection(Z_Construct_UClass_ABoxWithBallInspection, &ABoxWithBallInspection::StaticClass, TEXT("/Script/ObjectInspection"), TEXT("ABoxWithBallInspection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxWithBallInspection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
