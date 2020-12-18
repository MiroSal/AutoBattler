// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_TrialHUDWidget_generated_h
#error "TrialHUDWidget.generated.h already included, missing '#pragma once' in TrialHUDWidget.h"
#endif
#define AUTOBATTLERPROTO_TrialHUDWidget_generated_h

#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_SPARSE_DATA
#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartgame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Startgame(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartgame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Startgame(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrialHUDWidget(); \
	friend struct Z_Construct_UClass_UTrialHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UTrialHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(UTrialHUDWidget)


#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUTrialHUDWidget(); \
	friend struct Z_Construct_UClass_UTrialHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UTrialHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(UTrialHUDWidget)


#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrialHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrialHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrialHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrialHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrialHUDWidget(UTrialHUDWidget&&); \
	NO_API UTrialHUDWidget(const UTrialHUDWidget&); \
public:


#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrialHUDWidget(UTrialHUDWidget&&); \
	NO_API UTrialHUDWidget(const UTrialHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrialHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrialHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrialHUDWidget)


#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Count() { return STRUCT_OFFSET(UTrialHUDWidget, Count); } \
	FORCEINLINE static uint32 __PPO__CharacterDataWidgetClass() { return STRUCT_OFFSET(UTrialHUDWidget, CharacterDataWidgetClass); } \
	FORCEINLINE static uint32 __PPO__DropVerticalBox() { return STRUCT_OFFSET(UTrialHUDWidget, DropVerticalBox); } \
	FORCEINLINE static uint32 __PPO__StartButton() { return STRUCT_OFFSET(UTrialHUDWidget, StartButton); } \
	FORCEINLINE static uint32 __PPO__CountText() { return STRUCT_OFFSET(UTrialHUDWidget, CountText); } \
	FORCEINLINE static uint32 __PPO__CharacterWrapBox() { return STRUCT_OFFSET(UTrialHUDWidget, CharacterWrapBox); }


#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_19_PROLOG
#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_SPARSE_DATA \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_RPC_WRAPPERS \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_INCLASS \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_SPARSE_DATA \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Widgets_TrialHUDWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class UTrialHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Widgets_TrialHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
