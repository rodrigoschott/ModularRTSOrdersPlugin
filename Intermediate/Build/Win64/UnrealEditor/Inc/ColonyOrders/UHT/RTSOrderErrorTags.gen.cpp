// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderErrorTags.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderErrorTags() {}

// Begin Cross Module References
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderErrorTags();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin ScriptStruct FRTSOrderErrorTags
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTSOrderErrorTags;
class UScriptStruct* FRTSOrderErrorTags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderErrorTags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTSOrderErrorTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTSOrderErrorTags, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("RTSOrderErrorTags"));
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderErrorTags.OuterSingleton;
}
template<> COLONYORDERS_API UScriptStruct* StaticStruct<FRTSOrderErrorTags>()
{
	return FRTSOrderErrorTags::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Encloses collections of missing, blocking and error tags that describe why an order cannot be issued.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderErrorTags.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Encloses collections of missing, blocking and error tags that describe why an order cannot be issued." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissingTags_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of required tags that are missing. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderErrorTags.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of required tags that are missing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingTags_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of tags that are blocking the execution of the order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderErrorTags.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of tags that are blocking the execution of the order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTags_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of additional error tags that describe additional missing requirements for the execution of the order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderErrorTags.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of additional error tags that describe additional missing requirements for the execution of the order." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MissingTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockingTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTSOrderErrorTags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::NewProp_MissingTags = { "MissingTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderErrorTags, MissingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissingTags_MetaData), NewProp_MissingTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::NewProp_BlockingTags = { "BlockingTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderErrorTags, BlockingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingTags_MetaData), NewProp_BlockingTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::NewProp_ErrorTags = { "ErrorTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderErrorTags, ErrorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTags_MetaData), NewProp_ErrorTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::NewProp_MissingTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::NewProp_BlockingTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::NewProp_ErrorTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	&NewStructOps,
	"RTSOrderErrorTags",
	Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::PropPointers),
	sizeof(FRTSOrderErrorTags),
	alignof(FRTSOrderErrorTags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderErrorTags()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderErrorTags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTSOrderErrorTags.InnerSingleton, Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderErrorTags.InnerSingleton;
}
// End ScriptStruct FRTSOrderErrorTags

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderErrorTags_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRTSOrderErrorTags::StaticStruct, Z_Construct_UScriptStruct_FRTSOrderErrorTags_Statics::NewStructOps, TEXT("RTSOrderErrorTags"), &Z_Registration_Info_UScriptStruct_RTSOrderErrorTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTSOrderErrorTags), 2904688719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderErrorTags_h_1210424728(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderErrorTags_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderErrorTags_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
