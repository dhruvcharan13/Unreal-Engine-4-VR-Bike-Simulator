// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MqttUtilities/Private/Windows/MqttClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClient() {}
// Cross Module References
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClient_NoRegister();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClient();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientBase();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// End Cross Module References
	void UMqttClient::StaticRegisterNativesUMqttClient()
	{
	}
	UClass* Z_Construct_UClass_UMqttClient_NoRegister()
	{
		return UMqttClient::StaticClass();
	}
	struct Z_Construct_UClass_UMqttClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMqttClientBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Windows/MqttClient.h" },
		{ "ModuleRelativePath", "Private/Windows/MqttClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMqttClient_Statics::ClassParams = {
		&UMqttClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMqttClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMqttClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMqttClient, 3769475521);
	template<> MQTTUTILITIES_API UClass* StaticClass<UMqttClient>()
	{
		return UMqttClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMqttClient(Z_Construct_UClass_UMqttClient, &UMqttClient::StaticClass, TEXT("/Script/MqttUtilities"), TEXT("UMqttClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
