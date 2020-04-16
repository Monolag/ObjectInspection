// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectInspection/Public/InteractableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableActor() {}
// Cross Module References
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_AInteractableActor_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_AInteractableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObjectInspection();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
// End Cross Module References
	void AInteractableActor::StaticRegisterNativesAInteractableActor()
	{
	}
	UClass* Z_Construct_UClass_AInteractableActor_NoRegister()
	{
		return AInteractableActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[];
#endif
		static void NewProp_Locked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Locked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_itemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InteractableActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::NewProp_Locked_MetaData[] = {
		{ "Category", "CodeVariable" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
	void Z_Construct_UClass_AInteractableActor_Statics::NewProp_Locked_SetBit(void* Obj)
	{
		((AInteractableActor*)Obj)->Locked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractableActor), &Z_Construct_UClass_AInteractableActor_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::NewProp_Locked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::NewProp_Locked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractSound = { "InteractSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableActor, InteractSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::NewProp_ItemMeshComp_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "// Casual for interactable item components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
		{ "ToolTip", "Casual for interactable item components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_ItemMeshComp = { "ItemMeshComp", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableActor, ItemMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::NewProp_ItemMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::NewProp_ItemMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::NewProp_itemMesh_MetaData[] = {
		{ "Category", "Setup Meshes" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_itemMesh = { "itemMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableActor, itemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::NewProp_itemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::NewProp_itemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractWidget_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractWidget = { "InteractWidget", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableActor, InteractWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_Locked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_ItemMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_itemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractWidget,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractableActor, IInteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableActor_Statics::ClassParams = {
		&AInteractableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableActor, 1530772742);
	template<> OBJECTINSPECTION_API UClass* StaticClass<AInteractableActor>()
	{
		return AInteractableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableActor(Z_Construct_UClass_AInteractableActor, &AInteractableActor::StaticClass, TEXT("/Script/ObjectInspection"), TEXT("AInteractableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
