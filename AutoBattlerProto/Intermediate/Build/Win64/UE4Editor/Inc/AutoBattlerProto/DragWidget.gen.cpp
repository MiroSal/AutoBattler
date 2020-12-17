// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Widgets/DragWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragWidget() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UDragWidget_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UDragWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
// End Cross Module References
	void UDragWidget::StaticRegisterNativesUDragWidget()
	{
	}
	UClass* Z_Construct_UClass_UDragWidget_NoRegister()
	{
		return UDragWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDragWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/DragWidget.h" },
		{ "ModuleRelativePath", "Widgets/DragWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference_MetaData[] = {
		{ "Category", "DragWidget" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Widgets/DragWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference = { "WidgetReference", nullptr, (EPropertyFlags)0x001100000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragWidget, WidgetReference), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/DragWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragWidget, WidgetSize), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragWidget_Statics::ClassParams = {
		&UDragWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDragWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragWidget, 1591294777);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<UDragWidget>()
	{
		return UDragWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragWidget(Z_Construct_UClass_UDragWidget, &UDragWidget::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("UDragWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
