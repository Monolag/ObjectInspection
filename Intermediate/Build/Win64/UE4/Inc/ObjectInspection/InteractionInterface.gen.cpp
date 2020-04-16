// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectInspection/Public/InteractionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}
// Cross Module References
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	OBJECTINSPECTION_API UClass* Z_Construct_UClass_UInteractionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ObjectInspection();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInteractionInterface_InteractWith();
	OBJECTINSPECTION_API UFunction* Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius();
// End Cross Module References
	void IInteractionInterface::EnterPlayerRadius(AActor* InteractingActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EnterPlayerRadius instead.");
	}
	void IInteractionInterface::InteractWith(AActor* InteractingActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractWith instead.");
	}
	void IInteractionInterface::LeavePlayerRadius(AActor* InteractingActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LeavePlayerRadius instead.");
	}
	void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
	{
		UClass* Class = UInteractionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterPlayerRadius", &IInteractionInterface::execEnterPlayerRadius },
			{ "InteractWith", &IInteractionInterface::execInteractWith },
			{ "LeavePlayerRadius", &IInteractionInterface::execLeavePlayerRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionInterface_eventEnterPlayerRadius_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::NewProp_InteractingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "EnterPlayerRadius", nullptr, nullptr, sizeof(InteractionInterface_eventEnterPlayerRadius_Parms), Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionInterface_eventInteractWith_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::NewProp_InteractingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "InteractWith", nullptr, nullptr, sizeof(InteractionInterface_eventInteractWith_Parms), Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_InteractWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionInterface_InteractWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionInterface_eventLeavePlayerRadius_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::NewProp_InteractingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "LeavePlayerRadius", nullptr, nullptr, sizeof(InteractionInterface_eventLeavePlayerRadius_Parms), Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
	{
		return UInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectInspection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionInterface_EnterPlayerRadius, "EnterPlayerRadius" }, // 3222755912
		{ &Z_Construct_UFunction_UInteractionInterface_InteractWith, "InteractWith" }, // 1499480917
		{ &Z_Construct_UFunction_UInteractionInterface_LeavePlayerRadius, "LeavePlayerRadius" }, // 2685112186
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
		&UInteractionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionInterface, 1725091898);
	template<> OBJECTINSPECTION_API UClass* StaticClass<UInteractionInterface>()
	{
		return UInteractionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionInterface(Z_Construct_UClass_UInteractionInterface, &UInteractionInterface::StaticClass, TEXT("/Script/ObjectInspection"), TEXT("UInteractionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInterface);
	static FName NAME_UInteractionInterface_EnterPlayerRadius = FName(TEXT("EnterPlayerRadius"));
	void IInteractionInterface::Execute_EnterPlayerRadius(UObject* O, AActor* InteractingActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
		InteractionInterface_eventEnterPlayerRadius_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_EnterPlayerRadius);
		if (Func)
		{
			Parms.InteractingActor=InteractingActor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
		{
			I->EnterPlayerRadius_Implementation(InteractingActor);
		}
	}
	static FName NAME_UInteractionInterface_InteractWith = FName(TEXT("InteractWith"));
	void IInteractionInterface::Execute_InteractWith(UObject* O, AActor* InteractingActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
		InteractionInterface_eventInteractWith_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_InteractWith);
		if (Func)
		{
			Parms.InteractingActor=InteractingActor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
		{
			I->InteractWith_Implementation(InteractingActor);
		}
	}
	static FName NAME_UInteractionInterface_LeavePlayerRadius = FName(TEXT("LeavePlayerRadius"));
	void IInteractionInterface::Execute_LeavePlayerRadius(UObject* O, AActor* InteractingActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
		InteractionInterface_eventLeavePlayerRadius_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_LeavePlayerRadius);
		if (Func)
		{
			Parms.InteractingActor=InteractingActor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
		{
			I->LeavePlayerRadius_Implementation(InteractingActor);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
