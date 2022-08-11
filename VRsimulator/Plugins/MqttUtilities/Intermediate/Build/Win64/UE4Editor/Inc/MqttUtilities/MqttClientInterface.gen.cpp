// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MqttUtilities/Public/Interface/MqttClientInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClientInterface() {}
// Cross Module References
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature();
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature();
	MQTTUTILITIES_API UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnMqttErrorDelegate_Parms
		{
			int32 code;
			FString message;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_code;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnMqttErrorDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MqttUtilities_eventOnMqttErrorDelegate_Parms), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms
		{
			int32 mid;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms, mid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::NewProp_mid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnUnsubscribeDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MqttUtilities_eventOnUnsubscribeDelegate_Parms), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnSubscribeDelegate_Parms
		{
			int32 mid;
			TArray<int32> qos;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mid;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_qos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_qos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_qos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnSubscribeDelegate_Parms, mid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_Inner = { "qos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos = { "qos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnSubscribeDelegate_Parms, qos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_mid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_qos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnSubscribeDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MqttUtilities_eventOnSubscribeDelegate_Parms), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnMessageDelegate_Parms
		{
			FMqttMessage message;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnMessageDelegate_Parms, message), Z_Construct_UScriptStruct_FMqttMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnMessageDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MqttUtilities_eventOnMessageDelegate_Parms), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics
	{
		struct _Script_MqttUtilities_eventOnPublishDelegate_Parms
		{
			int32 mid;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::NewProp_mid = { "mid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MqttUtilities_eventOnPublishDelegate_Parms, mid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::NewProp_mid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnPublishDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MqttUtilities_eventOnPublishDelegate_Parms), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnDisconnectDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MqttUtilities, nullptr, "OnConnectDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnErrorHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onErrorCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnErrorHandler(FOnMqttErrorDelegate(Z_Param_Out_onErrorCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnUnsubscribeHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onUnsubscribeCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnUnsubscribeHandler(FOnUnsubscribeDelegate(Z_Param_Out_onUnsubscribeCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnSubscribeHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onSubscribeCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnSubscribeHandler(FOnSubscribeDelegate(Z_Param_Out_onSubscribeCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnMessageHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onMessageCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnMessageHandler(FOnMessageDelegate(Z_Param_Out_onMessageCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSetOnPublishHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onPublishCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPublishHandler(FOnPublishDelegate(Z_Param_Out_onPublishCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execPublish)
	{
		P_GET_STRUCT(FMqttMessage,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Publish(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execUnsubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unsubscribe(Z_Param_topic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execSubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_GET_PROPERTY(FIntProperty,Z_Param_qos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Subscribe(Z_Param_topic,Z_Param_qos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execDisconnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDisconnectCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect(FOnDisconnectDelegate(Z_Param_Out_onDisconnectCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMqttClientInterface::execConnect)
	{
		P_GET_STRUCT(FMqttConnectionData,Z_Param_connectionData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onConnectCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(Z_Param_connectionData,FOnConnectDelegate(Z_Param_Out_onConnectCallback));
		P_NATIVE_END;
	}
	void UMqttClientInterface::StaticRegisterNativesUMqttClientInterface()
	{
		UClass* Class = UMqttClientInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &IMqttClientInterface::execConnect },
			{ "Disconnect", &IMqttClientInterface::execDisconnect },
			{ "Publish", &IMqttClientInterface::execPublish },
			{ "SetOnErrorHandler", &IMqttClientInterface::execSetOnErrorHandler },
			{ "SetOnMessageHandler", &IMqttClientInterface::execSetOnMessageHandler },
			{ "SetOnPublishHandler", &IMqttClientInterface::execSetOnPublishHandler },
			{ "SetOnSubscribeHandler", &IMqttClientInterface::execSetOnSubscribeHandler },
			{ "SetOnUnsubscribeHandler", &IMqttClientInterface::execSetOnUnsubscribeHandler },
			{ "Subscribe", &IMqttClientInterface::execSubscribe },
			{ "Unsubscribe", &IMqttClientInterface::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Connect_Statics
	{
		struct MqttClientInterface_eventConnect_Parms
		{
			FMqttConnectionData connectionData;
			FScriptDelegate onConnectCallback;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_connectionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onConnectCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onConnectCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_connectionData = { "connectionData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventConnect_Parms, connectionData), Z_Construct_UScriptStruct_FMqttConnectionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback = { "onConnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventConnect_Parms, onConnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_connectionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::NewProp_onConnectCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Connect to MQTT broker\n\x09 * @param connectionData - structure with data required to connect to MQTT broker (host url, port, client id etc.)\n\x09 * @param onConnectCallback - callback function handler triigered after client successfully established connection with MQTT broker \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Connect to MQTT broker\n@param connectionData - structure with data required to connect to MQTT broker (host url, port, client id etc.)\n@param onConnectCallback - callback function handler triigered after client successfully established connection with MQTT broker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Connect", nullptr, nullptr, sizeof(MqttClientInterface_eventConnect_Parms), Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics
	{
		struct MqttClientInterface_eventDisconnect_Parms
		{
			FScriptDelegate onDisconnectCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onDisconnectCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onDisconnectCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback = { "onDisconnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventDisconnect_Parms, onDisconnectCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::NewProp_onDisconnectCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Disconnect from MQTT broker\n\x09 * @param onDisconnectCallback - callback function handler triigered after client was disconnected from MQTT broker\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Disconnect from MQTT broker\n@param onDisconnectCallback - callback function handler triigered after client was disconnected from MQTT broker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Disconnect", nullptr, nullptr, sizeof(MqttClientInterface_eventDisconnect_Parms), Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Publish_Statics
	{
		struct MqttClientInterface_eventPublish_Parms
		{
			FMqttMessage message;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventPublish_Parms, message), Z_Construct_UScriptStruct_FMqttMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Publish message\n\x09 * @param message - structure with message data (topic, QoS, payload etc.)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Publish message\n@param message - structure with message data (topic, QoS, payload etc.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Publish", nullptr, nullptr, sizeof(MqttClientInterface_eventPublish_Parms), Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Publish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Publish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics
	{
		struct MqttClientInterface_eventSetOnErrorHandler_Parms
		{
			FScriptDelegate onErrorCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onErrorCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onErrorCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback = { "onErrorCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnErrorHandler_Parms, onErrorCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMqttErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::NewProp_onErrorCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Set handler for error event\n\x09 * @param onErrorCallback - callback function handler triigered after any MQTT-related error occured\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Set handler for error event\n@param onErrorCallback - callback function handler triigered after any MQTT-related error occured" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnErrorHandler", nullptr, nullptr, sizeof(MqttClientInterface_eventSetOnErrorHandler_Parms), Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics
	{
		struct MqttClientInterface_eventSetOnMessageHandler_Parms
		{
			FScriptDelegate onMessageCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onMessageCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onMessageCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback = { "onMessageCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnMessageHandler_Parms, onMessageCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::NewProp_onMessageCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Set handler for message receiving event\n\x09 * @param onMessageCallback - callback function handler triigered after client received message from MQTT broker\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Set handler for message receiving event\n@param onMessageCallback - callback function handler triigered after client received message from MQTT broker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnMessageHandler", nullptr, nullptr, sizeof(MqttClientInterface_eventSetOnMessageHandler_Parms), Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics
	{
		struct MqttClientInterface_eventSetOnPublishHandler_Parms
		{
			FScriptDelegate onPublishCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onPublishCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onPublishCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback = { "onPublishCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnPublishHandler_Parms, onPublishCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnPublishDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::NewProp_onPublishCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Set handler for message publishing event\n\x09 * @param onPublishCallback - callback function handler triigered after client message was published to MQTT broker\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Set handler for message publishing event\n@param onPublishCallback - callback function handler triigered after client message was published to MQTT broker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnPublishHandler", nullptr, nullptr, sizeof(MqttClientInterface_eventSetOnPublishHandler_Parms), Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics
	{
		struct MqttClientInterface_eventSetOnSubscribeHandler_Parms
		{
			FScriptDelegate onSubscribeCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSubscribeCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSubscribeCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback = { "onSubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnSubscribeHandler_Parms, onSubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnSubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Set handler for subscription event\n\x09 * @param onSubscribeCallback - callback function handler triigered after client subscribed to topic exposed by MQTT broker\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Set handler for subscription event\n@param onSubscribeCallback - callback function handler triigered after client subscribed to topic exposed by MQTT broker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnSubscribeHandler", nullptr, nullptr, sizeof(MqttClientInterface_eventSetOnSubscribeHandler_Parms), Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics
	{
		struct MqttClientInterface_eventSetOnUnsubscribeHandler_Parms
		{
			FScriptDelegate onUnsubscribeCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onUnsubscribeCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onUnsubscribeCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback = { "onUnsubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventSetOnUnsubscribeHandler_Parms, onUnsubscribeCallback), Z_Construct_UDelegateFunction_MqttUtilities_OnUnsubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Set handler for unsubscription event\n\x09 * @param onUnsubscribeCallback - callback function handler triigered after client unsubscribed from topic exposed by MQTT broker\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Set handler for unsubscription event\n@param onUnsubscribeCallback - callback function handler triigered after client unsubscribed from topic exposed by MQTT broker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "SetOnUnsubscribeHandler", nullptr, nullptr, sizeof(MqttClientInterface_eventSetOnUnsubscribeHandler_Parms), Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics
	{
		struct MqttClientInterface_eventSubscribe_Parms
		{
			FString topic;
			int32 qos;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_qos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventSubscribe_Parms, topic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_qos = { "qos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventSubscribe_Parms, qos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::NewProp_qos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Subscribe to topic\n\x09 * @param topic - name of the topic\n\x09 * @param qos - level of quality of service\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Subscribe to topic\n@param topic - name of the topic\n@param qos - level of quality of service" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Subscribe", nullptr, nullptr, sizeof(MqttClientInterface_eventSubscribe_Parms), Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Subscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Subscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics
	{
		struct MqttClientInterface_eventUnsubscribe_Parms
		{
			FString topic;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttClientInterface_eventUnsubscribe_Parms, topic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::NewProp_topic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Unsubscribe from topic\n\x09 * @param topic - name of the topic\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
		{ "ToolTip", "Unsubscribe from topic\n@param topic - name of the topic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientInterface, nullptr, "Unsubscribe", nullptr, nullptr, sizeof(MqttClientInterface_eventUnsubscribe_Parms), Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientInterface_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttClientInterface_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister()
	{
		return UMqttClientInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMqttClientInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttClientInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMqttClientInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttClientInterface_Connect, "Connect" }, // 1853511088
		{ &Z_Construct_UFunction_UMqttClientInterface_Disconnect, "Disconnect" }, // 3581309108
		{ &Z_Construct_UFunction_UMqttClientInterface_Publish, "Publish" }, // 343191429
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnErrorHandler, "SetOnErrorHandler" }, // 1395248126
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnMessageHandler, "SetOnMessageHandler" }, // 2620309605
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnPublishHandler, "SetOnPublishHandler" }, // 3323109288
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnSubscribeHandler, "SetOnSubscribeHandler" }, // 2150917568
		{ &Z_Construct_UFunction_UMqttClientInterface_SetOnUnsubscribeHandler, "SetOnUnsubscribeHandler" }, // 4118612204
		{ &Z_Construct_UFunction_UMqttClientInterface_Subscribe, "Subscribe" }, // 2950358397
		{ &Z_Construct_UFunction_UMqttClientInterface_Unsubscribe, "Unsubscribe" }, // 685002163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interface/MqttClientInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttClientInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMqttClientInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMqttClientInterface_Statics::ClassParams = {
		&UMqttClientInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMqttClientInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMqttClientInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMqttClientInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMqttClientInterface, 2453169018);
	template<> MQTTUTILITIES_API UClass* StaticClass<UMqttClientInterface>()
	{
		return UMqttClientInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMqttClientInterface(Z_Construct_UClass_UMqttClientInterface, &UMqttClientInterface::StaticClass, TEXT("/Script/MqttUtilities"), TEXT("UMqttClientInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClientInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
