/** Created and owned by Furious Production @ Michal Kolodziej. **/

#include "ArcadeVehiclePawn.h"
#include "ArcadeVehicleMovementComponent.h"

AArcadeVehiclePawn::AArcadeVehiclePawn()
{
	/* Setup basic components. */
	VehicleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleMesh"));
	SetRootComponent(VehicleMesh);
	MovementComponent = CreateDefaultSubobject<UArcadeVehicleMovementComponent>(TEXT("MovementComponent"));	

	/* Allow replication, but not the movement, as we are doing this ourselves. */
	bReplicates = true;
	SetReplicateMovement(false);
}