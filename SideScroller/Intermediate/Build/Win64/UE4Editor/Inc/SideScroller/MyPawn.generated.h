// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
#ifdef SIDESCROLLER_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define SIDESCROLLER_MyPawn_generated_h

#define SideScroller_Source_SideScroller_MyPawn_h_24_SPARSE_DATA
#define SideScroller_Source_SideScroller_MyPawn_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpendEXP) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpendEXP(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsInMenu) \
	{ \
		P_GET_UBOOL(Z_Param_IsInMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsInMenu(Z_Param_IsInMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalExperience) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTotalExperience(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaminaPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetStaminaPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseMaxStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StatIncrease); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseMaxStamina(Z_Param_StatIncrease); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseMaxHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StatIncrease); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseMaxHealth(Z_Param_StatIncrease); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_MyPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpendEXP) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpendEXP(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsInMenu) \
	{ \
		P_GET_UBOOL(Z_Param_IsInMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsInMenu(Z_Param_IsInMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalExperience) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTotalExperience(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaminaPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetStaminaPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseMaxStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StatIncrease); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseMaxStamina(Z_Param_StatIncrease); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseMaxHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StatIncrease); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseMaxHealth(Z_Param_StatIncrease); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_MyPawn_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define SideScroller_Source_SideScroller_MyPawn_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define SideScroller_Source_SideScroller_MyPawn_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define SideScroller_Source_SideScroller_MyPawn_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define SideScroller_Source_SideScroller_MyPawn_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ActiveFlipBook() { return STRUCT_OFFSET(AMyPawn, m_ActiveFlipBook); } \
	FORCEINLINE static uint32 __PPO__m_Run() { return STRUCT_OFFSET(AMyPawn, m_Run); } \
	FORCEINLINE static uint32 __PPO__m_Idle() { return STRUCT_OFFSET(AMyPawn, m_Idle); } \
	FORCEINLINE static uint32 __PPO__m_Attack() { return STRUCT_OFFSET(AMyPawn, m_Attack); } \
	FORCEINLINE static uint32 __PPO__m_Roll() { return STRUCT_OFFSET(AMyPawn, m_Roll); } \
	FORCEINLINE static uint32 __PPO__m_Shield() { return STRUCT_OFFSET(AMyPawn, m_Shield); } \
	FORCEINLINE static uint32 __PPO__m_Jump() { return STRUCT_OFFSET(AMyPawn, m_Jump); } \
	FORCEINLINE static uint32 __PPO__m_Dead() { return STRUCT_OFFSET(AMyPawn, m_Dead); } \
	FORCEINLINE static uint32 __PPO__m_Box() { return STRUCT_OFFSET(AMyPawn, m_Box); } \
	FORCEINLINE static uint32 __PPO__m_AttackHitBox() { return STRUCT_OFFSET(AMyPawn, m_AttackHitBox); } \
	FORCEINLINE static uint32 __PPO__m_SpringArm() { return STRUCT_OFFSET(AMyPawn, m_SpringArm); } \
	FORCEINLINE static uint32 __PPO__m_Camera() { return STRUCT_OFFSET(AMyPawn, m_Camera); } \
	FORCEINLINE static uint32 __PPO__m_JumpValue() { return STRUCT_OFFSET(AMyPawn, m_JumpValue); } \
	FORCEINLINE static uint32 __PPO__m_RollValue() { return STRUCT_OFFSET(AMyPawn, m_RollValue); } \
	FORCEINLINE static uint32 __PPO__m_AttackStepValue() { return STRUCT_OFFSET(AMyPawn, m_AttackStepValue); } \
	FORCEINLINE static uint32 __PPO__m_PlayerState() { return STRUCT_OFFSET(AMyPawn, m_PlayerState); } \
	FORCEINLINE static uint32 __PPO__m_LastPlayerState() { return STRUCT_OFFSET(AMyPawn, m_LastPlayerState); } \
	FORCEINLINE static uint32 __PPO__m_CurentHealth() { return STRUCT_OFFSET(AMyPawn, m_CurentHealth); } \
	FORCEINLINE static uint32 __PPO__m_MaxHealth() { return STRUCT_OFFSET(AMyPawn, m_MaxHealth); } \
	FORCEINLINE static uint32 __PPO__m_CurrentStamina() { return STRUCT_OFFSET(AMyPawn, m_CurrentStamina); } \
	FORCEINLINE static uint32 __PPO__m_MaxStamina() { return STRUCT_OFFSET(AMyPawn, m_MaxStamina); } \
	FORCEINLINE static uint32 __PPO__m_InvincibiltyTimerRate() { return STRUCT_OFFSET(AMyPawn, m_InvincibiltyTimerRate); } \
	FORCEINLINE static uint32 __PPO__m_BonfireMenuWidget() { return STRUCT_OFFSET(AMyPawn, m_BonfireMenuWidget); } \
	FORCEINLINE static uint32 __PPO__m_PauseMenuWidget() { return STRUCT_OFFSET(AMyPawn, m_PauseMenuWidget); } \
	FORCEINLINE static uint32 __PPO__m_RefillStaminaTimerRate() { return STRUCT_OFFSET(AMyPawn, m_RefillStaminaTimerRate); }


#define SideScroller_Source_SideScroller_MyPawn_h_21_PROLOG
#define SideScroller_Source_SideScroller_MyPawn_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_MyPawn_h_24_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_MyPawn_h_24_SPARSE_DATA \
	SideScroller_Source_SideScroller_MyPawn_h_24_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_MyPawn_h_24_INCLASS \
	SideScroller_Source_SideScroller_MyPawn_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_MyPawn_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_MyPawn_h_24_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_MyPawn_h_24_SPARSE_DATA \
	SideScroller_Source_SideScroller_MyPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_MyPawn_h_24_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_MyPawn_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_MyPawn_h


#define FOREACH_ENUM_UPLAYERSTATE(op) \
	op(UPlayerState::Idle) \
	op(UPlayerState::Running) \
	op(UPlayerState::Attacking) \
	op(UPlayerState::Jumping) \
	op(UPlayerState::Rolling) \
	op(UPlayerState::Shielding) \
	op(UPlayerState::Dead) 

enum class UPlayerState : uint8;
template<> SIDESCROLLER_API UEnum* StaticEnum<UPlayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
