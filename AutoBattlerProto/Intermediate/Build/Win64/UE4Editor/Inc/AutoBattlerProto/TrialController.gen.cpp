// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/TrialController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrialController() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ATrialController_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ATrialController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ATrialController::StaticRegisterNativesATrialController()
	{
	}
	UClass* Z_Construct_UClass_ATrialController_NoRegister()
	{
		return ATrialController::StaticClass();
	}
	struct Z_Construct_UClass_ATrialController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DraggedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DraggedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastActiveCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastActiveCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrialController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrialController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TrialController.h" },
		{ "ModuleRelativePath", "TrialController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrialController_Statics::NewProp_DragTimer_MetaData[] = {
		{ "ModuleRelativePath", "TrialController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrialController_Statics::NewProp_DragTimer = { "DragTimer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrialController, DragTimer), METADATA_PARAMS(Z_Construct_UClass_ATrialController_Statics::NewProp_DragTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrialController_Statics::NewProp_DragTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrialController_Statics::NewProp_DraggedActor_MetaData[] = {
		{ "ModuleRelativePath", "TrialController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrialController_Statics::NewProp_DraggedActor = { "DraggedActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrialController, DraggedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrialController_Statics::NewProp_DraggedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrialController_Statics::NewProp_DraggedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrialController_Statics::NewProp_LastActiveCharacter_MetaData[] = {
		{ "ModuleRelativePath", "TrialController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrialController_Statics::NewProp_LastActiveCharacter = { "LastActiveCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrialController, LastActiveCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrialController_Statics::NewProp_LastActiveCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrialController_Statics::NewProp_LastActiveCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrialController_Statics::NewProp_ActiveCharacter_MetaData[] = {
		{ "ModuleRelativePath", "TrialController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrialController_Statics::NewProp_ActiveCharacter = { "ActiveCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrialController, ActiveCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrialController_Statics::NewProp_ActiveCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrialController_Statics::NewProp_ActiveCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrialController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrialController_Statics::NewProp_DragTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrialController_Statics::NewProp_DraggedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrialController_Statics::NewProp_LastActiveCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrialController_Statics::NewProp_ActiveCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrialController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrialController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrialController_Statics::ClassParams = {
		&ATrialController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATrialController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrialController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATrialController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrialController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrialController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrialController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrialController, 2845103965);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<ATrialController>()
	{
		return ATrialController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrialController(Z_Construct_UClass_ATrialController, &ATrialController::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("ATrialController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrialController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
