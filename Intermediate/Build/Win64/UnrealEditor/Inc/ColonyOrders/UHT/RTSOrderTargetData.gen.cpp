// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderTargetData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderTargetData() {}

// Begin Cross Module References
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTargetData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin ScriptStruct FRTSOrderTargetData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTSOrderTargetData;
class UScriptStruct* FRTSOrderTargetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderTargetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTSOrderTargetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTSOrderTargetData, (UObject*)Z_Construct_UPackage__Script_ColonyOrders(), TEXT("RTSOrderTargetData"));
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderTargetData.OuterSingleton;
}
template<> COLONYORDERS_API UScriptStruct* StaticStruct<FRTSOrderTargetData>()
{
	return FRTSOrderTargetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Targeting data for an order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTargetData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Targeting data for an order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target actor. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTargetData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target location. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTargetData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target tags. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderTargetData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTSOrderTargetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderTargetData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderTargetData, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTSOrderTargetData, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
	nullptr,
	&NewStructOps,
	"RTSOrderTargetData",
	Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::PropPointers),
	sizeof(FRTSOrderTargetData),
	alignof(FRTSOrderTargetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTargetData()
{
	if (!Z_Registration_Info_UScriptStruct_RTSOrderTargetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTSOrderTargetData.InnerSingleton, Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTSOrderTargetData.InnerSingleton;
}
// End ScriptStruct FRTSOrderTargetData

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTargetData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRTSOrderTargetData::StaticStruct, Z_Construct_UScriptStruct_FRTSOrderTargetData_Statics::NewStructOps, TEXT("RTSOrderTargetData"), &Z_Registration_Info_UScriptStruct_RTSOrderTargetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTSOrderTargetData), 2315840092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTargetData_h_2735981355(TEXT("/Script/ColonyOrders"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTargetData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderTargetData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
