/** Created and owned by Furious Production @ Michal Kolodziej. **/

using UnrealBuildTool;

public class ArcadeVehicleSystem : ModuleRules
{
	public ArcadeVehicleSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.Add("Core");
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"NavigationSystem",
				"AIModule",
				"CinematicCamera"
			}
			);
	}
}
