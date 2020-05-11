// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_PlayerHUD_generated_h
#error "PlayerHUD.generated.h already included, missing '#pragma once' in PlayerHUD.h"
#endif
#define SIDESCROLLER_PlayerHUD_generated_h

#define SideScroller_Source_SideScroller_PlayerHUD_h_15_SPARSE_DATA
#define SideScroller_Source_SideScroller_PlayerHUD_h_15_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_PlayerHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_PlayerHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerHUD(); \
	friend struct Z_Construct_UClass_APlayerHUD_Statics; \
public: \
	DECLARE_CLASS(APlayerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(APlayerHUD)


#define SideScroller_Source_SideScroller_PlayerHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerHUD(); \
	friend struct Z_Construct_UClass_APlayerHUD_Statics; \
public: \
	DECLARE_CLASS(APlayerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(APlayerHUD)


#define SideScroller_Source_SideScroller_PlayerHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHUD(APlayerHUD&&); \
	NO_API APlayerHUD(const APlayerHUD&); \
public:


#define SideScroller_Source_SideScroller_PlayerHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHUD(APlayerHUD&&); \
	NO_API APlayerHUD(const APlayerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHUD)


#define SideScroller_Source_SideScroller_PlayerHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_StatsWidgetClass() { return STRUCT_OFFSET(APlayerHUD, m_StatsWidgetClass); } \
	FORCEINLINE static uint32 __PPO__m_CurrentWidget() { return STRUCT_OFFSET(APlayerHUD, m_CurrentWidget); }


#define SideScroller_Source_SideScroller_PlayerHUD_h_12_PROLOG
#define SideScroller_Source_SideScroller_PlayerHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_INCLASS \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_PlayerHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_PlayerHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class APlayerHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_PlayerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
