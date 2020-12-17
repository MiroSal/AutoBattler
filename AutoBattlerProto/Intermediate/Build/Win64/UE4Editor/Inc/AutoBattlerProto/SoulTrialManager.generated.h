// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerCharacter;
#ifdef AUTOBATTLERPROTO_SoulTrialManager_generated_h
#error "SoulTrialManager.generated.h already included, missing '#pragma once' in SoulTrialManager.h"
#endif
#define AUTOBATTLERPROTO_SoulTrialManager_generated_h

#define AutoBattlerProto_Source_SoulTrialManager_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterAttributes_Statics; \
	AUTOBATTLERPROTO_API static class UScriptStruct* StaticStruct();


template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<struct FCharacterAttributes>();

#define AutoBattlerProto_Source_SoulTrialManager_h_53_DELEGATE \
struct _Script_AutoBattlerProto_eventFerryIsFullDelegate_Parms \
{ \
	bool bCanClick; \
}; \
static inline void FFerryIsFullDelegate_DelegateWrapper(const FMulticastScriptDelegate& FerryIsFullDelegate, bool bCanClick) \
{ \
	_Script_AutoBattlerProto_eventFerryIsFullDelegate_Parms Parms; \
	Parms.bCanClick=bCanClick ? true : false; \
	FerryIsFullDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AutoBattlerProto_Source_SoulTrialManager_h_52_DELEGATE \
struct _Script_AutoBattlerProto_eventSoulAddedToJourneyDelegate_Parms \
{ \
	APlayerCharacter* SoulCard; \
}; \
static inline void FSoulAddedToJourneyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SoulAddedToJourneyDelegate, APlayerCharacter* SoulCard) \
{ \
	_Script_AutoBattlerProto_eventSoulAddedToJourneyDelegate_Parms Parms; \
	Parms.SoulCard=SoulCard; \
	SoulAddedToJourneyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AutoBattlerProto_Source_SoulTrialManager_h_60_SPARSE_DATA
#define AutoBattlerProto_Source_SoulTrialManager_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyCharactersFromTrial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyCharactersFromTrial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChosenCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerCharacter**)Z_Param__Result=P_THIS->GetChosenCharacter(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_SoulTrialManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyCharactersFromTrial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyCharactersFromTrial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChosenCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerCharacter**)Z_Param__Result=P_THIS->GetChosenCharacter(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_SoulTrialManager_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoulTrialManager(); \
	friend struct Z_Construct_UClass_USoulTrialManager_Statics; \
public: \
	DECLARE_CLASS(USoulTrialManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(USoulTrialManager)


#define AutoBattlerProto_Source_SoulTrialManager_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUSoulTrialManager(); \
	friend struct Z_Construct_UClass_USoulTrialManager_Statics; \
public: \
	DECLARE_CLASS(USoulTrialManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(USoulTrialManager)


#define AutoBattlerProto_Source_SoulTrialManager_h_60_STANDARD_CONSTRUCTORS \
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


#define AutoBattlerProto_Source_SoulTrialManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoulTrialManager(USoulTrialManager&&); \
	NO_API USoulTrialManager(const USoulTrialManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoulTrialManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoulTrialManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoulTrialManager)


#define AutoBattlerProto_Source_SoulTrialManager_h_60_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AllCharactersInTrial() { return STRUCT_OFFSET(USoulTrialManager, AllCharactersInTrial); } \
	FORCEINLINE static uint32 __PPO__CharactersToCombat() { return STRUCT_OFFSET(USoulTrialManager, CharactersToCombat); } \
	FORCEINLINE static uint32 __PPO__CharactersAttributes() { return STRUCT_OFFSET(USoulTrialManager, CharactersAttributes); }


#define AutoBattlerProto_Source_SoulTrialManager_h_57_PROLOG
#define AutoBattlerProto_Source_SoulTrialManager_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_SoulTrialManager_h_60_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_SoulTrialManager_h_60_SPARSE_DATA \
	AutoBattlerProto_Source_SoulTrialManager_h_60_RPC_WRAPPERS \
	AutoBattlerProto_Source_SoulTrialManager_h_60_INCLASS \
	AutoBattlerProto_Source_SoulTrialManager_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_SoulTrialManager_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_SoulTrialManager_h_60_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_SoulTrialManager_h_60_SPARSE_DATA \
	AutoBattlerProto_Source_SoulTrialManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_SoulTrialManager_h_60_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_SoulTrialManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class USoulTrialManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_SoulTrialManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
