// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#include "LightSwitcher.h"
#include "Engine/PointLight.h"
#include "Components/LightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Engine/StaticMesh.h"

ALightSwitcher::ALightSwitcher() 
{

}

void ALightSwitcher::LightOn()
{
	ConfigureLight(InteractSound, true);
}

void ALightSwitcher::LightOff() 
{
	ConfigureLight(OffSound, false);
}


void ALightSwitcher::SetupLight(bool state)
{
	ConfigureLight(nullptr, state);
}

void ALightSwitcher::ConfigureLight(USoundCue* sound, bool vis)
{
	if (IsValid(sound)) {
		UGameplayStatics::PlaySoundAtLocation(this, sound, GetActorLocation());
	}
	for (auto CurLight : PointLightWorld) {
		if (IsValid(CurLight)) {
			CurLight->GetLightComponent()->SetVisibility(vis);
		}
	}
}

void ALightSwitcher::Initialize() {


	SetupLight(bAutoActivate);

	if (IsValid(itemMesh)) {
		ItemMeshComp->SetStaticMesh(itemMesh);
	}
}

void ALightSwitcher::InteractWith_Implementation(AActor * InteractingActor)
{
	Interact();
}

void ALightSwitcher::Interact(){

	if (bCurrentState) {
		LightOn(); bCurrentState = false;
	}
	else {
		LightOff(); bCurrentState = true;
	}
}
