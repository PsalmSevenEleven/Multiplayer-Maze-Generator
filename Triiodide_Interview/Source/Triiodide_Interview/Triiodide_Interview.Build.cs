// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Triiodide_Interview : ModuleRules
{
	public Triiodide_Interview(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });

		PublicIncludePaths.AddRange(new string[] { "EnhancedInput/Public" });
	}
}
