// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Clash : ModuleRules
{
	public Clash(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
