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
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ESkillType();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
// End Cross Module References
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
	uint32 Get_Z_Construct_UEnum_AutoBattlerProto_ESkillType_Hash() { return 3266882339U; }
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
				{ "ESkillType::Heal", (int64)ESkillType::Heal },
				{ "ESkillType::Sin", (int64)ESkillType::Sin },
				{ "ESkillType::Buff", (int64)ESkillType::Buff },
				{ "ESkillType::None", (int64)ESkillType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Buff.Name", "ESkillType::Buff" },
				{ "Heal.Name", "ESkillType::Heal" },
				{ "ModuleRelativePath", "SkillTypeEnums.h" },
				{ "None.Name", "ESkillType::None" },
				{ "Sin.Name", "ESkillType::Sin" },
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
