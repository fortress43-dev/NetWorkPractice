// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NetWorkPractice : ModuleRules
{
	public NetWorkPractice(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" , "OnlineSubsystem", "OnlineSubsystemSteam", "UMG", "SlateCore" });
	}
}
