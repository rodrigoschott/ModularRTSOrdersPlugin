// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrder.h"
#include "ColonyOrders/Public/Orders/RTSOrderTagRequirements.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrder() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrder();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrder_NoRegister();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy();
COLONYORDERS_API UEnum* Z_Construct_UEnum_ColonyOrders_ERTSOrderResult();
COLONYORDERS_API UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTagRequirements();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Delegate FRTSOrderCallback
struct Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics
{
	struct _Script_ColonyOrders_eventRTSOrderCallback_Parms
	{
		ERTSOrderResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSOrder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColonyOrders_eventRTSOrderCallback_Parms, Result), Z_Construct_UEnum_ColonyOrders_ERTSOrderResult, METADATA_PARAMS(0, nullptr) }; // 934721529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColonyOrders, nullptr, "RTSOrderCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSOrderCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::_Script_ColonyOrders_eventRTSOrderCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColonyOrders_RTSOrderCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRTSOrderCallback_DelegateWrapper(const FMulticastScriptDelegate& RTSOrderCallback, ERTSOrderResult Result)
{
	struct _Script_ColonyOrders_eventRTSOrderCallback_Parms
	{
		ERTSOrderResult Result;
	};
	_Script_ColonyOrders_eventRTSOrderCallback_Parms Parms;
	Parms.Result=Result;
	RTSOrderCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRTSOrderCallback

// Begin Class URTSOrder
void URTSOrder::StaticRegisterNativesURTSOrder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSOrder);
UClass* Z_Construct_UClass_URTSOrder_NoRegister()
{
	return URTSOrder::StaticClass();
}
struct Z_Construct_UClass_URTSOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents an order type that can be issued to units and buildings.\n */" },
#endif
		{ "IncludePath", "Orders/RTSOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents an order type that can be issued to units and buildings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRequirements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Requirements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag requirements for an order that must be full filled to be issued. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag requirements for an order that must be full filled to be issued." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessTagRequirements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Requirements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag requirements for an order that must be full filled to be to be successful. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag requirements for an order that must be full filled to be to be successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderProcessPolicy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Describes how an order is executed. This might determine how the order is displayed in the UI and it determines\n     * how the order is handled by the order system.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes how an order is executed. This might determine how the order is displayed in the UI and it determines\nhow the order is handled by the order system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Order to issue instead if the player specified an invalid target for this one. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Order to issue instead if the player specified an invalid target for this one." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuccessTagRequirements;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrderProcessPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OrderProcessPolicy;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_FallbackOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSOrder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSOrder_Statics::NewProp_TagRequirements = { "TagRequirements", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrder, TagRequirements), Z_Construct_UScriptStruct_FRTSOrderTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRequirements_MetaData), NewProp_TagRequirements_MetaData) }; // 3444264109
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTSOrder_Statics::NewProp_SuccessTagRequirements = { "SuccessTagRequirements", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrder, SuccessTagRequirements), Z_Construct_UScriptStruct_FRTSOrderTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessTagRequirements_MetaData), NewProp_SuccessTagRequirements_MetaData) }; // 3444264109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTSOrder_Statics::NewProp_OrderProcessPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URTSOrder_Statics::NewProp_OrderProcessPolicy = { "OrderProcessPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrder, OrderProcessPolicy), Z_Construct_UEnum_ColonyOrders_ERTSOrderProcessPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderProcessPolicy_MetaData), NewProp_OrderProcessPolicy_MetaData) }; // 2077137834
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_URTSOrder_Statics::NewProp_FallbackOrder = { "FallbackOrder", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrder, FallbackOrder), Z_Construct_UClass_URTSOrder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackOrder_MetaData), NewProp_FallbackOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrder_Statics::NewProp_TagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrder_Statics::NewProp_SuccessTagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrder_Statics::NewProp_OrderProcessPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrder_Statics::NewProp_OrderProcessPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrder_Statics::NewProp_FallbackOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSOrder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSOrder_Statics::ClassParams = {
	&URTSOrder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URTSOrder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrder_Statics::PropPointers),
	0,
	0x001100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrder_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSOrder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSOrder()
{
	if (!Z_Registration_Info_UClass_URTSOrder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSOrder.OuterSingleton, Z_Construct_UClass_URTSOrder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSOrder.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSOrder>()
{
	return URTSOrder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSOrder);
URTSOrder::~URTSOrder() {}
// End Class URTSOrder

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSOrder, URTSOrder::StaticClass, TEXT("URTSOrder"), &Z_Registration_Info_UClass_URTSOrder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSOrder), 55557837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_3450494972(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
