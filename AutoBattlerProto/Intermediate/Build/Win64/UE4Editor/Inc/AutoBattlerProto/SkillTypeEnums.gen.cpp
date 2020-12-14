// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/SkillTypeEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillTypeEnums() {}
// Cross Module References
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_EAffectRange();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ESkillType();
// End Cross Module References
	static UEnum* EAffectRange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AutoBattlerProto_EAffectRange, Z_Construct_UPackage__Script_AutoBattlerProto(), TEXT("EAffectRange"));
		}
		return Singleton;
	}
	template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<EAffectRange>()
	{
		return EAffectRange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAffectRange(EAffectRange_StaticEnum, TEXT("/Script/AutoBattlerProto"), TEXT("EAffectRange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AutoBattlerProto_EAffectRange_Hash() { return 934569429U; }
	UEnum* Z_Construct_UEnum_AutoBattlerProto_EAffectRange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AutoBattlerProto();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAffectRange"), 0, Get_Z_Construct_UEnum_AutoBattlerProto_EAffectRange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAffectRange::AR_All", (int64)EAffectRange::AR_All },
				{ "EAffectRange::AR_Single", (int64)EAffectRange::AR_Single },
				{ "EAffectRange::AR_None", (int64)EAffectRange::AR_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AR_All.DisplayName", "All" },
				{ "AR_All.Name", "EAffectRange::AR_All" },
				{ "AR_None.DisplayName", "None" },
				{ "AR_None.Name", "EAffectRange::AR_None" },
				{ "AR_Single.DisplayName", "Single" },
				{ "AR_Single.Name", "EAffectRange::AR_Single" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "SkillTypeEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AutoBattlerProto,
				nullptr,
				"EAffectRange",
				"EAffectRange",
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
	static UEnum* ESkillType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AutoBattlerProto_ESkillType, Z_Construct_UPackage__Script_AutoBattlerProto(), TEXT("ESkillType"));
		}
		return Singleton;
	}
	template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<ESkillType>()
	{
		return ESkillType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkillType(ESkillType_StaticEnum, TEXT("/Script/AutoBattlerProto"), TEXT("ESkillType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AutoBattlerProto_ESkillType_Hash() { return 3122396860U; }
	UEnum* Z_Construct_UEnum_AutoBattlerProto_ESkillType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AutoBattlerProto();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkillType"), 0, Get_Z_Construct_UEnum_AutoBattlerProto_ESkillType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkillType::ST_Heal", (int64)ESkillType::ST_Heal },
				{ "ESkillType::ST_Sin", (int64)ESkillType::ST_Sin },
				{ "ESkillType::ST_Buff", (int64)ESkillType::ST_Buff },
				{ "ESkillType::ST_None", (int64)ESkillType::ST_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "SkillTypeEnums.h" },
				{ "ST_Buff.DisplayName", "Buff" },
				{ "ST_Buff.Name", "ESkillType::ST_Buff" },
				{ "ST_Heal.DisplayName", "Heal" },
				{ "ST_Heal.Name", "ESkillType::ST_Heal" },
				{ "ST_None.DisplayName", "None" },
				{ "ST_None.Name", "ESkillType::ST_None" },
				{ "ST_Sin.DisplayName", "Sin" },
				{ "ST_Sin.Name", "ESkillType::ST_Sin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AutoBattlerProto,
				nullptr,
				"ESkillType",
				"ESkillType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
