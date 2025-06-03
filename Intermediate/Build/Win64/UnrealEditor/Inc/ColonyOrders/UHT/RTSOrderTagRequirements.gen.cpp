// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderTagRequirements.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderTagRequirements() {}

// Begin Cross Module References
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTagRequirements();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin ScriptStruct FRTSOrderTagRequirements
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTSOrderTagRequirements;
class UScriptStruct* FRTSOrderTagRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderTagRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTSOrderTagRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTSOrderTagRequirements, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("RTSOrderTagRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderTagRequirements.OuterSingleton;
}
template<> COLONYORDERS_API UScriptStruct* StaticStruct<FRTSOrderTagRequirements>()
{
	return FRTSOrderTagRequirements::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tag requirements for an order that must be full filled to be issued.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTagRequirements.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag requirements for an order that must be full filled to be issued." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRequiredTags_MetaData[] = {
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The order can only be issued if the ordered actor has all of these tags */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTagRequirements.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The order can only be issued if the ordered actor has all of these tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBlockedTags_MetaData[] = {
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The order is blocked if the ordered actor has any of these tags */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTagRequirements.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The order is blocked if the ordered actor has any of these tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRequiredTags_MetaData[] = {
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The order can only be issued if the target actor has all of these tags */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTagRequirements.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The order can only be issued if the target actor has all of these tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBlockedTags_MetaData[] = {
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The order is blocked if the target actor has any of these tags */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTagRequirements.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The order is blocked if the target actor has any of these tags" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBlockedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBlockedTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTSOrderTagRequirements>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::NewProp_SourceRequiredTags = { "SourceRequiredTags", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderTagRequirements, SourceRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRequiredTags_MetaData), NewProp_SourceRequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::NewProp_SourceBlockedTags = { "SourceBlockedTags", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderTagRequirements, SourceBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBlockedTags_MetaData), NewProp_SourceBlockedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::NewProp_TargetRequiredTags = { "TargetRequiredTags", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderTagRequirements, TargetRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRequiredTags_MetaData), NewProp_TargetRequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::NewProp_TargetBlockedTags = { "TargetBlockedTags", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderTagRequirements, TargetBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBlockedTags_MetaData), NewProp_TargetBlockedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::NewProp_SourceRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::NewProp_SourceBlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::NewProp_TargetRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::NewProp_TargetBlockedTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	&NewStructOps,
	"RTSOrderTagRequirements",
	Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::PropPointers),
	sizeof(FRTSOrderTagRequirements),
	alignof(FRTSOrderTagRequirements),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTagRequirements()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderTagRequirements.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTSOrderTagRequirements.InnerSingleton, Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderTagRequirements.InnerSingleton;
}
// End ScriptStruct FRTSOrderTagRequirements

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTagRequirements_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRTSOrderTagRequirements::StaticStruct, Z_Construct_UScriptStruct_FRTSOrderTagRequirements_Statics::NewStructOps, TEXT("RTSOrderTagRequirements"), &Z_Registration_Info_UScriptStruct_RTSOrderTagRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTSOrderTagRequirements), 3444264109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTagRequirements_h_3155796656(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTagRequirements_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTagRequirements_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
