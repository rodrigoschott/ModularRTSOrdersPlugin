// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/Orders/RTSAutoOrderProvider.h"
#include "ColonyOrders/Public/Orders/RTSOrderTypeWithIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSAutoOrderProvider() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAutoOrderProvider();
COLONYORDERS_API UClass* Z_Construct_UClass_URTSAutoOrderProvider_NoRegister();
COLONYORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Interface URTSAutoOrderProvider Function GetAutoOrders
struct RTSAutoOrderProvider_eventGetAutoOrders_Parms
{
	TArray<FRTSOrderTypeWithIndex> OutAutoOrders;
};
void IRTSAutoOrderProvider::GetAutoOrders(TArray<FRTSOrderTypeWithIndex>& OutAutoOrders)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAutoOrders instead.");
}
static FName NAME_URTSAutoOrderProvider_GetAutoOrders = FName(TEXT("GetAutoOrders"));
void IRTSAutoOrderProvider::Execute_GetAutoOrders(UObject* O, TArray<FRTSOrderTypeWithIndex>& OutAutoOrders)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URTSAutoOrderProvider::StaticClass()));
	RTSAutoOrderProvider_eventGetAutoOrders_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URTSAutoOrderProvider_GetAutoOrders);
	if (Func)
	{
		Parms.OutAutoOrders=OutAutoOrders;
		O->ProcessEvent(Func, &Parms);
		OutAutoOrders=Parms.OutAutoOrders;
	}
	else if (auto I = (IRTSAutoOrderProvider*)(O->GetNativeInterfaceAddress(URTSAutoOrderProvider::StaticClass())))
	{
		I->GetAutoOrders_Implementation(OutAutoOrders);
	}
}
struct Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Should fill the passed array with orders that should be issued to this unit automatically.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Orders/RTSAutoOrderProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should fill the passed array with orders that should be issued to this unit automatically." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAutoOrders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAutoOrders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::NewProp_OutAutoOrders_Inner = { "OutAutoOrders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRTSOrderTypeWithIndex, METADATA_PARAMS(0, nullptr) }; // 305801775
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::NewProp_OutAutoOrders = { "OutAutoOrders", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTSAutoOrderProvider_eventGetAutoOrders_Parms, OutAutoOrders), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 305801775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::NewProp_OutAutoOrders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::NewProp_OutAutoOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTSAutoOrderProvider, nullptr, "GetAutoOrders", nullptr, nullptr, Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::PropPointers), sizeof(RTSAutoOrderProvider_eventGetAutoOrders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::Function_MetaDataParams) };
static_assert(sizeof(RTSAutoOrderProvider_eventGetAutoOrders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRTSAutoOrderProvider::execGetAutoOrders)
{
	P_GET_TARRAY_REF(FRTSOrderTypeWithIndex,Z_Param_Out_OutAutoOrders);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAutoOrders_Implementation(Z_Param_Out_OutAutoOrders);
	P_NATIVE_END;
}
// End Interface URTSAutoOrderProvider Function GetAutoOrders

// Begin Interface URTSAutoOrderProvider
void URTSAutoOrderProvider::StaticRegisterNativesURTSAutoOrderProvider()
{
	UClass* Class = URTSAutoOrderProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAutoOrders", &IRTSAutoOrderProvider::execGetAutoOrders },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTSAutoOrderProvider);
UClass* Z_Construct_UClass_URTSAutoOrderProvider_NoRegister()
{
	return URTSAutoOrderProvider::StaticClass();
}
struct Z_Construct_UClass_URTSAutoOrderProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Orders/RTSAutoOrderProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTSAutoOrderProvider_GetAutoOrders, "GetAutoOrders" }, // 1451138399
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRTSAutoOrderProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTSAutoOrderProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAutoOrderProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTSAutoOrderProvider_Statics::ClassParams = {
	&URTSAutoOrderProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTSAutoOrderProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_URTSAutoOrderProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTSAutoOrderProvider()
{
	if (!Z_Registration_Info_UClass_URTSAutoOrderProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTSAutoOrderProvider.OuterSingleton, Z_Construct_UClass_URTSAutoOrderProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTSAutoOrderProvider.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<URTSAutoOrderProvider>()
{
	return URTSAutoOrderProvider::StaticClass();
}
URTSAutoOrderProvider::URTSAutoOrderProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTSAutoOrderProvider);
URTSAutoOrderProvider::~URTSAutoOrderProvider() {}
// End Interface URTSAutoOrderProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTSAutoOrderProvider, URTSAutoOrderProvider::StaticClass, TEXT("URTSAutoOrderProvider"), &Z_Registration_Info_UClass_URTSAutoOrderProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTSAutoOrderProvider), 3180751257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_1900174237(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
