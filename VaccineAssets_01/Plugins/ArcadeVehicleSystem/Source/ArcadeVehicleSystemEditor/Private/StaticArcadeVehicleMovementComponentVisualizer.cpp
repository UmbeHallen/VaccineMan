/** Created and owned by Furious Production @ Michal Kolodziej. **/

#include "StaticArcadeVehicleMovementComponentVisualizer.h"
#include "StaticArcadeVehicleMovementComponent.h"

void FStaticArcadeVehicleMovementComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	/* Cache currently visualized component. */
	const UStaticArcadeVehicleMovementComponent* pVehicleMovement = Cast<UStaticArcadeVehicleMovementComponent>(Component);
	const FVehicleSettings& settings = pVehicleMovement->GetVehicleSettings();

	/* Cache suspension parent bone transform, or if not valid, use component transform. */
	USceneComponent* pVehicleMesh = pVehicleMovement->GetOwner()->GetRootComponent();
	FTransform componentTransform = pVehicleMesh->GetComponentTransform();

	/* Calculate trace direction. */
	const FVector suspensionTraceDirection = -componentTransform.GetRotation().GetUpVector() * settings.Suspension.TraceLength;

	/* Draw suspension raycasts. */
	for (const FVehicleSuspensionSpring& spring : settings.Suspension.Springs)
	{
		/* Convert suspension location from local to world space. */
		const FVector suspensionWorld = componentTransform.TransformPositionNoScale(pVehicleMesh->GetSocketLocation(spring.BoneName));

		/* Calculate end location for the suspension ray. */
		const FVector suspensionRayEnd = suspensionWorld + suspensionTraceDirection;

		/* Draw trace line. */
		PDI->DrawLine(suspensionWorld, suspensionRayEnd, FLinearColor::Red, 0, 0.5f);

		/* With the right thickness, draw hit sphere. */
		if (settings.Suspension.TraceThickness > 0.f)
		{
			DrawWireSphere(PDI, suspensionRayEnd, FColor::Red, settings.Suspension.TraceThickness, 24, 0, 0.5f);
		}

		/* Visualize wheel swing. */
		const float directionMultiplier = 100.f * FMath::Sign(spring.SwingMinMax.X);
		FVector direction = (pVehicleMesh->GetRightVector().Rotation() + FRotator(spring.SwingMinMax.X, 0.f, 0.f)).Vector();
		PDI->DrawLine(suspensionWorld, suspensionWorld + direction * directionMultiplier, FColor::Green, 0, 1.f);
		direction = (pVehicleMesh->GetRightVector().Rotation() + FRotator(spring.SwingMinMax.Y, 0.f, 0.f)).Vector();
		PDI->DrawLine(suspensionWorld, suspensionWorld + direction * directionMultiplier, FColor::Green, 0, 1.f);
	}
}
