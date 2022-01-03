/** Created and owned by Furious Production @ Michal Kolodziej. **/

#pragma once

#include "Engine.h"
#include "UnrealEd/Public/ComponentVisualizer.h"

/**
  * Visualization class for the arcade vehicle movement component.
*/
class FStaticArcadeVehicleMovementComponentVisualizer : public FComponentVisualizer
{
public:
	/** FComponentVisualizer interface. */
	void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	/** ~FComponentVisualizer interface. */
};