// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrdersAbilitiesGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_OrdersAbilitiesGameMode_generated_h
#error "OrdersAbilitiesGameMode.generated.h already included, missing '#pragma once' in OrdersAbilitiesGameMode.h"
#endif
#define COLONYORDERS_OrdersAbilitiesGameMode_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOrdersAbilitiesGameMode(); \
	friend struct Z_Construct_UClass_AOrdersAbilitiesGameMode_Statics; \
public: \
	DECLARE_CLASS(AOrdersAbilitiesGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(AOrdersAbilitiesGameMode)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOrdersAbilitiesGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOrdersAbilitiesGameMode(AOrdersAbilitiesGameMode&&); \
	AOrdersAbilitiesGameMode(const AOrdersAbilitiesGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrdersAbilitiesGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrdersAbilitiesGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOrdersAbilitiesGameMode) \
	NO_API virtual ~AOrdersAbilitiesGameMode();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_8_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_11_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class AOrdersAbilitiesGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_OrdersAbilitiesGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
