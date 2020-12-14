// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/Ferry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFerry() {}
// Cross Module References
	AUTOBATTLERPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FFerrySoulSpot();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ASoulCard_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_AFerry_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_AFerry();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UDropZoneInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FFerrySoulSpot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOBATTLERPROTO_API uint32 Get_Z_Construct_UScriptStruct_FFerrySoulSpot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFerrySoulSpot, Z_Construct_UPackage__Script_AutoBattlerProto(), TEXT("FerrySoulSpot"), sizeof(FFerrySoulSpot), Get_Z_Construct_UScriptStruct_FFerrySoulSpot_Hash());
	}
	return Singleton;
}
template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<FFerrySoulSpot>()
{
	return FFerrySoulSpot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFerrySoulSpot(FFerrySoulSpot::StaticStruct, TEXT("/Script/AutoBattlerProto"), TEXT("FerrySoulSpot"), false, nullptr, nullptr);
static struct FScriptStruct_AutoBattlerProto_StaticRegisterNativesFFerrySoulSpot
{
	FScriptStruct_AutoBattlerProto_StaticRegisterNativesFFerrySoulSpot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FerrySoulSpot")),new UScriptStruct::TCppStructOps<FFerrySoulSpot>);
	}
} ScriptStruct_AutoBattlerProto_StaticRegisterNativesFFerrySoulSpot;
	struct Z_Construct_UScriptStruct_FFerrySoulSpot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Soul_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Soul;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulSpot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulSpot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFerrySoulSpot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Soul_MetaData[] = {
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Soul = { "Soul", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFerrySoulSpot, Soul), Z_Construct_UClass_ASoulCard_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Soul_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Soul_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_SoulSpot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_SoulSpot = { "SoulSpot", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFerrySoulSpot, SoulSpot), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_SoulSpot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_SoulSpot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Soul,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_SoulSpot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
		nullptr,
		&NewStructOps,
		"FerrySoulSpot",
		sizeof(FFerrySoulSpot),
		alignof(FFerrySoulSpot),
		Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFerrySoulSpot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFerrySoulSpot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoBattlerProto();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FerrySoulSpot"), sizeof(FFerrySoulSpot), Get_Z_Construct_UScriptStruct_FFerrySoulSpot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFerrySoulSpot_Hash() { return 1329741355U; }
	void AFerry::StaticRegisterNativesAFerry()
	{
	}
	UClass* Z_Construct_UClass_AFerry_NoRegister()
	{
		return AFerry::StaticClass();
	}
	struct Z_Construct_UClass_AFerry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulSpot5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulSpot5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulSpot4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulSpot4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulSpot3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulSpot3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulSpot2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulSpot2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulSpot1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulSpot1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FerryMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FerryMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFerry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFerry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ferry.h" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot5_MetaData[] = {
		{ "Category", "Ferry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot5 = { "SoulSpot5", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFerry, SoulSpot5), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot4_MetaData[] = {
		{ "Category", "Ferry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot4 = { "SoulSpot4", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFerry, SoulSpot4), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot3_MetaData[] = {
		{ "Category", "Ferry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot3 = { "SoulSpot3", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFerry, SoulSpot3), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot2_MetaData[] = {
		{ "Category", "Ferry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot2 = { "SoulSpot2", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFerry, SoulSpot2), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot1_MetaData[] = {
		{ "Category", "Ferry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot1 = { "SoulSpot1", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFerry, SoulSpot1), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFerry_Statics::NewProp_FerryMesh_MetaData[] = {
		{ "Category", "Ferry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFerry_Statics::NewProp_FerryMesh = { "FerryMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFerry, FerryMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFerry_Statics::NewProp_FerryMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFerry_Statics::NewProp_FerryMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFerry_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ferry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFerry_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFerry, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFerry_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFerry_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFerry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFerry_Statics::NewProp_SoulSpot1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFerry_Statics::NewProp_FerryMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFerry_Statics::NewProp_Root,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFerry_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDropZoneInterface_NoRegister, (int32)VTABLE_OFFSET(AFerry, IDropZoneInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFerry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFerry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFerry_Statics::ClassParams = {
		&AFerry::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFerry_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFerry_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFerry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFerry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFerry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFerry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFerry, 571524022);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<AFerry>()
	{
		return AFerry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFerry(Z_Construct_UClass_AFerry, &AFerry::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("AFerry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFerry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
