// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/SideScrollerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideScrollerGameModeBase() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_ASideScrollerGameModeBase_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ASideScrollerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	SIDESCROLLER_API UFunction* Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SIDESCROLLER_API UFunction* Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost();
	SIDESCROLLER_API UFunction* Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost();
	SIDESCROLLER_API UFunction* Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost();
// End Cross Module References
	void ASideScrollerGameModeBase::StaticRegisterNativesASideScrollerGameModeBase()
	{
		UClass* Class = ASideScrollerGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &ASideScrollerGameModeBase::execChangeMenuWidget },
			{ "GetHealthIncreaseCost", &ASideScrollerGameModeBase::execGetHealthIncreaseCost },
			{ "GetMagicIncreaseCost", &ASideScrollerGameModeBase::execGetMagicIncreaseCost },
			{ "GetStaminaIncreaseCost", &ASideScrollerGameModeBase::execGetStaminaIncreaseCost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics
	{
		struct SideScrollerGameModeBase_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SideScrollerGameModeBase_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMG Game" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASideScrollerGameModeBase, nullptr, "ChangeMenuWidget", nullptr, nullptr, sizeof(SideScrollerGameModeBase_eventChangeMenuWidget_Parms), Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics
	{
		struct SideScrollerGameModeBase_eventGetHealthIncreaseCost_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SideScrollerGameModeBase_eventGetHealthIncreaseCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASideScrollerGameModeBase, nullptr, "GetHealthIncreaseCost", nullptr, nullptr, sizeof(SideScrollerGameModeBase_eventGetHealthIncreaseCost_Parms), Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics
	{
		struct SideScrollerGameModeBase_eventGetMagicIncreaseCost_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SideScrollerGameModeBase_eventGetMagicIncreaseCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASideScrollerGameModeBase, nullptr, "GetMagicIncreaseCost", nullptr, nullptr, sizeof(SideScrollerGameModeBase_eventGetMagicIncreaseCost_Parms), Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics
	{
		struct SideScrollerGameModeBase_eventGetStaminaIncreaseCost_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SideScrollerGameModeBase_eventGetStaminaIncreaseCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASideScrollerGameModeBase, nullptr, "GetStaminaIncreaseCost", nullptr, nullptr, sizeof(SideScrollerGameModeBase_eventGetStaminaIncreaseCost_Parms), Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASideScrollerGameModeBase_NoRegister()
	{
		return ASideScrollerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASideScrollerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CurrentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideScrollerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASideScrollerGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASideScrollerGameModeBase_ChangeMenuWidget, "ChangeMenuWidget" }, // 2167116282
		{ &Z_Construct_UFunction_ASideScrollerGameModeBase_GetHealthIncreaseCost, "GetHealthIncreaseCost" }, // 1170593134
		{ &Z_Construct_UFunction_ASideScrollerGameModeBase_GetMagicIncreaseCost, "GetMagicIncreaseCost" }, // 1127873482
		{ &Z_Construct_UFunction_ASideScrollerGameModeBase_GetStaminaIncreaseCost, "GetStaminaIncreaseCost" }, // 2729962109
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SideScrollerGameModeBase.h" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_m_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_m_CurrentWidget = { "m_CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASideScrollerGameModeBase, m_CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_m_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_m_CurrentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASideScrollerGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_m_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideScrollerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideScrollerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::ClassParams = {
		&ASideScrollerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASideScrollerGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASideScrollerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASideScrollerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASideScrollerGameModeBase, 1150221285);
	template<> SIDESCROLLER_API UClass* StaticClass<ASideScrollerGameModeBase>()
	{
		return ASideScrollerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASideScrollerGameModeBase(Z_Construct_UClass_ASideScrollerGameModeBase, &ASideScrollerGameModeBase::StaticClass, TEXT("/Script/SideScroller"), TEXT("ASideScrollerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideScrollerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
