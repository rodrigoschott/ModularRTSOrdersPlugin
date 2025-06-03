// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColonyOrders/Public/OrdersAbilitiesGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrdersAbilitiesGameMode() {}

// Begin Cross Module References
COLONYORDERS_API UClass* Z_Construct_UClass_AOrdersAbilitiesGameMode();
COLONYORDERS_API UClass* Z_Construct_UClass_AOrdersAbilitiesGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ColonyOrders();
// End Cross Module References

// Begin Class AOrdersAbilitiesGameMode
void AOrdersAbilitiesGameMode::StaticRegisterNativesAOrdersAbilitiesGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrdersAbilitiesGameMode);
UClass* Z_Construct_UClass_AOrdersAbilitiesGameMode_NoRegister()
{
	return AOrdersAbilitiesGameMode::StaticClass();
}
struct Z_Construct_UClass_AOrdersAbilitiesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OrdersAbilitiesGameMode.h" },
		{ "ModuleRelativePath", "Public/OrdersAbilitiesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrdersAbilitiesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOrdersAbilitiesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ColonyOrders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrdersAbilitiesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrdersAbilitiesGameMode_Statics::ClassParams = {
	&AOrdersAbilitiesGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrdersAbilitiesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOrdersAbilitiesGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOrdersAbilitiesGameMode()
{
	if (!Z_Registration_Info_UClass_AOrdersAbilitiesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrdersAbilitiesGameMode.OuterSingleton, Z_Construct_UClass_AOrdersAbilitiesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOrdersAbilitiesGameMode.OuterSingleton;
}
template<> COLONYORDERS_API UClass* StaticClass<AOrdersAbilitiesGameMode>()
{
	return AOrdersAbilitiesGameMode::StaticClass();
}
AOrdersAbilitiesGameMode::AOrdersAbilitiesGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOrdersAbilitiesGameMode);
AOrdersAbilitiesGameMode::~AOrdersAbilitiesGameMode() {}
// End Class AOrdersAbilitiesGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOrdersAbilitiesGameMode, AOrdersAbilitiesGameMode::StaticClass, TEXT("AOrdersAbilitiesGameMode"), &Z_Registration_Info_UClass_AOrdersAbilitiesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrdersAbilitiesGameMode), 3423949159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_2086653400(TEXT("/Script/ColonyOrders"),
	Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
