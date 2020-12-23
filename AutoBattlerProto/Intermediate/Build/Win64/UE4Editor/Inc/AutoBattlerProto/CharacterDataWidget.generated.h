// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_CharacterDataWidget_generated_h
#error "CharacterDataWidget.generated.h already included, missing '#pragma once' in CharacterDataWidget.h"
#endif
#define AUTOBATTLERPROTO_CharacterDataWidget_generated_h

#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_SPARSE_DATA
#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_RPC_WRAPPERS
#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterDataWidget(); \
	friend struct Z_Construct_UClass_UCharacterDataWidget_Statics; \
public: \
	DECLARE_CLASS(UCharacterDataWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(UCharacterDataWidget)


#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterDataWidget(); \
	friend struct Z_Construct_UClass_UCharacterDataWidget_Statics; \
public: \
	DECLARE_CLASS(UCharacterDataWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(UCharacterDataWidget)


#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterDataWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterDataWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterDataWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterDataWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterDataWidget(UCharacterDataWidget&&); \
	NO_API UCharacterDataWidget(const UCharacterDataWidget&); \
public:


#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterDataWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterDataWidget(UCharacterDataWidget&&); \
	NO_API UCharacterDataWidget(const UCharacterDataWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterDataWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterDataWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterDataWidget)


#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Attributes() { return STRUCT_OFFSET(UCharacterDataWidget, Attributes); } \
	FORCEINLINE static uint32 __PPO__StatusText() { return STRUCT_OFFSET(UCharacterDataWidget, StatusText); } \
	FORCEINLINE static uint32 __PPO__PassiveText() { return STRUCT_OFFSET(UCharacterDataWidget, PassiveText); } \
	FORCEINLINE static uint32 __PPO__PrimaryText() { return STRUCT_OFFSET(UCharacterDataWidget, PrimaryText); } \
	FORCEINLINE static uint32 __PPO__HealthText() { return STRUCT_OFFSET(UCharacterDataWidget, HealthText); } \
	FORCEINLINE static uint32 __PPO__SinText() { return STRUCT_OFFSET(UCharacterDataWidget, SinText); } \
	FORCEINLINE static uint32 __PPO__StrText() { return STRUCT_OFFSET(UCharacterDataWidget, StrText); } \
	FORCEINLINE static uint32 __PPO__DragWidgetClass() { return STRUCT_OFFSET(UCharacterDataWidget, DragWidgetClass); }


#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_13_PROLOG
#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_SPARSE_DATA \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_RPC_WRAPPERS \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_INCLASS \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_SPARSE_DATA \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Widgets_CharacterDataWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class UCharacterDataWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Widgets_CharacterDataWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
