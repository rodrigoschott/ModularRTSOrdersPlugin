// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderPreview.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderPreview() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_ARTSOrderPreview();
COLONYORDERS_API UClass* Z_Construct_UClass_ARTSOrderPreview_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class ARTSOrderPreview Function GetInstigatorAbility
struct Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics
{
	struct RTSOrderPreview_eventGetInstigatorAbility_Parms
	{
		TSubclassOf<UGameplayAbility> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreview.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderPreview_eventGetInstigatorAbility_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSOrderPreview, nullptr, "GetInstigatorAbility", nullptr, nullptr, Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::RTSOrderPreview_eventGetInstigatorAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::RTSOrderPreview_eventGetInstigatorAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSOrderPreview::execGetInstigatorAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayAbility>*)Z_Param__Result=P_THIS->GetInstigatorAbility();
	P_NATIVE_END;
}
// End Class ARTSOrderPreview Function GetInstigatorAbility

// Begin Class ARTSOrderPreview Function ReceiveOnInstigatorAbilityInitialized
static const FName NAME_ARTSOrderPreview_ReceiveOnInstigatorAbilityInitialized = FName(TEXT("ReceiveOnInstigatorAbilityInitialized"));
void ARTSOrderPreview::ReceiveOnInstigatorAbilityInitialized()
{
	UFunction* Func = FindFunctionChecked(NAME_ARTSOrderPreview_ReceiveOnInstigatorAbilityInitialized);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ARTSOrderPreview_ReceiveOnInstigatorAbilityInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
		{ "DisplayName", "OnInstigatorAbilityInitialized" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreview.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSOrderPreview_ReceiveOnInstigatorAbilityInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSOrderPreview, nullptr, "ReceiveOnInstigatorAbilityInitialized", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSOrderPreview_ReceiveOnInstigatorAbilityInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSOrderPreview_ReceiveOnInstigatorAbilityInitialized_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARTSOrderPreview_ReceiveOnInstigatorAbilityInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSOrderPreview_ReceiveOnInstigatorAbilityInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARTSOrderPreview Function ReceiveOnInstigatorAbilityInitialized

// Begin Class ARTSOrderPreview Function SetInstigatorAbility
struct Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics
{
	struct RTSOrderPreview_eventSetInstigatorAbility_Parms
	{
		TSubclassOf<UGameplayAbility> Ability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreview.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSOrderPreview_eventSetInstigatorAbility_Parms, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::NewProp_Ability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSOrderPreview, nullptr, "SetInstigatorAbility", nullptr, nullptr, Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::RTSOrderPreview_eventSetInstigatorAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::RTSOrderPreview_eventSetInstigatorAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTSOrderPreview::execSetInstigatorAbility)
{
	P_GET_OBJECT(UClass,Z_Param_Ability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInstigatorAbility(Z_Param_Ability);
	P_NATIVE_END;
}
// End Class ARTSOrderPreview Function SetInstigatorAbility

// Begin Class ARTSOrderPreview
void ARTSOrderPreview::StaticRegisterNativesARTSOrderPreview()
{
	UClass* Class = ARTSOrderPreview::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstigatorAbility", &ARTSOrderPreview::execGetInstigatorAbility },
		{ "SetInstigatorAbility", &ARTSOrderPreview::execSetInstigatorAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSOrderPreview);
UClass* Z_Construct_UClass_ARTSOrderPreview_NoRegister()
{
	return ARTSOrderPreview::StaticClass();
}
struct Z_Construct_UClass_ARTSOrderPreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Previews the execution of orders and abilities.*/" },
#endif
		{ "IncludePath", "Orders/RTSOrderPreview.h" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreview.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previews the execution of orders and abilities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorAbility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** InstigatorAbility will be used to get information, like the range of an ability, for the OrderPreview */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderPreview.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InstigatorAbility will be used to get information, like the range of an ability, for the OrderPreview" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstigatorAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSOrderPreview_GetInstigatorAbility, "GetInstigatorAbility" }, // 3110389894
		{ &Z_Construct_UFunction_ARTSOrderPreview_ReceiveOnInstigatorAbilityInitialized, "ReceiveOnInstigatorAbilityInitialized" }, // 3425036088
		{ &Z_Construct_UFunction_ARTSOrderPreview_SetInstigatorAbility, "SetInstigatorAbility" }, // 206689842
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSOrderPreview>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARTSOrderPreview_Statics::NewProp_InstigatorAbility = { "InstigatorAbility", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSOrderPreview, InstigatorAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorAbility_MetaData), NewProp_InstigatorAbility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSOrderPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSOrderPreview_Statics::NewProp_InstigatorAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSOrderPreview_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARTSOrderPreview_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSOrderPreview_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSOrderPreview_Statics::ClassParams = {
	&ARTSOrderPreview::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARTSOrderPreview_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARTSOrderPreview_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSOrderPreview_Statics::Class_MetaDataParams), Z_Construct_UClass_ARTSOrderPreview_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARTSOrderPreview()
{
	if (!Z_Registration_Info_UClass_ARTSOrderPreview.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSOrderPreview.OuterSingleton, Z_Construct_UClass_ARTSOrderPreview_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARTSOrderPreview.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<ARTSOrderPreview>()
{
	return ARTSOrderPreview::StaticClass();
}
ARTSOrderPreview::ARTSOrderPreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSOrderPreview);
ARTSOrderPreview::~ARTSOrderPreview() {}
// End Class ARTSOrderPreview

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARTSOrderPreview, ARTSOrderPreview::StaticClass, TEXT("ARTSOrderPreview"), &Z_Registration_Info_UClass_ARTSOrderPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSOrderPreview), 2078347782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_119376035(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
