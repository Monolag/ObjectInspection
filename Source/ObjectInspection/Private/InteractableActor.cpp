// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#include "InteractableActor.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AInteractableActor::AInteractableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Scene setup 
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	//Mesh setup
	ItemMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item"));
	ItemMeshComp->SetupAttachment(RootComponent);

	//Widget setup
	InteractWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	InteractWidget->SetupAttachment(ItemMeshComp);
	InteractWidget->SetWidgetSpace(EWidgetSpace::Screen);
	InteractWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	InteractWidget->SetDrawSize(FVector2D(64.0f, 64.0f));
	InteractWidget->SetHiddenInGame(true);
	//InteractWidget->RegisterComponent();

	//Interact sound setup
	//InteractSoundComp->CreateDefaultSubobject<UAudioComponent>(TEXT("InteractSound"));
	//if (ensure(InteractSound)) {
	//	InteractSoundComp->SetSound(InteractSound);
	//}

}

// Called when the game starts or when spawned
void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractableActor::EnterPlayerRadius_Implementation(AActor* InteractingActor) 
{
	
	if (Locked || !ensure(InteractWidget)) { return; }

	InteractWidget->SetHiddenInGame(false);
}

void AInteractableActor::LeavePlayerRadius_Implementation(AActor* InteractingActor) 
{
	if (!ensure(InteractWidget)) { return; }

	InteractWidget->SetHiddenInGame(true);
}


void AInteractableActor::InteractWith_Implementation(AActor* InteractingActor)
{

}
