// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/DragDrop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragDrop() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UDragDrop_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UDragDrop();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UDragDrop::StaticRegisterNativesUDragDrop()
	{
	}
	UClass* Z_Construct_UClass_UDragDrop_NoRegister()
	{
		return UDragDrop::StaticClass();
	}
	struct Z_Construct_UClass_UDragDrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragDrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDrop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DragDrop.h" },
		{ "ModuleRelativePath", "DragDrop.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDrop_Statics::NewProp_DragOffset_MetaData[] = {
		{ "Category", "DragDrop" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "DragDrop.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDragDrop_Statics::NewProp_DragOffset = { "DragOffset", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragDrop, DragOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDragDrop_Statics::NewProp_DragOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDrop_Statics::NewProp_DragOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDrop_Statics::NewProp_WidgetReference_MetaData[] = {
		{ "Category", "DragDrop" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "DragDrop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragDrop_Statics::NewProp_WidgetReference = { "WidgetReference", nullptr, (EPropertyFlags)0x001100000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragDrop, WidgetReference), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragDrop_Statics::NewProp_WidgetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDrop_Statics::NewProp_WidgetReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDrop_Statics::NewProp_DragOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDrop_Statics::NewProp_WidgetReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragDrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragDrop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragDrop_Statics::ClassParams = {
		&UDragDrop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDragDrop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragDrop_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragDrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragDrop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragDrop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragDrop, 1211340352);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<UDragDrop>()
	{
		return UDragDrop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragDrop(Z_Construct_UClass_UDragDrop, &UDragDrop::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("UDragDrop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragDrop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
