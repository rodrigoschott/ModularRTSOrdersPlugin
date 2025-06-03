// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class ColonyOrders : ModuleRules
{
	public ColonyOrders(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		DefaultBuildSettings = BuildSettingsVersion.V5; // Corrected: DefaultBuildSettings
        CppStandard = CppStandardVersion.Cpp20;      // Corrected: CppStandard
 
		
		PublicIncludePaths.AddRange(
			new string[] {

                ModuleDirectory, // Allows direct includes from the module root, like "OrdersAbilities.h"

                // This allows includes like #include "AbilitySystem/RTSAbilitySystemComponent.h"
                // since your public headers are under Source/OrdersAbilities/Classes/
                //Path.Combine(ModuleDirectory, "Classes"),
				Path.Combine(ModuleDirectory, "Public")
                // Specific sub-folders within "Classes" for convenience
                //Path.Combine(ModuleDirectory, "Classes", "AbilitySystem"),
                //Path.Combine(ModuleDirectory, "Classes", "Orders")
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				Path.Combine(ModuleDirectory, "Private")

                //Path.Combine(ModuleDirectory, "Private"), // Allows #include "Private/MyPrivateFile.h"
                //Path.Combine(ModuleDirectory, "Private", "AbilitySystem"),
                //Path.Combine(ModuleDirectory, "Private", "Orders")
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",

                "AIModule",
                "GameplayAbilities",
                "GameplayTags",
                "GameplayTasks",
                "UMG",
                "NetCore",
                "AssetRegistry",
                "Kismet",
                "ApplicationCore",
                "Projects",
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				//"CoreUObject",
				//"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
