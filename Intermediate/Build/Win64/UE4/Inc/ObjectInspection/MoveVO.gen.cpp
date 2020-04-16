// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectInspection/Widgets/MoveVO.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveVO() {}
// Cross Module References
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UMoveVO_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UMoveVO();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ObjectInspection();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMoveVO::StaticRegisterNativesUMoveVO()
	{
	}
	UClass* Z_Construct_UClass_UMoveVO_NoRegister()
	{
		return UMoveVO::StaticClass();
	}
	struct Z_Construct_UClass_UMoveVO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InspectActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveVO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveVO_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/MoveVO.h" },
		{ "ModuleRelativePath", "Widgets/MoveVO.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveVO_Statics::NewProp_InspectActor_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Widgets/MoveVO.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoveVO_Statics::NewProp_InspectActor = { "InspectActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoveVO, InspectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoveVO_Statics::NewProp_InspectActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveVO_Statics::NewProp_InspectActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveVO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveVO_Statics::NewProp_InspectActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveVO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveVO>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveVO_Statics::ClassParams = {
		&UMoveVO::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoveVO_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoveVO_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoveVO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveVO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveVO()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveVO_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveVO, 2309790913);
	template<> OBJECTINSPECTION_API UClass* StaticClass<UMoveVO>()
	{
		return UMoveVO::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveVO(Z_Construct_UClass_UMoveVO, &UMoveVO::StaticClass, TEXT("/Script/ObjectInspection"), TEXT("UMoveVO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveVO);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
