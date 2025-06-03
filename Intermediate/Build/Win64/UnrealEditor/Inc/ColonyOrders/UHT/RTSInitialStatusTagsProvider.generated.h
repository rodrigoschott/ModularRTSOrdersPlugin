// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/RTSInitialStatusTagsProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef COLONYORDERS_RTSInitialStatusTagsProvider_generated_h
#error "RTSInitialStatusTagsProvider.generated.h already included, missing '#pragma once' in RTSInitialStatusTagsProvider.h"
#endif
#define COLONYORDERS_RTSInitialStatusTagsProvider_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetInitialStatusTags_Implementation(FGameplayTagContainer& OutTagContainer) {}; \
	DECLARE_FUNCTION(execGetInitialStatusTags);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_CALLBACK_WRAPPERS
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLONYORDERS_API URTSInitialStatusTagsProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSInitialStatusTagsProvider(URTSInitialStatusTagsProvider&&); \
	URTSInitialStatusTagsProvider(const URTSInitialStatusTagsProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLONYORDERS_API, URTSInitialStatusTagsProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSInitialStatusTagsProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSInitialStatusTagsProvider) \
	COLONYORDERS_API virtual ~URTSInitialStatusTagsProvider();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURTSInitialStatusTagsProvider(); \
	friend struct Z_Construct_UClass_URTSInitialStatusTagsProvider_Statics; \
public: \
	DECLARE_CLASS(URTSInitialStatusTagsProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ColonyOrders"), COLONYORDERS_API) \
	DECLARE_SERIALIZER(URTSInitialStatusTagsProvider)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_GENERATED_UINTERFACE_BODY() \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRTSInitialStatusTagsProvider() {} \
public: \
	typedef URTSInitialStatusTagsProvider UClassType; \
	typedef IRTSInitialStatusTagsProvider ThisClass; \
	static void Execute_GetInitialStatusTags(UObject* O, FGameplayTagContainer& OutTagContainer); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_9_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_CALLBACK_WRAPPERS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSInitialStatusTagsProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSInitialStatusTagsProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
