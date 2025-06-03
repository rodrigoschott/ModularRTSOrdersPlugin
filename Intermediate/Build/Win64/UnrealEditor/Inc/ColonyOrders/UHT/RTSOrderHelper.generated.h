// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrderHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBehaviorTree;
class URTSOrder;
class URTSOrderWithBehavior;
class UTexture2D;
enum class ERTSOrderGroupExecutionType : uint8;
enum class ERTSOrderProcessPolicy : uint8;
enum class ERTSTargetType : uint8;
struct FRTSOrderData;
struct FRTSOrderErrorTags;
struct FRTSOrderPreviewData;
struct FRTSOrderTagRequirements;
struct FRTSOrderTargetData;
struct FRTSOrderTypeWithIndex;
#ifdef COLONYORDERS_RTSOrderHelper_generated_h
#error "RTSOrderHelper.generated.h already included, missing '#pragma once' in RTSOrderHelper.h"
#endif
#define COLONYORDERS_RTSOrderHelper_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindTargetForOrderInChaseDistance); \
	DECLARE_FUNCTION(execFindTargetForOrder); \
	DECLARE_FUNCTION(execIsEnemyInAcquisitionRadius); \
	DECLARE_FUNCTION(execCheckOrder); \
	DECLARE_FUNCTION(execGetOrderGroupExecutionType); \
	DECLARE_FUNCTION(execCanOrderBeConsideredAsSucceeded); \
	DECLARE_FUNCTION(execAreAutoOrdersAllowedDuringOrder); \
	DECLARE_FUNCTION(execSetHumanPlayerAutoOrderState); \
	DECLARE_FUNCTION(execGetHumanPlayerAutoOrderInitialState); \
	DECLARE_FUNCTION(execIsAIPlayerAutoOrder); \
	DECLARE_FUNCTION(execIsHumanPlayerAutoOrder); \
	DECLARE_FUNCTION(execGetOrderTargetScore); \
	DECLARE_FUNCTION(execGetFallbackOrder); \
	DECLARE_FUNCTION(execGetOrderProcessPolicy); \
	DECLARE_FUNCTION(execGetAcquisitionRadiusOverride); \
	DECLARE_FUNCTION(execGetOrderRequiredRange); \
	DECLARE_FUNCTION(execGetOrderSuccessTagRequirements); \
	DECLARE_FUNCTION(execGetOrderTagRequirements); \
	DECLARE_FUNCTION(execGetOrderPreviewData); \
	DECLARE_FUNCTION(execHasFixedOrderButtonIndex); \
	DECLARE_FUNCTION(execGetOrderButtonIndex); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetDisabledIcon); \
	DECLARE_FUNCTION(execGetPressedIcon); \
	DECLARE_FUNCTION(execGetHoveredIcon); \
	DECLARE_FUNCTION(execGetNormalIcon); \
	DECLARE_FUNCTION(execCreateOrderTargetData); \
	DECLARE_FUNCTION(execShouldRestartBehaviourTree); \
	DECLARE_FUNCTION(execGetBehaviorTree); \
	DECLARE_FUNCTION(execIsCreatingIndividualTargetLocations); \
	DECLARE_FUNCTION(execGetTargetType); \
	DECLARE_FUNCTION(execInsertOrderAfterCurrentOrder); \
	DECLARE_FUNCTION(execEnqueueOrder); \
	DECLARE_FUNCTION(execClearOrderQueue); \
	DECLARE_FUNCTION(execIssueOrder); \
	DECLARE_FUNCTION(execCreateIndividualTargetLocations); \
	DECLARE_FUNCTION(execK2_IsValidTargetWithErrorTags); \
	DECLARE_FUNCTION(execIsValidTarget); \
	DECLARE_FUNCTION(execK2_CanObeyOrderWithErrorTags); \
	DECLARE_FUNCTION(execCanObeyOrder);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSOrderHelper(); \
	friend struct Z_Construct_UClass_URTSOrderHelper_Statics; \
public: \
	DECLARE_CLASS(URTSOrderHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSOrderHelper)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSOrderHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSOrderHelper(URTSOrderHelper&&); \
	URTSOrderHelper(const URTSOrderHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSOrderHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSOrderHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSOrderHelper) \
	NO_API virtual ~URTSOrderHelper();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_24_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_27_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSOrderHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
