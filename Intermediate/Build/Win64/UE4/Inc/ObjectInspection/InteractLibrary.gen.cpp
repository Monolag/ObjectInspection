// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectInspection/Public/InteractLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractLibrary() {}
// Cross Module References
	OBJECTINSPECTION_API UEnum* Z_Construct_UEnum_ObjectInspection_EPlayerState();
	UPackage* Z_Construct_UPackage__Script_ObjectInspection();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UInteractLibrary_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UInteractLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EPlayerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ObjectInspection_EPlayerState, Z_Construct_UPackage__Script_ObjectInspection(), TEXT("EPlayerState"));
		}
		return Singleton;
	}
	template<> OBJECTINSPECTION_API UEnum* StaticEnum<EPlayerState>()
	{
		return EPlayerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerState(EPlayerState_StaticEnum, TEXT("/Script/ObjectInspection"), TEXT("EPlayerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ObjectInspection_EPlayerState_Hash() { return 3773030707U; }
	UEnum* Z_Construct_UEnum_ObjectInspection_EPlayerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ObjectInspection();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerState"), 0, Get_Z_Construct_UEnum_ObjectInspection_EPlayerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerState::None", (int64)EPlayerState::None },
				{ "EPlayerState::Inspecting", (int64)EPlayerState::Inspecting },
				{ "EPlayerState::ChangingAnimation", (int64)EPlayerState::ChangingAnimation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChangingAnimation.Name", "EPlayerState::ChangingAnimation" },
				{ "Inspecting.Name", "EPlayerState::Inspecting" },
				{ "ModuleRelativePath", "Public/InteractLibrary.h" },
				{ "None.Name", "EPlayerState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ObjectInspection,
				nullptr,
				"EPlayerState",
				"EPlayerState",
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
	void UInteractLibrary::StaticRegisterNativesUInteractLibrary()
	{
	}
	UClass* Z_Construct_UClass_UInteractLibrary_NoRegister()
	{
		return UInteractLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInteractLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractLibrary.h" },
		{ "ModuleRelativePath", "Public/InteractLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractLibrary_Statics::ClassParams = {
		&UInteractLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractLibrary, 3900602962);
	template<> OBJECTINSPECTION_API UClass* StaticClass<UInteractLibrary>()
	{
		return UInteractLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractLibrary(Z_Construct_UClass_UInteractLibrary, &UInteractLibrary::StaticClass, TEXT("/Script/ObjectInspection"), TEXT("UInteractLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
