/** Created and owned by Furious Production @ Michal Kolodziej. **/

#include "StaticArcadeVehiclePawn.h"
#include "StaticArcadeVehicleMovementComponent.h"

AStaticArcadeVehiclePawn::AStaticArcadeVehiclePawn()
{
	/* Setup basic components. */
	VehicleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VehicleMesh"));
	SetRootComponent(VehicleMesh);
	VehicleVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VehicleVisualMesh"));
	VehicleVisualMesh->SetupAttachment(VehicleMesh);
	MovementComponent = CreateDefaultSubobject<UStaticArcadeVehicleMovementComponent>(TEXT("MovementComponent"));	

	/* Allow replication, but not the movement, as we are doing this ourselves. */
	bReplicates = true;
	SetReplicateMovement(false);
}