// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "LightSwitcher.generated.h"

/**
 * 
 */

UCLASS()
class OBJECTINSPECTION_API ALightSwitcher : public AInteractableActor
{
	GENERATED_BODY()

	virtual void InteractWith_Implementation(AActor * InteractingActor) override;

public:

	UPROPERTY(EditAnywhere, Category = "Setup")
	bool bAutoActivate = true;

	UPROPERTY(EditAnywhere, Category = "Sounds")
	class USoundCue* OffSound = nullptr;

	UPROPERTY(EditAnywhere, Category = "Setup")
	TArray<class APointLight*> PointLightWorld;

protected:
	ALightSwitcher();

	UFUNCTION(BlueprintCallable, Category = "Initialization")
	void Initialize();

	// Overridable functions 
	virtual void LightOn();
	virtual void LightOff();

private:

	void SetupLight(bool state);
	void ConfigureLight(USoundCue* sound, bool vis);

	void Interact();

	bool bCurrentState = false;
};
