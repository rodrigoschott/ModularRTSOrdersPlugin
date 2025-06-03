// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSCharacterAIOrder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSCharacterAIOrder() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSCharacterAIOrder();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSCharacterAIOrder_NoRegister();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderWithBehavior();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSTargetType();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSCharacterAIOrder
void URTSCharacterAIOrder::StaticRegisterNativesURTSCharacterAIOrder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSCharacterAIOrder);
UClass* Z_Construct_UClass_URTSCharacterAIOrder_NoRegister()
{
	return URTSCharacterAIOrder::StaticClass();
}
struct Z_Construct_UClass_URTSCharacterAIOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents an order type that is meant to be issued to pawn that are controlled by the 'URTSCharacterAIController'.\n */" },
#endif
		{ "IncludePath", "Orders/RTSCharacterAIOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIOrder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents an order type that is meant to be issued to pawn that are controlled by the 'URTSCharacterAIController'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target type this order is using. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIOrder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target type this order is using." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupExecutionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * To how many and which of the selected units should this order be issued to.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIOrder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To how many and which of the selected units should this order be issued to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCreatingIndividualTargetLocations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this order type creates individual target locations for a group of actors */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSCharacterAIOrder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this order type creates individual target locations for a group of actors" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupExecutionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupExecutionType;
	static void NewProp_bIsCreatingIndividualTargetLocations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCreatingIndividualTargetLocations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSCharacterAIOrder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSCharacterAIOrder, TargetType), Z_Construct_UEnum_ColonyOrders_ERTSTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) }; // 406532435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_GroupExecutionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_GroupExecutionType = { "GroupExecutionType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSCharacterAIOrder, GroupExecutionType), Z_Construct_UEnum_ColonyOrders_ERTSOrderGroupExecutionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupExecutionType_MetaData), NewProp_GroupExecutionType_MetaData) }; // 286734233
void Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_bIsCreatingIndividualTargetLocations_SetBit(void* Obj)
{
	((URTSCharacterAIOrder*)Obj)->bIsCreatingIndividualTargetLocations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_bIsCreatingIndividualTargetLocations = { "bIsCreatingIndividualTargetLocations", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSCharacterAIOrder), &Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_bIsCreatingIndividualTargetLocations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCreatingIndividualTargetLocations_MetaData), NewProp_bIsCreatingIndividualTargetLocations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSCharacterAIOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_TargetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_GroupExecutionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_GroupExecutionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSCharacterAIOrder_Statics::NewProp_bIsCreatingIndividualTargetLocations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSCharacterAIOrder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSCharacterAIOrder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTSOrderWithBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSCharacterAIOrder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSCharacterAIOrder_Statics::ClassParams = {
	&URTSCharacterAIOrder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URTSCharacterAIOrder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSCharacterAIOrder_Statics::PropPointers),
	0,
	0x001100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSCharacterAIOrder_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSCharacterAIOrder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSCharacterAIOrder()
{
	if (!Z_Registration_Info_UClass_URTSCharacterAIOrder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSCharacterAIOrder.OuterSingleton, Z_Construct_UClass_URTSCharacterAIOrder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSCharacterAIOrder.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSCharacterAIOrder>()
{
	return URTSCharacterAIOrder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSCharacterAIOrder);
URTSCharacterAIOrder::~URTSCharacterAIOrder() {}
// End Class URTSCharacterAIOrder

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSCharacterAIOrder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSCharacterAIOrder, URTSCharacterAIOrder::StaticClass, TEXT("URTSCharacterAIOrder"), &Z_Registration_Info_UClass_URTSCharacterAIOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSCharacterAIOrder), 1885215813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSCharacterAIOrder_h_1359079537(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSCharacterAIOrder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSCharacterAIOrder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
