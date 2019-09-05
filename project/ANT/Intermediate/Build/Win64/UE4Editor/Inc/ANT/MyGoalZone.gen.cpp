// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ANT/MyGoalZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGoalZone() {}
// Cross Module References
	ANT_API UClass* Z_Construct_UClass_AMyGoalZone_NoRegister();
	ANT_API UClass* Z_Construct_UClass_AMyGoalZone();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_ANT();
	ANT_API UFunction* Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ANT_API UFunction* Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd();
// End Cross Module References
	void AMyGoalZone::StaticRegisterNativesAMyGoalZone()
	{
		UClass* Class = AMyGoalZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AMyGoalZone::execOnOverlapBegin },
			{ "OnOverlapEnd", &AMyGoalZone::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics
	{
		struct MyGoalZone_eventOnOverlapBegin_Parms
		{
			AActor* OverlapedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoalZone_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::NewProp_OverlapedActor = { "OverlapedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoalZone_eventOnOverlapBegin_Parms, OverlapedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::NewProp_OverlapedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGoalZone, nullptr, "OnOverlapBegin", sizeof(MyGoalZone_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics
	{
		struct MyGoalZone_eventOnOverlapEnd_Parms
		{
			AActor* OverlapedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoalZone_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::NewProp_OverlapedActor = { "OverlapedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGoalZone_eventOnOverlapEnd_Parms, OverlapedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::NewProp_OverlapedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGoalZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGoalZone, nullptr, "OnOverlapEnd", sizeof(MyGoalZone_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyGoalZone_NoRegister()
	{
		return AMyGoalZone::StaticClass();
	}
	struct Z_Construct_UClass_AMyGoalZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGoalZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_ANT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGoalZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGoalZone_OnOverlapBegin, "OnOverlapBegin" }, // 2804834642
		{ &Z_Construct_UFunction_AMyGoalZone_OnOverlapEnd, "OnOverlapEnd" }, // 1792125033
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGoalZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGoalZone.h" },
		{ "ModuleRelativePath", "MyGoalZone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGoalZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGoalZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGoalZone_Statics::ClassParams = {
		&AMyGoalZone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGoalZone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyGoalZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGoalZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGoalZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGoalZone, 2777697855);
	template<> ANT_API UClass* StaticClass<AMyGoalZone>()
	{
		return AMyGoalZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGoalZone(Z_Construct_UClass_AMyGoalZone, &AMyGoalZone::StaticClass, TEXT("/Script/ANT"), TEXT("AMyGoalZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGoalZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
