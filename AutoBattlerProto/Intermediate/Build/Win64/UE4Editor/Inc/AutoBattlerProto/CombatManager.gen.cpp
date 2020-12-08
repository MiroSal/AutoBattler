// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/CombatManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatManager() {}
// Cross Module References
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FSoulData();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ETurnEnum();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCombatManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_UCombatManager_ChangeTurn();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_UCombatManager_PopNextSkillActionFromQueue();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics
	{
		struct _Script_AutoBattlerProto_eventSkillUsedDelegate_Parms
		{
			FSoulData SoulData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoulData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::NewProp_SoulData = { "SoulData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoBattlerProto_eventSkillUsedDelegate_Parms, SoulData), Z_Construct_UScriptStruct_FSoulData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::NewProp_SoulData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoBattlerProto, nullptr, "SkillUsedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoBattlerProto_eventSkillUsedDelegate_Parms), Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETurnEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AutoBattlerProto_ETurnEnum, Z_Construct_UPackage__Script_AutoBattlerProto(), TEXT("ETurnEnum"));
		}
		return Singleton;
	}
	template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<ETurnEnum>()
	{
		return ETurnEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETurnEnum(ETurnEnum_StaticEnum, TEXT("/Script/AutoBattlerProto"), TEXT("ETurnEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AutoBattlerProto_ETurnEnum_Hash() { return 3960889453U; }
	UEnum* Z_Construct_UEnum_AutoBattlerProto_ETurnEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AutoBattlerProto();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETurnEnum"), 0, Get_Z_Construct_UEnum_AutoBattlerProto_ETurnEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETurnEnum::Player", (int64)ETurnEnum::Player },
				{ "ETurnEnum::Enemy", (int64)ETurnEnum::Enemy },
				{ "ETurnEnum::None", (int64)ETurnEnum::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Enemy.Name", "ETurnEnum::Enemy" },
				{ "ModuleRelativePath", "CombatManager.h" },
				{ "None.Name", "ETurnEnum::None" },
				{ "Player.Name", "ETurnEnum::Player" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AutoBattlerProto,
				nullptr,
				"ETurnEnum",
				"ETurnEnum",
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
	void UCombatManager::StaticRegisterNativesUCombatManager()
	{
		UClass* Class = UCombatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSkillActionToQueue", &UCombatManager::execAddSkillActionToQueue },
			{ "ChangeTurn", &UCombatManager::execChangeTurn },
			{ "PopNextSkillActionFromQueue", &UCombatManager::execPopNextSkillActionFromQueue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics
	{
		struct CombatManager_eventAddSkillActionToQueue_Parms
		{
			FSoulData ActionData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::NewProp_ActionData = { "ActionData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatManager_eventAddSkillActionToQueue_Parms, ActionData), Z_Construct_UScriptStruct_FSoulData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::NewProp_ActionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatManager, nullptr, "AddSkillActionToQueue", nullptr, nullptr, sizeof(CombatManager_eventAddSkillActionToQueue_Parms), Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatManager_ChangeTurn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatManager_ChangeTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatManager_ChangeTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatManager, nullptr, "ChangeTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatManager_ChangeTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatManager_ChangeTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatManager_ChangeTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatManager_ChangeTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatManager_PopNextSkillActionFromQueue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatManager_PopNextSkillActionFromQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatManager_PopNextSkillActionFromQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatManager, nullptr, "PopNextSkillActionFromQueue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatManager_PopNextSkillActionFromQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatManager_PopNextSkillActionFromQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatManager_PopNextSkillActionFromQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatManager_PopNextSkillActionFromQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCombatManager_NoRegister()
	{
		return UCombatManager::StaticClass();
	}
	struct Z_Construct_UClass_UCombatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentEnemyCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalEnemyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalEnemyCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillUsedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SkillUsedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTurn_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTurn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTurn_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSoulInAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSoulInAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentListenerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentListenerList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentListenerList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemyIndexInAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentEnemyIndexInAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSoulIndexInAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSoulIndexInAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatEnemyListeners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CombatEnemyListeners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatEnemyListeners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatCharacterListeners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CombatCharacterListeners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatCharacterListeners_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatManager_AddSkillActionToQueue, "AddSkillActionToQueue" }, // 3606924585
		{ &Z_Construct_UFunction_UCombatManager_ChangeTurn, "ChangeTurn" }, // 1493851945
		{ &Z_Construct_UFunction_UCombatManager_PopNextSkillActionFromQueue, "PopNextSkillActionFromQueue" }, // 3818495481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatManager.h" },
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount_MetaData[] = {
		{ "Comment", "//TODO remove and make properly, this is hack for enemy count that is shown from enemy_BP\n" },
		{ "ModuleRelativePath", "CombatManager.h" },
		{ "ToolTip", "TODO remove and make properly, this is hack for enemy count that is shown from enemy_BP" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount = { "CurrentEnemyCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CurrentEnemyCount), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount_MetaData[] = {
		{ "Comment", "//TODO remove and make properly, this is hack for enemy count that is shown from enemy_BP\n" },
		{ "ModuleRelativePath", "CombatManager.h" },
		{ "ToolTip", "TODO remove and make properly, this is hack for enemy count that is shown from enemy_BP" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount = { "TotalEnemyCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, TotalEnemyCount), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate = { "SkillUsedDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, SkillUsedDelegate), Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentTurn_MetaData[] = {
		{ "Category", "CombatManager" },
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentTurn = { "CurrentTurn", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CurrentTurn), Z_Construct_UEnum_AutoBattlerProto_ETurnEnum, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentTurn_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentTurn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulInAction_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulInAction = { "CurrentSoulInAction", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CurrentSoulInAction), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulInAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulInAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue = { "ActionQueue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, ActionQueue), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_Inner = { "ActionQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoulData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentListenerList_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentListenerList = { "CurrentListenerList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CurrentListenerList), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentListenerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentListenerList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentListenerList_Inner = { "CurrentListenerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyIndexInAction_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyIndexInAction = { "CurrentEnemyIndexInAction", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CurrentEnemyIndexInAction), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyIndexInAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyIndexInAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulIndexInAction_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulIndexInAction = { "CurrentSoulIndexInAction", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CurrentSoulIndexInAction), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulIndexInAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulIndexInAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners = { "CombatEnemyListeners", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CombatEnemyListeners), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_Inner = { "CombatEnemyListeners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatCharacterListeners_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatCharacterListeners = { "CombatCharacterListeners", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CombatCharacterListeners), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatCharacterListeners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatCharacterListeners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatCharacterListeners_Inner = { "CombatCharacterListeners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentTurn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulInAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentListenerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentListenerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyIndexInAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentSoulIndexInAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatCharacterListeners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatCharacterListeners_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatManager_Statics::ClassParams = {
		&UCombatManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCombatManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatManager, 2408225153);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<UCombatManager>()
	{
		return UCombatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatManager(Z_Construct_UClass_UCombatManager, &UCombatManager::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("UCombatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
