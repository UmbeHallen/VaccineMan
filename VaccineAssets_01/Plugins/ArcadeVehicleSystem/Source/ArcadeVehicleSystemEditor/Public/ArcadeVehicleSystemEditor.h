/** Created and owned by Furious Production @ Michal Kolodziej. **/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FArcadeVehicleSystemEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
