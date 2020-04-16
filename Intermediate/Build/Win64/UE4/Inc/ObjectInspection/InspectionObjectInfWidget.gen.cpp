// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectInspection/Public/InspectionObjectInfWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInspectionObjectInfWidget() {}
// Cross Module References
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UInspectionObjectInfWidget_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UInspectionObjectInfWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ObjectInspection();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UInspectionObjectInfWidget::StaticRegisterNativesUInspectionObjectInfWidget()
	{
	}
	UClass* Z_Construct_UClass_UInspectionObjectInfWidget_NoRegister()
	{
		return UInspectionObjectInfWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInspectionObjectInfWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInspectionObjectInfWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionObjectInfWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InspectionObjectInfWidget.h" },
		{ "ModuleRelativePath", "Public/InspectionObjectInfWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemImage_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/InspectionObjectInfWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionObjectInfWidget, ItemImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/InspectionObjectInfWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInspectionObjectInfWidget, ItemName), METADATA_PARAMS(Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInspectionObjectInfWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInspectionObjectInfWidget_Statics::NewProp_ItemName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInspectionObjectInfWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInspectionObjectInfWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInspectionObjectInfWidget_Statics::ClassParams = {
		&UInspectionObjectInfWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInspectionObjectInfWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionObjectInfWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInspectionObjectInfWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInspectionObjectInfWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInspectionObjectInfWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInspectionObjectInfWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInspectionObjectInfWidget, 1866355008);
	template<> OBJECTINSPECTION_API UClass* StaticClass<UInspectionObjectInfWidget>()
	{
		return UInspectionObjectInfWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInspectionObjectInfWidget(Z_Construct_UClass_UInspectionObjectInfWidget, &UInspectionObjectInfWidget::StaticClass, TEXT("/Script/ObjectInspection"), TEXT("UInspectionObjectInfWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInspectionObjectInfWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
