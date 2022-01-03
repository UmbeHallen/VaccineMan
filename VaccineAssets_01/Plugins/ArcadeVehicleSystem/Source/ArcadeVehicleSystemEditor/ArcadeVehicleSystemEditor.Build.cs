/** Created and owned by Furious Production @ Michal Kolodziej. **/

using UnrealBuildTool;

public class ArcadeVehicleSystemEditor : ModuleRules
{
	public ArcadeVehicleSystemEditor(ReadOnlyTargetRules Target) : base(Target)
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
				"UnrealEd",
				"ArcadeVehicleSystem"
			}
			);
	}
}
