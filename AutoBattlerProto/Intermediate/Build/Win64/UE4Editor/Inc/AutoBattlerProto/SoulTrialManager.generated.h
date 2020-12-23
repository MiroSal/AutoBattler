// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_SoulTrialManager_generated_h
#error "SoulTrialManager.generated.h already included, missing '#pragma once' in SoulTrialManager.h"
#endif
#define AUTOBATTLERPROTO_SoulTrialManager_generated_h

#define AutoBattlerProto_Source_SoulTrialManager_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterAttributes_Statics; \
	AUTOBATTLERPROTO_API static class UScriptStruct* StaticStruct();


template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<struct FCharacterAttributes>();

#define AutoBattlerProto_Source_SoulTrialManager_h_72_SPARSE_DATA
#define AutoBattlerProto_Source_SoulTrialManager_h_72_RPC_WRAPPERS
#define AutoBattlerProto_Source_SoulTrialManager_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define AutoBattlerProto_Source_SoulTrialManager_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoulTrialManager(); \
	friend struct Z_Construct_UClass_USoulTrialManager_Statics; \
public: \
	DECLARE_CLASS(USoulTrialManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(USoulTrialManager)


#define AutoBattlerProto_Source_SoulTrialManager_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUSoulTrialManager(); \
	friend struct Z_Construct_UClass_USoulTrialManager_Statics; \
public: \
	DECLARE_CLASS(USoulTrialManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(USoulTrialManager)


#define AutoBattlerProto_Source_SoulTrialManager_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoulTrialManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoulTrialManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoulTrialManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoulTrialManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoulTrialManager(USoulTrialManager&&); \
	NO_API USoulTrialManager(const USoulTrialManager&); \
public:


#define AutoBattlerProto_Source_SoulTrialManager_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoulTrialManager(USoulTrialManager&&); \
	NO_API USoulTrialManager(const USoulTrialManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoulTrialManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoulTrialManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoulTrialManager)


#define AutoBattlerProto_Source_SoulTrialManager_h_72_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SelectedCharacterAttributes() { return STRUCT_OFFSET(USoulTrialManager, SelectedCharacterAttributes); } \
	FORCEINLINE static uint32 __PPO__AllPossiblePrimarySkillClasses() { return STRUCT_OFFSET(USoulTrialManager, AllPossiblePrimarySkillClasses); } \
	FORCEINLINE static uint32 __PPO__AllPossiblePassiveSkillClasses() { return STRUCT_OFFSET(USoulTrialManager, AllPossiblePassiveSkillClasses); } \
	FORCEINLINE static uint32 __PPO__TrialHUDWidgetClass() { return STRUCT_OFFSET(USoulTrialManager, TrialHUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__TrialHUDWidget() { return STRUCT_OFFSET(USoulTrialManager, TrialHUDWidget); } \
	FORCEINLINE static uint32 __PPO__ActiveCharacterWidget() { return STRUCT_OFFSET(USoulTrialManager, ActiveCharacterWidget); }


#define AutoBattlerProto_Source_SoulTrialManager_h_69_PROLOG
#define AutoBattlerProto_Source_SoulTrialManager_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_SoulTrialManager_h_72_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_SoulTrialManager_h_72_SPARSE_DATA \
	AutoBattlerProto_Source_SoulTrialManager_h_72_RPC_WRAPPERS \
	AutoBattlerProto_Source_SoulTrialManager_h_72_INCLASS \
	AutoBattlerProto_Source_SoulTrialManager_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_SoulTrialManager_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_SoulTrialManager_h_72_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_SoulTrialManager_h_72_SPARSE_DATA \
	AutoBattlerProto_Source_SoulTrialManager_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_SoulTrialManager_h_72_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_SoulTrialManager_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class USoulTrialManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_SoulTrialManager_h


#define FOREACH_ENUM_ETRIALSTATUS(op) \
	op(ETrialStatus::TS_HasCoin) \
	op(ETrialStatus::TS_NoCoin) \
	op(ETrialStatus::TS_Alive) \
	op(ETrialStatus::TS_None) 

enum class ETrialStatus : uint8;
template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<ETrialStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
