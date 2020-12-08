// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_DropZoneInterface_generated_h
#error "DropZoneInterface.generated.h already included, missing '#pragma once' in DropZoneInterface.h"
#endif
#define AUTOBATTLERPROTO_DropZoneInterface_generated_h

#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_SPARSE_DATA
#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_RPC_WRAPPERS
#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOBATTLERPROTO_API UDropZoneInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDropZoneInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOBATTLERPROTO_API, UDropZoneInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropZoneInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUTOBATTLERPROTO_API UDropZoneInterface(UDropZoneInterface&&); \
	AUTOBATTLERPROTO_API UDropZoneInterface(const UDropZoneInterface&); \
public:


#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOBATTLERPROTO_API UDropZoneInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUTOBATTLERPROTO_API UDropZoneInterface(UDropZoneInterface&&); \
	AUTOBATTLERPROTO_API UDropZoneInterface(const UDropZoneInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOBATTLERPROTO_API, UDropZoneInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropZoneInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDropZoneInterface)


#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDropZoneInterface(); \
	friend struct Z_Construct_UClass_UDropZoneInterface_Statics; \
public: \
	DECLARE_CLASS(UDropZoneInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), AUTOBATTLERPROTO_API) \
	DECLARE_SERIALIZER(UDropZoneInterface)


#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_GENERATED_UINTERFACE_BODY() \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_GENERATED_UINTERFACE_BODY() \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDropZoneInterface() {} \
public: \
	typedef UDropZoneInterface UClassType; \
	typedef IDropZoneInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IDropZoneInterface() {} \
public: \
	typedef UDropZoneInterface UClassType; \
	typedef IDropZoneInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_12_PROLOG
#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_RPC_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_DropZoneInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class UDropZoneInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_DropZoneInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
