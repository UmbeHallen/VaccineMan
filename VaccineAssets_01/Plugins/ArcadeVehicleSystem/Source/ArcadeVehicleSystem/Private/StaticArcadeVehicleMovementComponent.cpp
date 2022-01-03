﻿/** Created and owned by Furious Production @ Michal Kolodziej. **/

#include "StaticArcadeVehicleMovementComponent.h"


UStaticArcadeVehicleMovementComponent::UStaticArcadeVehicleMovementComponent()
{
	AnimatorClass = UStaticArcadeVehicleAnimator::StaticClass();
}

bool UStaticArcadeVehicleMovementComponent::InitializeVehicleMovement()
{
	/* Everything must've been registered successfully in the parent class. */
	if(!Super::InitializeVehicleMovement())
	{
		return false;
	}

	/* Check if we have valid animator class. */
	if(!IsValid(AnimatorClass))
	{
		return false;
	}

	/* Initialize static mesh component reference for the physics. */
	m_pVehicleStaticMeshPhysics = Cast<UStaticMeshComponent>(m_pMesh);

	/* Validity of this operation define success of the initialization. */
	if(!IsValid(m_pVehicleStaticMeshPhysics))
	{
		UE_LOG(LogArcadeVehicleMovement, Error, TEXT("Arcade vehicle uses static mesh movement component, but the root is not static mesh!"));
		return false;
	}

	/* Initialize child static mesh for the vehicle visuals. */
	m_pVehicleStaticMeshVisuals = Cast<UStaticMeshComponent>(m_pMesh->GetChildComponent(0));

	/* Check if we have child for visualization. */
	if(!IsValid(m_pVehicleStaticMeshVisuals))
	{
		UE_LOG(LogArcadeVehicleMovement, Error, TEXT("Arcade vehicle uses static mesh movement component, but the root needs child static mesh for vehicle!"));
		return false;
	}

	/* Create animator component. */
	UStaticArcadeVehicleAnimator* pAnimator = NewObject<UStaticArcadeVehicleAnimator>(GetOwner(), AnimatorClass, TEXT("VehicleAnimator"));
	pAnimator->RegisterComponent();
	
	/* All good! */
	return true;
}

bool UStaticArcadeVehicleMovementComponent::RegisterSuspensionSprings()
{
	/* Iterate over all sockets of the static mesh to register suspension locations. */
	for (FVehicleSuspensionSpring& spring : Settings.Suspension.Springs)
	{
		/* Cache iterated spring socket name. */
		const FName& socketName = spring.BoneName;

		/* Validate socket pointer. */
		const UStaticMeshSocket* pSocket = m_pVehicleStaticMeshPhysics->GetSocketByName(socketName);
		if (IsValid(pSocket))
		{
			/* Grab socket location and apply it to the iterated spring. */
			spring.Location = pSocket->RelativeLocation;			
		}
		else
		{
			UE_LOG(LogArcadeVehicleMovement, Error, TEXT("Suspension socket %s was not found in the static mesh!"), *socketName.ToString());
		}
	}
	
	/* Implemented and successful. */
	return true;
}

void UStaticArcadeVehicleMovementComponent::GetWheelsBaseTransform(FTransform& OutTransform) const
{
	/* Grab the relative location from the visuals mesh. */
	OutTransform = m_pVehicleStaticMeshVisuals->GetComponentTransform();
}

UStaticMeshComponent* UStaticArcadeVehicleMovementComponent::GetVisualsMesh()
{
	return m_pVehicleStaticMeshVisuals;
}
