// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/EnemyPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPawn() {}
// Cross Module References
	SIDESCROLLER_API UEnum* Z_Construct_UEnum_SideScroller_UEnemyState();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AEnemyPawn_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AEnemyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	SIDESCROLLER_API UFunction* Z_Construct_UFunction_AEnemyPawn_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SIDESCROLLER_API UFunction* Z_Construct_UFunction_AEnemyPawn_SetEnemyState();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AEXPActor_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static UEnum* UEnemyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SideScroller_UEnemyState, Z_Construct_UPackage__Script_SideScroller(), TEXT("UEnemyState"));
		}
		return Singleton;
	}
	template<> SIDESCROLLER_API UEnum* StaticEnum<UEnemyState>()
	{
		return UEnemyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_UEnemyState(UEnemyState_StaticEnum, TEXT("/Script/SideScroller"), TEXT("UEnemyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SideScroller_UEnemyState_Hash() { return 2309083921U; }
	UEnum* Z_Construct_UEnum_SideScroller_UEnemyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SideScroller();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("UEnemyState"), 0, Get_Z_Construct_UEnum_SideScroller_UEnemyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Enemy_Idle", (int64)Enemy_Idle },
				{ "Enemy_Running", (int64)Enemy_Running },
				{ "Enemy_Patrolling", (int64)Enemy_Patrolling },
				{ "Enemy_Attacking", (int64)Enemy_Attacking },
				{ "Enemy_Jumping", (int64)Enemy_Jumping },
				{ "Enemy_Dead", (int64)Enemy_Dead },
				{ "Enemy_Wait", (int64)Enemy_Wait },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "//TODO: Remember in EnemyState running refers to chasing the playing. Change that to reflect the actual state of the enemy.\n" },
				{ "Enemy_Attacking.DisplayName", "Attacking" },
				{ "Enemy_Attacking.Name", "Enemy_Attacking" },
				{ "Enemy_Dead.DisplayName", "Dead" },
				{ "Enemy_Dead.Name", "Enemy_Dead" },
				{ "Enemy_Idle.DisplayName", "Idle" },
				{ "Enemy_Idle.Name", "Enemy_Idle" },
				{ "Enemy_Jumping.DisplayName", "Jumping" },
				{ "Enemy_Jumping.Name", "Enemy_Jumping" },
				{ "Enemy_Patrolling.DisplayName", "Patrolling" },
				{ "Enemy_Patrolling.Name", "Enemy_Patrolling" },
				{ "Enemy_Running.DisplayName", "Running" },
				{ "Enemy_Running.Name", "Enemy_Running" },
				{ "Enemy_Wait.DisplayName", "Waiting" },
				{ "Enemy_Wait.Name", "Enemy_Wait" },
				{ "ModuleRelativePath", "EnemyPawn.h" },
				{ "ToolTip", "TODO: Remember in EnemyState running refers to chasing the playing. Change that to reflect the actual state of the enemy." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SideScroller,
				nullptr,
				"UEnemyState",
				"UEnemyState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AEnemyPawn::StaticRegisterNativesAEnemyPawn()
	{
		UClass* Class = AEnemyPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AEnemyPawn::execOnHit },
			{ "SetEnemyState", &AEnemyPawn::execSetEnemyState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyPawn_OnHit_Statics
	{
		struct EnemyPawn_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyPawn_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyPawn_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyPawn_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyPawn_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyPawn_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::NewProp_HitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyPawn, nullptr, "OnHit", nullptr, nullptr, sizeof(EnemyPawn_eventOnHit_Parms), Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyPawn_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyPawn_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics
	{
		struct EnemyPawn_eventSetEnemyState_Parms
		{
			TEnumAsByte<UEnemyState> newState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyPawn_eventSetEnemyState_Parms, newState), Z_Construct_UEnum_SideScroller_UEnemyState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyPawn, nullptr, "SetEnemyState", nullptr, nullptr, sizeof(EnemyPawn_eventSetEnemyState_Parms), Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyPawn_SetEnemyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyPawn_SetEnemyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyPawn_NoRegister()
	{
		return AEnemyPawn::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EXPAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_EXPAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DamageAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DamageAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NumberOfExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_NumberOfExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ExperienceValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_m_ExperienceValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EXPTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EXPTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PatrolPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PatrolPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_PatrolPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WaitTimerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_WaitTimerRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AttackTimerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_AttackTimerRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StartPatrolTimerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_StartPatrolTimerRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AttackForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_AttackForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_AttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AggroDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_AggroDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TotalHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_TotalHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ActiveFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ActiveFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AttackingFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AttackingFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RunningFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_RunningFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DeathFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DeathFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_IdleFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_IdleFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BodyHitBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BodyHitBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyPawn_OnHit, "OnHit" }, // 1358169997
		{ &Z_Construct_UFunction_AEnemyPawn_SetEnemyState, "SetEnemyState" }, // 3723199987
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyPawn.h" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_BloodFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_BloodFX = { "BloodFX", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, BloodFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_BloodFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_BloodFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_EXPAudioComponent_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_EXPAudioComponent = { "m_EXPAudioComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_EXPAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_EXPAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_EXPAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DamageAudioComponent_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DamageAudioComponent = { "m_DamageAudioComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_DamageAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DamageAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DamageAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_NumberOfExperience_MetaData[] = {
		{ "Category", "EXP" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_NumberOfExperience = { "m_NumberOfExperience", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_NumberOfExperience), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_NumberOfExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_NumberOfExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ExperienceValue_MetaData[] = {
		{ "Category", "EXP" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ExperienceValue = { "m_ExperienceValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_ExperienceValue), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ExperienceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ExperienceValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_EXPTemplate_MetaData[] = {
		{ "Category", "EXP" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_EXPTemplate = { "EXPTemplate", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, EXPTemplate), Z_Construct_UClass_AEXPActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_EXPTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_EXPTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_PatrolPoints_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_PatrolPoints = { "m_PatrolPoints", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_PatrolPoints), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_PatrolPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_PatrolPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_PatrolPoints_Inner = { "m_PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_WaitTimerRate_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_WaitTimerRate = { "m_WaitTimerRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_WaitTimerRate), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_WaitTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_WaitTimerRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackTimerRate_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackTimerRate = { "m_AttackTimerRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_AttackTimerRate), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackTimerRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_StartPatrolTimerRate_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_StartPatrolTimerRate = { "m_StartPatrolTimerRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_StartPatrolTimerRate), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_StartPatrolTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_StartPatrolTimerRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackForce_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackForce = { "m_AttackForce", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_AttackForce), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackDistance_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackDistance = { "m_AttackDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_AttackDistance), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AggroDistance_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AggroDistance = { "m_AggroDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_AggroDistance), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AggroDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AggroDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_MovementSpeed_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_MovementSpeed = { "m_MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_Player_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_Player = { "m_Player", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_Player), Z_Construct_UClass_AMyPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_CurrentState_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_CurrentState = { "m_CurrentState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_CurrentState), Z_Construct_UEnum_SideScroller_UEnemyState, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_TotalHealth_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_TotalHealth = { "m_TotalHealth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_TotalHealth), METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_TotalHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_TotalHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ActiveFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ActiveFlipbook = { "m_ActiveFlipbook", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_ActiveFlipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ActiveFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ActiveFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackingFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackingFlipbook = { "m_AttackingFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_AttackingFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackingFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackingFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_RunningFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_RunningFlipbook = { "m_RunningFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_RunningFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_RunningFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_RunningFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DeathFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DeathFlipbook = { "m_DeathFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_DeathFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DeathFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DeathFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_IdleFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_IdleFlipbook = { "m_IdleFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_IdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_IdleFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_IdleFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_BodyHitBox_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_BodyHitBox = { "m_BodyHitBox", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyPawn, m_BodyHitBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_BodyHitBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_BodyHitBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_BloodFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_EXPAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DamageAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_NumberOfExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ExperienceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_EXPTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_PatrolPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_PatrolPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_WaitTimerRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackTimerRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_StartPatrolTimerRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AggroDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_TotalHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_ActiveFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_AttackingFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_RunningFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_DeathFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_IdleFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_m_BodyHitBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPawn_Statics::ClassParams = {
		&AEnemyPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyPawn, 3614626059);
	template<> SIDESCROLLER_API UClass* StaticClass<AEnemyPawn>()
	{
		return AEnemyPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyPawn(Z_Construct_UClass_AEnemyPawn, &AEnemyPawn::StaticClass, TEXT("/Script/SideScroller"), TEXT("AEnemyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
