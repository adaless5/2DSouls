// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define SIDESCROLLER_EnemyCharacter_generated_h

#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_SPARSE_DATA
#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEnemyState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnemyState(UEnemyCharacterState(Z_Param_newState)); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEnemyState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnemyState(UEnemyCharacterState(Z_Param_newState)); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public:


#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter)


#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_IdleFlipbook() { return STRUCT_OFFSET(AEnemyCharacter, m_IdleFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_DeathFlipbook() { return STRUCT_OFFSET(AEnemyCharacter, m_DeathFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_RunningFlipbook() { return STRUCT_OFFSET(AEnemyCharacter, m_RunningFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_AttackingFlipbook() { return STRUCT_OFFSET(AEnemyCharacter, m_AttackingFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_ActiveFlipbook() { return STRUCT_OFFSET(AEnemyCharacter, m_ActiveFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_TotalHealth() { return STRUCT_OFFSET(AEnemyCharacter, m_TotalHealth); } \
	FORCEINLINE static uint32 __PPO__m_CurrentState() { return STRUCT_OFFSET(AEnemyCharacter, m_CurrentState); }


#define SideScroller_Source_SideScroller_EnemyCharacter_h_19_PROLOG
#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_SPARSE_DATA \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_INCLASS \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_EnemyCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_SPARSE_DATA \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_EnemyCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_EnemyCharacter_h


#define FOREACH_ENUM_UENEMYCHARACTERSTATE(op) \
	op(EnemyCharacter_Idle) \
	op(EnemyCharacter_Running) \
	op(EnemyCharacter_Attacking) \
	op(EnemyCharacter_Jumping) \
	op(EnemyCharacter_Dead) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
