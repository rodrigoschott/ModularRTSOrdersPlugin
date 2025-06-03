// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSOrderWithDisplay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSOrderWithDisplay() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrder();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderWithDisplay();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSOrderWithDisplay_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSOrderWithDisplay
void URTSOrderWithDisplay::StaticRegisterNativesURTSOrderWithDisplay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSOrderWithDisplay);
UClass* Z_Construct_UClass_URTSOrderWithDisplay_NoRegister()
{
	return URTSOrderWithDisplay::StaticClass();
}
struct Z_Construct_UClass_URTSOrderWithDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An order with a fixed icon, name and description text that is independent from the index.\n */" },
#endif
		{ "IncludePath", "Orders/RTSOrderWithDisplay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An order with a fixed icon, name and description text that is independent from the index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Normal icon of the order. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normal icon of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hovered icon of the order. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hovered icon of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pressed icon of the order. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pressed icon of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Disabled icon of the order. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disabled icon of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the order. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Description of the order. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of the order. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedOrderButtonIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use a fixed index of the button when shown in the UI, instead of just lining it up among others. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use a fixed index of the button when shown in the UI, instead of just lining it up among others." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderButtonIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of the button when shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSOrderWithDisplay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the button when shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PressedIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisabledIcon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static void NewProp_bUseFixedOrderButtonIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedOrderButtonIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OrderButtonIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSOrderWithDisplay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_NormalIcon = { "NormalIcon", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderWithDisplay, NormalIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalIcon_MetaData), NewProp_NormalIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_HoveredIcon = { "HoveredIcon", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderWithDisplay, HoveredIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredIcon_MetaData), NewProp_HoveredIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_PressedIcon = { "PressedIcon", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderWithDisplay, PressedIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedIcon_MetaData), NewProp_PressedIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_DisabledIcon = { "DisabledIcon", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderWithDisplay, DisabledIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledIcon_MetaData), NewProp_DisabledIcon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderWithDisplay, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderWithDisplay, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_bUseFixedOrderButtonIndex_SetBit(void* Obj)
{
	((URTSOrderWithDisplay*)Obj)->bUseFixedOrderButtonIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_bUseFixedOrderButtonIndex = { "bUseFixedOrderButtonIndex", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTSOrderWithDisplay), &Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_bUseFixedOrderButtonIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedOrderButtonIndex_MetaData), NewProp_bUseFixedOrderButtonIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_OrderButtonIndex = { "OrderButtonIndex", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSOrderWithDisplay, OrderButtonIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderButtonIndex_MetaData), NewProp_OrderButtonIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSOrderWithDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_NormalIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_HoveredIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_PressedIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_DisabledIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_bUseFixedOrderButtonIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSOrderWithDisplay_Statics::NewProp_OrderButtonIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderWithDisplay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSOrderWithDisplay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTSOrder,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderWithDisplay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSOrderWithDisplay_Statics::ClassParams = {
	&URTSOrderWithDisplay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URTSOrderWithDisplay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderWithDisplay_Statics::PropPointers),
	0,
	0x001100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSOrderWithDisplay_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSOrderWithDisplay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSOrderWithDisplay()
{
	if (!Z_Registration_Info_UClass_URTSOrderWithDisplay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSOrderWithDisplay.OuterSingleton, Z_Construct_UClass_URTSOrderWithDisplay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSOrderWithDisplay.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSOrderWithDisplay>()
{
	return URTSOrderWithDisplay::StaticClass();
}
URTSOrderWithDisplay::URTSOrderWithDisplay() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSOrderWithDisplay);
URTSOrderWithDisplay::~URTSOrderWithDisplay() {}
// End Class URTSOrderWithDisplay

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSOrderWithDisplay, URTSOrderWithDisplay::StaticClass, TEXT("URTSOrderWithDisplay"), &Z_Registration_Info_UClass_URTSOrderWithDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSOrderWithDisplay), 185657009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_1142405253(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
