// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/BeastPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeastPawn() {}
// Cross Module References
	SIDESCROLLER_API UEnum* Z_Construct_UEnum_SideScroller_UEnemyState();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ABeastPawn_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ABeastPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_SideScroller_UEnemyState_Hash() { return 530947176U; }
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
				{ "UEnemyState::Idle", (int64)UEnemyState::Idle },
				{ "UEnemyState::Running", (int64)UEnemyState::Running },
				{ "UEnemyState::Attacking", (int64)UEnemyState::Attacking },
				{ "UEnemyState::Jumping", (int64)UEnemyState::Jumping },
				{ "UEnemyState::Dead", (int64)UEnemyState::Dead },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attacking.DisplayName", "Attacking" },
				{ "Attacking.Name", "UEnemyState::Attacking" },
				{ "Dead.DisplayName", "Dead" },
				{ "Dead.Name", "UEnemyState::Dead" },
				{ "Idle.DisplayName", "Idle" },
				{ "Idle.Name", "UEnemyState::Idle" },
				{ "Jumping.DisplayName", "Jumping" },
				{ "Jumping.Name", "UEnemyState::Jumping" },
				{ "ModuleRelativePath", "BeastPawn.h" },
				{ "Running.DisplayName", "Running" },
				{ "Running.Name", "UEnemyState::Running" },
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
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABeastPawn::StaticRegisterNativesABeastPawn()
	{
	}
	UClass* Z_Construct_UClass_ABeastPawn_NoRegister()
	{
		return ABeastPawn::StaticClass();
	}
	struct Z_Construct_UClass_ABeastPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_CurrentState;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TotalHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_TotalHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DeathFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DeathFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_IdleFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_IdleFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ActiveFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ActiveFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TestSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TestSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BodyHitBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BodyHitBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABeastPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BeastPawn.h" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_CurrentState_MetaData[] = {
		{ "Category", "Beast" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_CurrentState = { "m_CurrentState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_CurrentState), Z_Construct_UEnum_SideScroller_UEnemyState, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth_MetaData[] = {
		{ "Category", "Beast" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth = { "m_TotalHealth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_TotalHealth), METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook_MetaData[] = {
		{ "Category", "Beast" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook = { "m_DeathFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_DeathFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook_MetaData[] = {
		{ "Category", "Beast" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook = { "m_IdleFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_IdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook_MetaData[] = {
		{ "Category", "Beast" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook = { "m_ActiveFlipbook", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_ActiveFlipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TestSprite_MetaData[] = {
		{ "Category", "Beast" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TestSprite = { "m_TestSprite", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_TestSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TestSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TestSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox_MetaData[] = {
		{ "Category", "Beast" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox = { "m_BodyHitBox", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_BodyHitBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABeastPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TestSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABeastPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeastPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABeastPawn_Statics::ClassParams = {
		&ABeastPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABeastPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABeastPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABeastPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABeastPawn, 36925324);
	template<> SIDESCROLLER_API UClass* StaticClass<ABeastPawn>()
	{
		return ABeastPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABeastPawn(Z_Construct_UClass_ABeastPawn, &ABeastPawn::StaticClass, TEXT("/Script/SideScroller"), TEXT("ABeastPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABeastPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
