/** Created and owned by Furious Production @ Michal Kolodziej. **/

#pragma once
#include "CoreMinimal.h"
#include "ArcadeVehicleMovementComponentBase.h"
#include "StaticArcadeVehicleAnimator.h"
#include "StaticArcadeVehicleMovementComponent.generated.h"

/**
* Implements arcade vehicle movement component logic for
* the vehicles that are created using Static Mesh Component.
* If your vehicles use Skeletal Mesh Component, please use different movement
* component for it.
* This component unlike its skeletal version, uses static mesh sockets
* to locate the wheel springs.
*/
UCLASS(BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent))
class ARCADEVEHICLESYSTEM_API UStaticArcadeVehicleMovementComponent : public UArcadeVehicleMovementComponentBase
{
	GENERATED_BODY()

public:
	UStaticArcadeVehicleMovementComponent();
	
	/** UArcadeVehicleMovementComponentBase interface. */
	bool InitializeVehicleMovement() override;
	bool RegisterSuspensionSprings() override;
	void GetWheelsBaseTransform(FTransform& OutTransform) const override;
	/** ~UArcadeVehicleMovementComponentBase interface. */

	/**
	 * Returns static mesh used for visual aspects
	 * of this vehicle.
	 */
	UFUNCTION(BlueprintPure, Category = VehicleMesh)
	UStaticMeshComponent* GetVisualsMesh();
	
protected:
	/**
	 * Class of the static vehicle movement animator.
	 * Animation is created at runtime at the moment of initialization,
	 * and provides suspension and wheels animation logic.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Animation)
	TSubclassOf<UStaticArcadeVehicleAnimator> AnimatorClass; 
	
private:
	/**
	* Stores vehicle root primitive
	* component cast to static mesh.
	* This is hidden mesh, but used for the simulation only.
	*/
	UPROPERTY()
	UStaticMeshComponent* m_pVehicleStaticMeshPhysics;

	/**
	* Stores actual vehicle mesh. It should be a child of
	* the physical component. This component should be visible,
	* but do not have physics at all.
	* They are separate beings in order to allow decoupling them
	* to simulate tilt and roll animations.
	*/
	UPROPERTY()
	UStaticMeshComponent* m_pVehicleStaticMeshVisuals;
};
