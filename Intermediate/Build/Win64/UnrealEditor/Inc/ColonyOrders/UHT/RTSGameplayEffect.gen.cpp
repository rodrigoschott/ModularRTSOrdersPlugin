// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/AbilitySystem/RTSGameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSGameplayEffect() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSGameplayEffect();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSGameplayEffect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class URTSGameplayEffect Function GetEffectDescription
struct Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics
{
	struct RTSGameplayEffect_eventGetEffectDescription_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the description of this effect. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the description of this effect. Can be shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayEffect_eventGetEffectDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayEffect, nullptr, "GetEffectDescription", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::RTSGameplayEffect_eventGetEffectDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::RTSGameplayEffect_eventGetEffectDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayEffect::execGetEffectDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetEffectDescription();
	P_NATIVE_END;
}
// End Class URTSGameplayEffect Function GetEffectDescription

// Begin Class URTSGameplayEffect Function GetEffectName
struct Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics
{
	struct RTSGameplayEffect_eventGetEffectName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the name of this effect. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name of this effect. Can be shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayEffect_eventGetEffectName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayEffect, nullptr, "GetEffectName", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::RTSGameplayEffect_eventGetEffectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::RTSGameplayEffect_eventGetEffectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayEffect_GetEffectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayEffect_GetEffectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayEffect::execGetEffectName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetEffectName();
	P_NATIVE_END;
}
// End Class URTSGameplayEffect Function GetEffectName

// Begin Class URTSGameplayEffect Function GetIcon
struct Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics
{
	struct RTSGameplayEffect_eventGetIcon_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the icon of this effect. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the icon of this effect. Can be shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSGameplayEffect_eventGetIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSGameplayEffect, nullptr, "GetIcon", nullptr, nullptr, Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::RTSGameplayEffect_eventGetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::RTSGameplayEffect_eventGetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSGameplayEffect_GetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSGameplayEffect_GetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTSGameplayEffect::execGetIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetIcon();
	P_NATIVE_END;
}
// End Class URTSGameplayEffect Function GetIcon

// Begin Class URTSGameplayEffect
void URTSGameplayEffect::StaticRegisterNativesURTSGameplayEffect()
{
	UClass* Class = URTSGameplayEffect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEffectDescription", &URTSGameplayEffect::execGetEffectDescription },
		{ "GetEffectName", &URTSGameplayEffect::execGetEffectName },
		{ "GetIcon", &URTSGameplayEffect::execGetIcon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSGameplayEffect);
UClass* Z_Construct_UClass_URTSGameplayEffect_NoRegister()
{
	return URTSGameplayEffect::StaticClass();
}
struct Z_Construct_UClass_URTSGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gameplay effect with RTS features, such as an UI icon. */" },
#endif
		{ "HideCategories", "Advanced Input" },
		{ "IncludePath", "AbilitySystem/RTSGameplayEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayEffect.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect with RTS features, such as an UI icon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Icon of this ability. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon of this ability. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of this effect. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of this effect. Can be shown in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Description of this effect. Can be shown in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSGameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of this effect. Can be shown in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_EffectName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_EffectDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSGameplayEffect_GetEffectDescription, "GetEffectDescription" }, // 2975974973
		{ &Z_Construct_UFunction_URTSGameplayEffect_GetEffectName, "GetEffectName" }, // 902530956
		{ &Z_Construct_UFunction_URTSGameplayEffect_GetIcon, "GetIcon" }, // 3117015984
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTSGameplayEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTSGameplayEffect_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayEffect, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URTSGameplayEffect_Statics::NewProp_EffectName = { "EffectName", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayEffect, EffectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectName_MetaData), NewProp_EffectName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URTSGameplayEffect_Statics::NewProp_EffectDescription = { "EffectDescription", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTSGameplayEffect, EffectDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectDescription_MetaData), NewProp_EffectDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTSGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayEffect_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayEffect_Statics::NewProp_EffectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTSGameplayEffect_Statics::NewProp_EffectDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSGameplayEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTSGameplayEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSGameplayEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSGameplayEffect_Statics::ClassParams = {
	&URTSGameplayEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URTSGameplayEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URTSGameplayEffect_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSGameplayEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSGameplayEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSGameplayEffect()
{
	if (!Z_Registration_Info_UClass_URTSGameplayEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSGameplayEffect.OuterSingleton, Z_Construct_UClass_URTSGameplayEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSGameplayEffect.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSGameplayEffect>()
{
	return URTSGameplayEffect::StaticClass();
}
URTSGameplayEffect::URTSGameplayEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSGameplayEffect);
URTSGameplayEffect::~URTSGameplayEffect() {}
// End Class URTSGameplayEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSGameplayEffect, URTSGameplayEffect::StaticClass, TEXT("URTSGameplayEffect"), &Z_Registration_Info_UClass_URTSGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSGameplayEffect), 53178327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_1118196906(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
