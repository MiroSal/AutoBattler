// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/DropZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropZone() {}
// Cross Module References
	AUTOBATTLERPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FFerrySoulSpot();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ADropZone_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ADropZone();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSpot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterSpot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFerrySoulSpot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFerrySoulSpot, Character), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_CharacterSpot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_CharacterSpot = { "CharacterSpot", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFerrySoulSpot, CharacterSpot), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_CharacterSpot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_CharacterSpot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFerrySoulSpot_Statics::NewProp_CharacterSpot,
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
	uint32 Get_Z_Construct_UScriptStruct_FFerrySoulSpot_Hash() { return 2370765830U; }
	void ADropZone::StaticRegisterNativesADropZone()
	{
	}
	UClass* Z_Construct_UClass_ADropZone_NoRegister()
	{
		return ADropZone::StaticClass();
	}
	struct Z_Construct_UClass_ADropZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSpots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterSpots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterSpots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSpot5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterSpot5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSpot4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterSpot4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSpot3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterSpot3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSpot2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterSpot2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSpot1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterSpot1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADropZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DropZone.h" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpots_MetaData[] = {
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpots = { "CharacterSpots", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropZone, CharacterSpots), METADATA_PARAMS(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpots_Inner = { "CharacterSpots", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFerrySoulSpot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot5_MetaData[] = {
		{ "Category", "DropZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot5 = { "CharacterSpot5", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropZone, CharacterSpot5), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot4_MetaData[] = {
		{ "Category", "DropZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot4 = { "CharacterSpot4", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropZone, CharacterSpot4), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot3_MetaData[] = {
		{ "Category", "DropZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot3 = { "CharacterSpot3", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropZone, CharacterSpot3), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot2_MetaData[] = {
		{ "Category", "DropZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot2 = { "CharacterSpot2", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropZone, CharacterSpot2), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot1_MetaData[] = {
		{ "Category", "DropZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot1 = { "CharacterSpot1", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropZone, CharacterSpot1), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropZone_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "DropZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADropZone_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropZone, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADropZone_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropZone_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DropZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADropZone_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADropZone, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADropZone_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADropZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropZone_Statics::NewProp_CharacterSpot1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropZone_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropZone_Statics::NewProp_Root,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADropZone_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDropZoneInterface_NoRegister, (int32)VTABLE_OFFSET(ADropZone, IDropZoneInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADropZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADropZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADropZone_Statics::ClassParams = {
		&ADropZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADropZone_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADropZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADropZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADropZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADropZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADropZone, 1622861843);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<ADropZone>()
	{
		return ADropZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADropZone(Z_Construct_UClass_ADropZone, &ADropZone::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("ADropZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADropZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
