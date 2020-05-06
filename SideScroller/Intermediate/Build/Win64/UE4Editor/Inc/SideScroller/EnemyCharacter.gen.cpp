// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/EnemyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}
// Cross Module References
	SIDESCROLLER_API UEnum* Z_Construct_UEnum_SideScroller_UEnemyCharacterState();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AEnemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SIDESCROLLER_API UFunction* Z_Construct_UFunction_AEnemyCharacter_SetEnemyState();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	static UEnum* UEnemyCharacterState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SideScroller_UEnemyCharacterState, Z_Construct_UPackage__Script_SideScroller(), TEXT("UEnemyCharacterState"));
		}
		return Singleton;
	}
	template<> SIDESCROLLER_API UEnum* StaticEnum<UEnemyCharacterState>()
	{
		return UEnemyCharacterState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_UEnemyCharacterState(UEnemyCharacterState_StaticEnum, TEXT("/Script/SideScroller"), TEXT("UEnemyCharacterState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SideScroller_UEnemyCharacterState_Hash() { return 2011527980U; }
	UEnum* Z_Construct_UEnum_SideScroller_UEnemyCharacterState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SideScroller();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("UEnemyCharacterState"), 0, Get_Z_Construct_UEnum_SideScroller_UEnemyCharacterState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EnemyCharacter_Idle", (int64)EnemyCharacter_Idle },
				{ "EnemyCharacter_Running", (int64)EnemyCharacter_Running },
				{ "EnemyCharacter_Attacking", (int64)EnemyCharacter_Attacking },
				{ "EnemyCharacter_Jumping", (int64)EnemyCharacter_Jumping },
				{ "EnemyCharacter_Dead", (int64)EnemyCharacter_Dead },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EnemyCharacter_Attacking.DisplayName", "Attacking" },
				{ "EnemyCharacter_Attacking.Name", "EnemyCharacter_Attacking" },
				{ "EnemyCharacter_Dead.DisplayName", "Dead" },
				{ "EnemyCharacter_Dead.Name", "EnemyCharacter_Dead" },
				{ "EnemyCharacter_Idle.DisplayName", "Idle" },
				{ "EnemyCharacter_Idle.Name", "EnemyCharacter_Idle" },
				{ "EnemyCharacter_Jumping.DisplayName", "Jumping" },
				{ "EnemyCharacter_Jumping.Name", "EnemyCharacter_Jumping" },
				{ "EnemyCharacter_Running.DisplayName", "Running" },
				{ "EnemyCharacter_Running.Name", "EnemyCharacter_Running" },
				{ "ModuleRelativePath", "EnemyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SideScroller,
				nullptr,
				"UEnemyCharacterState",
				"UEnemyCharacterState",
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
	void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
	{
		UClass* Class = AEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEnemyState", &AEnemyCharacter::execSetEnemyState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics
	{
		struct EnemyCharacter_eventSetEnemyState_Parms
		{
			TEnumAsByte<UEnemyCharacterState> newState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventSetEnemyState_Parms, newState), Z_Construct_UEnum_SideScroller_UEnemyCharacterState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "SetEnemyState", nullptr, nullptr, sizeof(EnemyCharacter_eventSetEnemyState_Parms), Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_SetEnemyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_SetEnemyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
	{
		return AEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_SetEnemyState, "SetEnemyState" }, // 3009507761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacter.h" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_CurrentState_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_CurrentState = { "m_CurrentState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, m_CurrentState), Z_Construct_UEnum_SideScroller_UEnemyCharacterState, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_TotalHealth_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_TotalHealth = { "m_TotalHealth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, m_TotalHealth), METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_TotalHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_TotalHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_ActiveFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_ActiveFlipbook = { "m_ActiveFlipbook", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, m_ActiveFlipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_ActiveFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_ActiveFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_AttackingFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_AttackingFlipbook = { "m_AttackingFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, m_AttackingFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_AttackingFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_AttackingFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_RunningFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_RunningFlipbook = { "m_RunningFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, m_RunningFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_RunningFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_RunningFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_DeathFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_DeathFlipbook = { "m_DeathFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, m_DeathFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_DeathFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_DeathFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_IdleFlipbook_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_IdleFlipbook = { "m_IdleFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, m_IdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_IdleFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_IdleFlipbook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_TotalHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_ActiveFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_AttackingFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_RunningFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_DeathFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_m_IdleFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
		&AEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyCharacter, 4069457955);
	template<> SIDESCROLLER_API UClass* StaticClass<AEnemyCharacter>()
	{
		return AEnemyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyCharacter(Z_Construct_UClass_AEnemyCharacter, &AEnemyCharacter::StaticClass, TEXT("/Script/SideScroller"), TEXT("AEnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
