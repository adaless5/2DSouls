// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_BeastPawn_generated_h
#error "BeastPawn.generated.h already included, missing '#pragma once' in BeastPawn.h"
#endif
#define SIDESCROLLER_BeastPawn_generated_h

#define SideScroller_Source_SideScroller_BeastPawn_h_12_SPARSE_DATA
#define SideScroller_Source_SideScroller_BeastPawn_h_12_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_BeastPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_BeastPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABeastPawn(); \
	friend struct Z_Construct_UClass_ABeastPawn_Statics; \
public: \
	DECLARE_CLASS(ABeastPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ABeastPawn)


#define SideScroller_Source_SideScroller_BeastPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABeastPawn(); \
	friend struct Z_Construct_UClass_ABeastPawn_Statics; \
public: \
	DECLARE_CLASS(ABeastPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ABeastPawn)


#define SideScroller_Source_SideScroller_BeastPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABeastPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABeastPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABeastPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABeastPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABeastPawn(ABeastPawn&&); \
	NO_API ABeastPawn(const ABeastPawn&); \
public:


#define SideScroller_Source_SideScroller_BeastPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABeastPawn(ABeastPawn&&); \
	NO_API ABeastPawn(const ABeastPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABeastPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABeastPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABeastPawn)


#define SideScroller_Source_SideScroller_BeastPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_BodyHitBox() { return STRUCT_OFFSET(ABeastPawn, m_BodyHitBox); } \
	FORCEINLINE static uint32 __PPO__m_ActiveFlipbook() { return STRUCT_OFFSET(ABeastPawn, m_ActiveFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_IdleFlipbook() { return STRUCT_OFFSET(ABeastPawn, m_IdleFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_DeathFlipbook() { return STRUCT_OFFSET(ABeastPawn, m_DeathFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_TotalHealth() { return STRUCT_OFFSET(ABeastPawn, m_TotalHealth); }


#define SideScroller_Source_SideScroller_BeastPawn_h_9_PROLOG
#define SideScroller_Source_SideScroller_BeastPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_BeastPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_BeastPawn_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_BeastPawn_h_12_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_BeastPawn_h_12_INCLASS \
	SideScroller_Source_SideScroller_BeastPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_BeastPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_BeastPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_BeastPawn_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_BeastPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_BeastPawn_h_12_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_BeastPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class ABeastPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_BeastPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
