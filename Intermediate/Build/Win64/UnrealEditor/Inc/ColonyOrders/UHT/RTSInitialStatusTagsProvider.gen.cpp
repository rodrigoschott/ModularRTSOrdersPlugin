// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/AbilitySystem/RTSInitialStatusTagsProvider.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSInitialStatusTagsProvider() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSInitialStatusTagsProvider();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSInitialStatusTagsProvider_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Interface URTSInitialStatusTagsProvider Function GetInitialStatusTags
struct RTSInitialStatusTagsProvider_eventGetInitialStatusTags_Parms
{
	FGameplayTagContainer OutTagContainer;
};
void IRTSInitialStatusTagsProvider::GetInitialStatusTags(FGameplayTagContainer& OutTagContainer)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInitialStatusTags instead.");
}
static FName NAME_URTSInitialStatusTagsProvider_GetInitialStatusTags = FName(TEXT("GetInitialStatusTags"));
void IRTSInitialStatusTagsProvider::Execute_GetInitialStatusTags(UObject* O, FGameplayTagContainer& OutTagContainer)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URTSInitialStatusTagsProvider::StaticClass()));
	RTSInitialStatusTagsProvider_eventGetInitialStatusTags_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URTSInitialStatusTagsProvider_GetInitialStatusTags);
	if (Func)
	{
		Parms.OutTagContainer=OutTagContainer;
		O->ProcessEvent(Func, &Parms);
		OutTagContainer=Parms.OutTagContainer;
	}
	else if (auto I = (IRTSInitialStatusTagsProvider*)(O->GetNativeInterfaceAddress(URTSInitialStatusTagsProvider::StaticClass())))
	{
		I->GetInitialStatusTags_Implementation(OutTagContainer);
	}
}
struct Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Should fill the passed tag container with permanent status tags.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSInitialStatusTagsProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should fill the passed tag container with permanent status tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTagContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::NewProp_OutTagContainer = { "OutTagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSInitialStatusTagsProvider_eventGetInitialStatusTags_Parms, OutTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::NewProp_OutTagContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSInitialStatusTagsProvider, nullptr, "GetInitialStatusTags", nullptr, nullptr, Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::PropPointers), sizeof(RTSInitialStatusTagsProvider_eventGetInitialStatusTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(RTSInitialStatusTagsProvider_eventGetInitialStatusTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRTSInitialStatusTagsProvider::execGetInitialStatusTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutTagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInitialStatusTags_Implementation(Z_Param_Out_OutTagContainer);
	P_NATIVE_END;
}
// End Interface URTSInitialStatusTagsProvider Function GetInitialStatusTags

// Begin Interface URTSInitialStatusTagsProvider
void URTSInitialStatusTagsProvider::StaticRegisterNativesURTSInitialStatusTagsProvider()
{
	UClass* Class = URTSInitialStatusTagsProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInitialStatusTags", &IRTSInitialStatusTagsProvider::execGetInitialStatusTags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSInitialStatusTagsProvider);
UClass* Z_Construct_UClass_URTSInitialStatusTagsProvider_NoRegister()
{
	return URTSInitialStatusTagsProvider::StaticClass();
}
struct Z_Construct_UClass_URTSInitialStatusTagsProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/RTSInitialStatusTagsProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSInitialStatusTagsProvider_GetInitialStatusTags, "GetInitialStatusTags" }, // 1885934019
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRTSInitialStatusTagsProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSInitialStatusTagsProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSInitialStatusTagsProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSInitialStatusTagsProvider_Statics::ClassParams = {
	&URTSInitialStatusTagsProvider::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSInitialStatusTagsProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSInitialStatusTagsProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSInitialStatusTagsProvider()
{
	if (!Z_Registration_Info_UClass_URTSInitialStatusTagsProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSInitialStatusTagsProvider.OuterSingleton, Z_Construct_UClass_URTSInitialStatusTagsProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSInitialStatusTagsProvider.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSInitialStatusTagsProvider>()
{
	return URTSInitialStatusTagsProvider::StaticClass();
}
URTSInitialStatusTagsProvider::URTSInitialStatusTagsProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSInitialStatusTagsProvider);
URTSInitialStatusTagsProvider::~URTSInitialStatusTagsProvider() {}
// End Interface URTSInitialStatusTagsProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSInitialStatusTagsProvider, URTSInitialStatusTagsProvider::StaticClass, TEXT("URTSInitialStatusTagsProvider"), &Z_Registration_Info_UClass_URTSInitialStatusTagsProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSInitialStatusTagsProvider), 1153820854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_2874510819(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
