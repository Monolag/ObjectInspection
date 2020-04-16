// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#include "TriggeredSound.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/World.h"
#include "Engine/EngineTypes.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ATriggeredSound::ATriggeredSound()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	BoxCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ATriggeredSound::OnOverlapBegin);
	
	
}

// Called when the game starts or when spawned
void ATriggeredSound::BeginPlay()
{
	Super::BeginPlay();
	AudioComponent->SetSound(Sound);
	
}

void ATriggeredSound::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto Player = Cast<AActor>(OtherActor);
	if (CanEnter && ensure(Player)) {
		CanEnter = false;
		AudioComponent->Activate(); 
		AudioComponent->Play();

		// Won't build
		//if (bNeedReset) {
			//FTimerHandle TimerHandle;
			//GetWorldTimerManager().SetTimer(TimerHandle, this, &ATriggeredSound::ResetDoOnce, DoOnceResetDelay, false, DoOnceResetDelay);
		//}
	}
}

// Called every frame
void ATriggeredSound::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggeredSound::ResetDoOnce()
{
	CanEnter = true;
}

