// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ANT/MyCollectionZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCollectionZone() {}
// Cross Module References
	ANT_API UClass* Z_Construct_UClass_AMyCollectionZone_NoRegister();
	ANT_API UClass* Z_Construct_UClass_AMyCollectionZone();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_ANT();
	ANT_API UFunction* Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ANT_API UFunction* Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd();
// End Cross Module References
	void AMyCollectionZone::StaticRegisterNativesAMyCollectionZone()
	{
		UClass* Class = AMyCollectionZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AMyCollectionZone::execOnOverlapBegin },
			{ "OnOverlapEnd", &AMyCollectionZone::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics
	{
		struct MyCollectionZone_eventOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCollectionZone_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::NewProp_OverlapedActor = { "OverlapedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCollectionZone_eventOnOverlapBegin_Parms, OverlapedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::NewProp_OverlapedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCollectionZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCollectionZone, nullptr, "OnOverlapBegin", sizeof(MyCollectionZone_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics
	{
		struct MyCollectionZone_eventOnOverlapEnd_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCollectionZone_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::NewProp_OverlapedActor = { "OverlapedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCollectionZone_eventOnOverlapEnd_Parms, OverlapedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::NewProp_OverlapedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCollectionZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCollectionZone, nullptr, "OnOverlapEnd", sizeof(MyCollectionZone_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCollectionZone_NoRegister()
	{
		return AMyCollectionZone::StaticClass();
	}
	struct Z_Construct_UClass_AMyCollectionZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasCollection_MetaData[];
#endif
		static void NewProp_hasCollection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCollectionZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_ANT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCollectionZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCollectionZone_OnOverlapBegin, "OnOverlapBegin" }, // 2438772868
		{ &Z_Construct_UFunction_AMyCollectionZone_OnOverlapEnd, "OnOverlapEnd" }, // 1132871845
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCollectionZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyCollectionZone.h" },
		{ "ModuleRelativePath", "MyCollectionZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCollectionZone_Statics::NewProp_hasCollection_MetaData[] = {
		{ "Category", "MyCollectionZone" },
		{ "ModuleRelativePath", "MyCollectionZone.h" },
	};
#endif
	void Z_Construct_UClass_AMyCollectionZone_Statics::NewProp_hasCollection_SetBit(void* Obj)
	{
		((AMyCollectionZone*)Obj)->hasCollection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCollectionZone_Statics::NewProp_hasCollection = { "hasCollection", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyCollectionZone), &Z_Construct_UClass_AMyCollectionZone_Statics::NewProp_hasCollection_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyCollectionZone_Statics::NewProp_hasCollection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCollectionZone_Statics::NewProp_hasCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCollectionZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectionZone_Statics::NewProp_hasCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCollectionZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCollectionZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCollectionZone_Statics::ClassParams = {
		&AMyCollectionZone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCollectionZone_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyCollectionZone_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCollectionZone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCollectionZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCollectionZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCollectionZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCollectionZone, 1028836271);
	template<> ANT_API UClass* StaticClass<AMyCollectionZone>()
	{
		return AMyCollectionZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCollectionZone(Z_Construct_UClass_AMyCollectionZone, &AMyCollectionZone::StaticClass, TEXT("/Script/ANT"), TEXT("AMyCollectionZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCollectionZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
