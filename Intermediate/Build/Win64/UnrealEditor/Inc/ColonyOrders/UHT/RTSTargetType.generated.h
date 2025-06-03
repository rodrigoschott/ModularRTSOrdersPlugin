// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSTargetType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSTargetType_generated_h
#error "RTSTargetType.generated.h already included, missing '#pragma once' in RTSTargetType.h"
#endif
#define COLONYORDERS_RTSTargetType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSTargetType_h


#define FOREACH_ENUM_ERTSTARGETTYPE(op) \
	op(ERTSTargetType::NONE) \
	op(ERTSTargetType::ACTOR) \
	op(ERTSTargetType::LOCATION) \
	op(ERTSTargetType::DIRECTION) \
	op(ERTSTargetType::PASSIVE) 

enum class ERTSTargetType : uint8;
template<> struct TIsUEnumClass<ERTSTargetType> { enum { Value = true }; };
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSTargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
