// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderWithBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderWithBehavior() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderWithBehavior();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderWithBehavior_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderWithDisplay();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSOrderWithBehavior
void URTSOrderWithBehavior::StaticRegisterNativesURTSOrderWithBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSOrderWithBehavior);
UClass* Z_Construct_UClass_URTSOrderWithBehavior_NoRegister()
{
	return URTSOrderWithBehavior::StaticClass();
}
struct Z_Construct_UClass_URTSOrderWithBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Order with custom behavior in form of a behavior tree.\n */" },
#endif
		{ "IncludePath", "Orders/RTSOrderWithBehavior.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithBehavior.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Order with custom behavior in form of a behavior tree." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The behavior tree that should run in order to obey this order. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithBehavior.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The behavior tree that should run in order to obey this order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRestartBehaviourTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to restart the behavior tree whenever a new order of this type is issued. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithBehavior.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to restart the behavior tree whenever a new order of this type is issued." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcquisitionRadiusOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The specific acquisition radius for this order. */" },
#endif
		{ "EditCondition", "bIsAcquisitionRadiusOverridden" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithBehavior.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The specific acquisition radius for this order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAcquisitionRadiusOverridden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this order uses a specific acquisition radius. */" },
#endif
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithBehavior.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this order uses a specific acquisition radius." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static void NewProp_bShouldRestartBehaviourTree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRestartBehaviourTree;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcquisitionRadiusOverride;
	static void NewProp_bIsAcquisitionRadiusOverridden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAcquisitionRadiusOverridden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSOrderWithBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderWithBehavior, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
void Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_bShouldRestartBehaviourTree_SetBit(void* Obj)
{
	((URTSOrderWithBehavior*)Obj)->bShouldRestartBehaviourTree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_bShouldRestartBehaviourTree = { "bShouldRestartBehaviourTree", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSOrderWithBehavior), &Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_bShouldRestartBehaviourTree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRestartBehaviourTree_MetaData), NewProp_bShouldRestartBehaviourTree_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_AcquisitionRadiusOverride = { "AcquisitionRadiusOverride", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderWithBehavior, AcquisitionRadiusOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcquisitionRadiusOverride_MetaData), NewProp_AcquisitionRadiusOverride_MetaData) };
void Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_bIsAcquisitionRadiusOverridden_SetBit(void* Obj)
{
	((URTSOrderWithBehavior*)Obj)->bIsAcquisitionRadiusOverridden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_bIsAcquisitionRadiusOverridden = { "bIsAcquisitionRadiusOverridden", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSOrderWithBehavior), &Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_bIsAcquisitionRadiusOverridden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAcquisitionRadiusOverridden_MetaData), NewProp_bIsAcquisitionRadiusOverridden_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSOrderWithBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_bShouldRestartBehaviourTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_AcquisitionRadiusOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithBehavior_Statics::NewProp_bIsAcquisitionRadiusOverridden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderWithBehavior_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSOrderWithBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTSOrderWithDisplay,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderWithBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSOrderWithBehavior_Statics::ClassParams = {
	&URTSOrderWithBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URTSOrderWithBehavior_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderWithBehavior_Statics::PropPointers),
	0,
	0x001100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderWithBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSOrderWithBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSOrderWithBehavior()
{
	if (!Z_Registration_Info_UClass_URTSOrderWithBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSOrderWithBehavior.OuterSingleton, Z_Construct_UClass_URTSOrderWithBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSOrderWithBehavior.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSOrderWithBehavior>()
{
	return URTSOrderWithBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSOrderWithBehavior);
URTSOrderWithBehavior::~URTSOrderWithBehavior() {}
// End Class URTSOrderWithBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSOrderWithBehavior, URTSOrderWithBehavior::StaticClass, TEXT("URTSOrderWithBehavior"), &Z_Registration_Info_UClass_URTSOrderWithBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSOrderWithBehavior), 3173474667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_2849629127(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
