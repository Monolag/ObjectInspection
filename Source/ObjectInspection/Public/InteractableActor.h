// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "Sound/SoundCue.h"
#include "Components/WidgetComponent.h"
#include "InteractableActor.generated.h"

UCLASS(Blueprintable)
class OBJECTINSPECTION_API AInteractableActor : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableActor();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Setup")
	UWidgetComponent* InteractWidget = nullptr;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Meshes")
	class UStaticMesh* itemMesh;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Casual for interactable item components
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Meshes")
    class UStaticMeshComponent* ItemMeshComp;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Meshes")
	class USceneComponent* Root;

	// Interact Sound
	UAudioComponent* InteractSoundComp;
	UPROPERTY(EditAnywhere, Category = "Sounds")
	USoundCue* InteractSound;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	//Need to add "_Implementation" to function name in case engine to recognize and override interface function
	virtual void EnterPlayerRadius_Implementation(AActor* InteractingActor) override;
	virtual void LeavePlayerRadius_Implementation(AActor* InteractingActor) override;
	virtual void InteractWith_Implementation(AActor* InteractingActor) override;

	UPROPERTY(BlueprintReadWrite, Category = "CodeVariable")
	bool Locked = false;

};
