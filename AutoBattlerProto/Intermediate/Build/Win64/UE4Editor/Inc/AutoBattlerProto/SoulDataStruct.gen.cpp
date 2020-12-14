// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/SoulDataStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulDataStruct() {}
// Cross Module References
	AUTOBATTLERPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FSoulData();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
// End Cross Module References
class UScriptStruct* FSoulData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOBATTLERPROTO_API uint32 Get_Z_Construct_UScriptStruct_FSoulData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoulData, Z_Construct_UPackage__Script_AutoBattlerProto(), TEXT("SoulData"), sizeof(FSoulData), Get_Z_Construct_UScriptStruct_FSoulData_Hash());
	}
	return Singleton;
}
template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<FSoulData>()
{
	return FSoulData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoulData(FSoulData::StaticStruct, TEXT("/Script/AutoBattlerProto"), TEXT("SoulData"), false, nullptr, nullptr);
static struct FScriptStruct_AutoBattlerProto_StaticRegisterNativesFSoulData
{
	FScriptStruct_AutoBattlerProto_StaticRegisterNativesFSoulData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoulData")),new UScriptStruct::TCppStructOps<FSoulData>);
	}
} ScriptStruct_AutoBattlerProto_StaticRegisterNativesFSoulData;
	struct Z_Construct_UScriptStruct_FSoulData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoulData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoulData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoulData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoulData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
		nullptr,
		&NewStructOps,
		"SoulData",
		sizeof(FSoulData),
		alignof(FSoulData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoulData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoulData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoulData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoulData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoBattlerProto();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoulData"), sizeof(FSoulData), Get_Z_Construct_UScriptStruct_FSoulData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoulData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoulData_Hash() { return 2895598394U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
