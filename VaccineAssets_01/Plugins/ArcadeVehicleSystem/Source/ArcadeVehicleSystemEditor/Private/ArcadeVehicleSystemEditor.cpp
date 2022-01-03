/** Created and owned by Furious Production @ Michal Kolodziej. **/

#include "ArcadeVehicleSystemEditor.h"
#include "SkeletalArcadeVehicleMovementComponentVisualizer.h"
#include "ArcadeVehicleMovementComponent.h"
#include "StaticArcadeVehicleMovementComponentVisualizer.h"
#include "StaticArcadeVehicleMovementComponent.h"
#include "UnrealEd.h"

#define LOCTEXT_NAMESPACE "FArcadeVehicleSystemEditorModule"

void FArcadeVehicleSystemEditorModule::StartupModule()
{
	/* Registering vehicle movement component visualizer. */
	if (GUnrealEd)
	{
		GUnrealEd->RegisterComponentVisualizer(UArcadeVehicleMovementComponent::StaticClass()->GetFName(), MakeShareable(new FSkeletalArcadeVehicleMovementComponentVisualizer));
		GUnrealEd->RegisterComponentVisualizer(UStaticArcadeVehicleMovementComponent::StaticClass()->GetFName(), MakeShareable(new FStaticArcadeVehicleMovementComponentVisualizer));
	}
}

void FArcadeVehicleSystemEditorModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FArcadeVehicleSystemEditorModule, ArcadeVehicleSystemEditor)