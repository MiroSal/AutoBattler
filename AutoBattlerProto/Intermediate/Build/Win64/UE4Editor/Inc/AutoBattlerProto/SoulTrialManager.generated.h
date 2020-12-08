// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASoulCard;
class ACharacterBase;
#ifdef AUTOBATTLERPROTO_SoulTrialManager_generated_h
#error "SoulTrialManager.generated.h already included, missing '#pragma once' in SoulTrialManager.h"
#endif
#define AUTOBATTLERPROTO_SoulTrialManager_generated_h

#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChosenSoul_Statics; \
	AUTOBATTLERPROTO_API static class UScriptStruct* StaticStruct();


template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<struct FChosenSoul>();

#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_38_DELEGATE \
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


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_37_DELEGATE \
struct _Script_AutoBattlerProto_eventSoulAddedToJourneyDelegate_Parms \
{ \
	ASoulCard* SoulCard; \
}; \
static inline void FSoulAddedToJourneyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SoulAddedToJourneyDelegate, ASoulCard* SoulCard) \
{ \
	_Script_AutoBattlerProto_eventSoulAddedToJourneyDelegate_Parms Parms; \
	Parms.SoulCard=SoulCard; \
	SoulAddedToJourneyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_SPARSE_DATA
#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChosenSoul) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASoulCard**)Z_Param__Result=P_THIS->GetChosenSoul(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestoryAllOnTrialSoulsList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestoryAllOnTrialSoulsList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTrialSoulList) \
	{ \
		P_GET_OBJECT(ACharacterBase,Z_Param_Soul); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTrialSoulList(Z_Param_Soul); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTrialSoulList) \
	{ \
		P_GET_OBJECT(ACharacterBase,Z_Param_Soul); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTrialSoulList(Z_Param_Soul); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChosenSoul) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASoulCard**)Z_Param__Result=P_THIS->GetChosenSoul(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestoryAllOnTrialSoulsList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestoryAllOnTrialSoulsList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTrialSoulList) \
	{ \
		P_GET_OBJECT(ACharacterBase,Z_Param_Soul); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTrialSoulList(Z_Param_Soul); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTrialSoulList) \
	{ \
		P_GET_OBJECT(ACharacterBase,Z_Param_Soul); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTrialSoulList(Z_Param_Soul); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoulTrialManager(); \
	friend struct Z_Construct_UClass_USoulTrialManager_Statics; \
public: \
	DECLARE_CLASS(USoulTrialManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(USoulTrialManager)


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSoulTrialManager(); \
	friend struct Z_Construct_UClass_USoulTrialManager_Statics; \
public: \
	DECLARE_CLASS(USoulTrialManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(USoulTrialManager)


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_STANDARD_CONSTRUCTORS \
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


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoulTrialManager(USoulTrialManager&&); \
	NO_API USoulTrialManager(const USoulTrialManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoulTrialManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoulTrialManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoulTrialManager)


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChosenSouls() { return STRUCT_OFFSET(USoulTrialManager, ChosenSouls); } \
	FORCEINLINE static uint32 __PPO__TrialSouls() { return STRUCT_OFFSET(USoulTrialManager, TrialSouls); } \
	FORCEINLINE static uint32 __PPO__SoulsToJourney() { return STRUCT_OFFSET(USoulTrialManager, SoulsToJourney); } \
	FORCEINLINE static uint32 __PPO__SoulTest() { return STRUCT_OFFSET(USoulTrialManager, SoulTest); }


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_42_PROLOG
#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_RPC_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_INCLASS \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_SoulTrialManager_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class USoulTrialManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_SoulTrialManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
