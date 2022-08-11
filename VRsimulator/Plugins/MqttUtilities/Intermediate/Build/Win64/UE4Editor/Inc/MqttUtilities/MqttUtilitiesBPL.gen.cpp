// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MqttUtilities/Public/MqttUtilitiesBPL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttUtilitiesBPL() {}
// Cross Module References
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttUtilitiesBPL_NoRegister();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttUtilitiesBPL();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MqttUtilities();
	MQTTUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig();
	MQTTUTILITIES_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMqttUtilitiesBPL::execCreateMqttClient)
	{
		P_GET_STRUCT(FMqttClientConfig,Z_Param_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IMqttClientInterface>*)Z_Param__Result=UMqttUtilitiesBPL::CreateMqttClient(Z_Param_config);
		P_NATIVE_END;
	}
	void UMqttUtilitiesBPL::StaticRegisterNativesUMqttUtilitiesBPL()
	{
		UClass* Class = UMqttUtilitiesBPL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMqttClient", &UMqttUtilitiesBPL::execCreateMqttClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics
	{
		struct MqttUtilitiesBPL_eventCreateMqttClient_Parms
		{
			FMqttClientConfig config;
			TScriptInterface<IMqttClientInterface> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_config;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttUtilitiesBPL_eventCreateMqttClient_Parms, config), Z_Construct_UScriptStruct_FMqttClientConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttUtilitiesBPL_eventCreateMqttClient_Parms, ReturnValue), Z_Construct_UClass_UMqttClientInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::NewProp_config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\n\x09 * Create new instance of MQTT client\n\x09 *\n\x09 * @return - reference to MQTT client interface object\n\x09 */" },
		{ "ModuleRelativePath", "Public/MqttUtilitiesBPL.h" },
		{ "ToolTip", "Create new instance of MQTT client\n\n@return - reference to MQTT client interface object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttUtilitiesBPL, nullptr, "CreateMqttClient", nullptr, nullptr, sizeof(MqttUtilitiesBPL_eventCreateMqttClient_Parms), Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMqttUtilitiesBPL_NoRegister()
	{
		return UMqttUtilitiesBPL::StaticClass();
	}
	struct Z_Construct_UClass_UMqttUtilitiesBPL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttUtilitiesBPL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MqttUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMqttUtilitiesBPL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttUtilitiesBPL_CreateMqttClient, "CreateMqttClient" }, // 4151850000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttUtilitiesBPL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MqttUtilitiesBPL.h" },
		{ "ModuleRelativePath", "Public/MqttUtilitiesBPL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttUtilitiesBPL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttUtilitiesBPL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMqttUtilitiesBPL_Statics::ClassParams = {
		&UMqttUtilitiesBPL::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMqttUtilitiesBPL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttUtilitiesBPL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMqttUtilitiesBPL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMqttUtilitiesBPL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMqttUtilitiesBPL, 2575595562);
	template<> MQTTUTILITIES_API UClass* StaticClass<UMqttUtilitiesBPL>()
	{
		return UMqttUtilitiesBPL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMqttUtilitiesBPL(Z_Construct_UClass_UMqttUtilitiesBPL, &UMqttUtilitiesBPL::StaticClass, TEXT("/Script/MqttUtilities"), TEXT("UMqttUtilitiesBPL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttUtilitiesBPL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
