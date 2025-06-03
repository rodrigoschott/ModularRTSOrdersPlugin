// Copyright Epic Games, Inc. All Rights Reserved.

#include "ColonyOrders.h" // Your main plugin header - THIS MUST BE FIRST (after PCH if used)
#include "Modules/ModuleManager.h" // <<< ADD THIS INCLUDE: Needed for IMPLEMENT_MODULE

// Define your log category
DEFINE_LOG_CATEGORY(LogRTS); // This should match the name in ColonyOrders.h

#define LOCTEXT_NAMESPACE "FColonyOrdersModule" // Standard practice for localization

void FColonyOrdersModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing depends on the per-module UPluginDesc file.
    UE_LOG(LogRTS, Warning, TEXT("ColonyOrders module has started!"));
}

void FColonyOrdersModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
    UE_LOG(LogRTS, Warning, TEXT("ColonyOrders module is shutting down!"));
}

#undef LOCTEXT_NAMESPACE // Undefine after use

// The IMPLEMENT_MODULE macro is crucial.
// It registers your module with the engine.
IMPLEMENT_MODULE(FColonyOrdersModule, ColonyOrders)