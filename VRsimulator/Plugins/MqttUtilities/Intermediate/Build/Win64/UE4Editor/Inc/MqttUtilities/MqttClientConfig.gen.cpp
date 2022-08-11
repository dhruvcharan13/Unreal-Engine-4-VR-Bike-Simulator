// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MqttUtilities/Public/Entities/MqttClientConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClientConfig() {}
// Cross Module References
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
// End Cross Module References
class UScriptStruct* FMqttClientConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MQTTUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttClientConfig, Z_Construct_UPackage__Script_MqttUtilities(), TEXT("MqttClientConfig"), sizeof(FMqttClientConfig), Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash());
	}
	return Singleton;
}
template<> MQTTUTILITIES_API UScriptStruct* StaticStruct<FMqttClientConfig>()
{
	return FMqttClientConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMqttClientConfig(FMqttClientConfig::StaticStruct, TEXT("/Script/MqttUtilities"), TEXT("MqttClientConfig"), false, nullptr, nullptr);
static struct FScriptStruct_MqttUtilities_StaticRegisterNativesFMqttClientConfig
{
	FScriptStruct_MqttUtilities_StaticRegisterNativesFMqttClientConfig()
	{
		UScriptStruct::DeferCppStructOps<FMqttClientConfig>(FName(TEXT("MqttClientConfig")));
	}
} ScriptStruct_MqttUtilities_StaticRegisterNativesFMqttClientConfig;
	struct Z_Construct_UScriptStruct_FMqttClientConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventLoopDeltaMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EventLoopDeltaMs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttClientConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Host URL. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "Host URL." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl = { "HostUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttClientConfig, HostUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Host port. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "Host port." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttClientConfig, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Unique client identifier. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "Unique client identifier." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttClientConfig, ClientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Maximum time between two pusblish/subscribe tasks executions expressed in miliseconds. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "Maximum time between two pusblish/subscribe tasks executions expressed in miliseconds." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs = { "EventLoopDeltaMs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttClientConfig, EventLoopDeltaMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
		nullptr,
		&NewStructOps,
		"MqttClientConfig",
		sizeof(FMqttClientConfig),
		alignof(FMqttClientConfig),
		Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MqttUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MqttClientConfig"), sizeof(FMqttClientConfig), Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMqttClientConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash() { return 3461770027U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
