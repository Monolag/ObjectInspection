// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectInspection/Public/LightSwitcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSwitcher() {}
// Cross Module References
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_ALightSwitcher_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_ALightSwitcher();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_AInteractableActor();
	UPackage* Z_Construct_UPackage__Script_ObjectInspection();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_ALightSwitcher_Initialize();
	ENGINE_API UClass* Z_Construct_UClass_APointLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void ALightSwitcher::StaticRegisterNativesALightSwitcher()
	{
		UClass* Class = ALightSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &ALightSwitcher::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightSwitcher_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSwitcher_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/LightSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSwitcher_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSwitcher, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSwitcher_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSwitcher_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSwitcher_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSwitcher_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightSwitcher_NoRegister()
	{
		return ALightSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_ALightSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLightWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointLightWorld;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLightWorld_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OffSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoActivate_MetaData[];
#endif
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightSwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightSwitcher_Initialize, "Initialize" }, // 2362543587
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LightSwitcher.h" },
		{ "ModuleRelativePath", "Public/LightSwitcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitcher_Statics::NewProp_PointLightWorld_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/LightSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightSwitcher_Statics::NewProp_PointLightWorld = { "PointLightWorld", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightSwitcher, PointLightWorld), METADATA_PARAMS(Z_Construct_UClass_ALightSwitcher_Statics::NewProp_PointLightWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitcher_Statics::NewProp_PointLightWorld_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitcher_Statics::NewProp_PointLightWorld_Inner = { "PointLightWorld", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APointLight_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitcher_Statics::NewProp_OffSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/LightSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitcher_Statics::NewProp_OffSound = { "OffSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightSwitcher, OffSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightSwitcher_Statics::NewProp_OffSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitcher_Statics::NewProp_OffSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitcher_Statics::NewProp_bAutoActivate_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/LightSwitcher.h" },
	};
#endif
	void Z_Construct_UClass_ALightSwitcher_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((ALightSwitcher*)Obj)->bAutoActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALightSwitcher_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALightSwitcher), &Z_Construct_UClass_ALightSwitcher_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALightSwitcher_Statics::NewProp_bAutoActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitcher_Statics::NewProp_bAutoActivate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightSwitcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitcher_Statics::NewProp_PointLightWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitcher_Statics::NewProp_PointLightWorld_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitcher_Statics::NewProp_OffSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitcher_Statics::NewProp_bAutoActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightSwitcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightSwitcher_Statics::ClassParams = {
		&ALightSwitcher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightSwitcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitcher_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightSwitcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightSwitcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightSwitcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightSwitcher, 153663873);
	template<> OBJECTINSPECTION_API UClass* StaticClass<ALightSwitcher>()
	{
		return ALightSwitcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightSwitcher(Z_Construct_UClass_ALightSwitcher, &ALightSwitcher::StaticClass, TEXT("/Script/ObjectInspection"), TEXT("ALightSwitcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightSwitcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
