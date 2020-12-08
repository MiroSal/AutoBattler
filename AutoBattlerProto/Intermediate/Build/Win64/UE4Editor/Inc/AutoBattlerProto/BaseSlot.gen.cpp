// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/BaseSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSlot() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ABaseSlot_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ABaseSlot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ABaseSlot_BP_CharacterIsDead();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ABaseSlot_BP_NewCharacterCreated();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ABaseSlot_SpawnNewCharacterToSlot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABaseSlot_BP_CharacterIsDead = FName(TEXT("BP_CharacterIsDead"));
	void ABaseSlot::BP_CharacterIsDead()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseSlot_BP_CharacterIsDead),NULL);
	}
	static FName NAME_ABaseSlot_BP_NewCharacterCreated = FName(TEXT("BP_NewCharacterCreated"));
	void ABaseSlot::BP_NewCharacterCreated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseSlot_BP_NewCharacterCreated),NULL);
	}
	void ABaseSlot::StaticRegisterNativesABaseSlot()
	{
		UClass* Class = ABaseSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExistingCharacterToSlot", &ABaseSlot::execAddExistingCharacterToSlot },
			{ "RemoveCharacterFromSlot", &ABaseSlot::execRemoveCharacterFromSlot },
			{ "SpawnNewCharacterToSlot", &ABaseSlot::execSpawnNewCharacterToSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics
	{
		struct BaseSlot_eventAddExistingCharacterToSlot_Parms
		{
			ACharacterBase* CharacterToCreate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterToCreate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::NewProp_CharacterToCreate = { "CharacterToCreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSlot_eventAddExistingCharacterToSlot_Parms, CharacterToCreate), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::NewProp_CharacterToCreate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSlot, nullptr, "AddExistingCharacterToSlot", nullptr, nullptr, sizeof(BaseSlot_eventAddExistingCharacterToSlot_Parms), Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSlot_BP_CharacterIsDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSlot_BP_CharacterIsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSlot_BP_CharacterIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSlot, nullptr, "BP_CharacterIsDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSlot_BP_CharacterIsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSlot_BP_CharacterIsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSlot_BP_CharacterIsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSlot_BP_CharacterIsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSlot_BP_NewCharacterCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSlot_BP_NewCharacterCreated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSlot_BP_NewCharacterCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSlot, nullptr, "BP_NewCharacterCreated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSlot_BP_NewCharacterCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSlot_BP_NewCharacterCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSlot_BP_NewCharacterCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSlot_BP_NewCharacterCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics
	{
		struct BaseSlot_eventRemoveCharacterFromSlot_Parms
		{
			bool bDestroyCharacter;
		};
		static void NewProp_bDestroyCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::NewProp_bDestroyCharacter_SetBit(void* Obj)
	{
		((BaseSlot_eventRemoveCharacterFromSlot_Parms*)Obj)->bDestroyCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::NewProp_bDestroyCharacter = { "bDestroyCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseSlot_eventRemoveCharacterFromSlot_Parms), &Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::NewProp_bDestroyCharacter_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::NewProp_bDestroyCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSlot, nullptr, "RemoveCharacterFromSlot", nullptr, nullptr, sizeof(BaseSlot_eventRemoveCharacterFromSlot_Parms), Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseSlot_SpawnNewCharacterToSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSlot_SpawnNewCharacterToSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSlot_SpawnNewCharacterToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSlot, nullptr, "SpawnNewCharacterToSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSlot_SpawnNewCharacterToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSlot_SpawnNewCharacterToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSlot_SpawnNewCharacterToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSlot_SpawnNewCharacterToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseSlot_NoRegister()
	{
		return ABaseSlot::StaticClass();
	}
	struct Z_Construct_UClass_ABaseSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterInSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterInSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulCardToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SoulCardToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatedSoulCanBeClicked_MetaData[];
#endif
		static void NewProp_bCreatedSoulCanBeClicked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatedSoulCanBeClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseSlot_AddExistingCharacterToSlot, "AddExistingCharacterToSlot" }, // 1021781552
		{ &Z_Construct_UFunction_ABaseSlot_BP_CharacterIsDead, "BP_CharacterIsDead" }, // 3616938760
		{ &Z_Construct_UFunction_ABaseSlot_BP_NewCharacterCreated, "BP_NewCharacterCreated" }, // 392387135
		{ &Z_Construct_UFunction_ABaseSlot_RemoveCharacterFromSlot, "RemoveCharacterFromSlot" }, // 1514581800
		{ &Z_Construct_UFunction_ABaseSlot_SpawnNewCharacterToSlot, "SpawnNewCharacterToSlot" }, // 3034377059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseSlot.h" },
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSlot_Statics::NewProp_CharacterInSlot_MetaData[] = {
		{ "Category", "BaseSlot" },
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSlot_Statics::NewProp_CharacterInSlot = { "CharacterInSlot", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSlot, CharacterInSlot), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseSlot_Statics::NewProp_CharacterInSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSlot_Statics::NewProp_CharacterInSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSlot_Statics::NewProp_SoulCardToSpawn_MetaData[] = {
		{ "Category", "BaseSlot" },
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseSlot_Statics::NewProp_SoulCardToSpawn = { "SoulCardToSpawn", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSlot, SoulCardToSpawn), Z_Construct_UClass_ACharacterBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseSlot_Statics::NewProp_SoulCardToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSlot_Statics::NewProp_SoulCardToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSlot_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSlot_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSlot, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseSlot_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSlot_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSlot_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "BaseSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSlot_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSlot, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseSlot_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSlot_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSlot_Statics::NewProp_bCreatedSoulCanBeClicked_MetaData[] = {
		{ "Category", "BaseSlot" },
		{ "ModuleRelativePath", "BaseSlot.h" },
	};
#endif
	void Z_Construct_UClass_ABaseSlot_Statics::NewProp_bCreatedSoulCanBeClicked_SetBit(void* Obj)
	{
		((ABaseSlot*)Obj)->bCreatedSoulCanBeClicked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseSlot_Statics::NewProp_bCreatedSoulCanBeClicked = { "bCreatedSoulCanBeClicked", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseSlot), &Z_Construct_UClass_ABaseSlot_Statics::NewProp_bCreatedSoulCanBeClicked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseSlot_Statics::NewProp_bCreatedSoulCanBeClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSlot_Statics::NewProp_bCreatedSoulCanBeClicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSlot_Statics::NewProp_CharacterInSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSlot_Statics::NewProp_SoulCardToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSlot_Statics::NewProp_ArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSlot_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSlot_Statics::NewProp_bCreatedSoulCanBeClicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseSlot_Statics::ClassParams = {
		&ABaseSlot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSlot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseSlot, 3940119028);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<ABaseSlot>()
	{
		return ABaseSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseSlot(Z_Construct_UClass_ABaseSlot, &ABaseSlot::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("ABaseSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
