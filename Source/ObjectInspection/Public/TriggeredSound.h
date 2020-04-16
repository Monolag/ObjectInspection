// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggeredSound.generated.h"

UCLASS()
class OBJECTINSPECTION_API ATriggeredSound : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggeredSound();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "StaticMesh")
	class UBoxComponent* BoxCollisionComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "StaticMesh")
	class UAudioComponent* AudioComponent;

	UPROPERTY(EditAnywhere, Category = "Sounds")
	class USoundBase* Sound = nullptr;

	UPROPERTY(EditAnywhere, Category = "Sounds")
	float DoOnceResetDelay = 1.0f;

	//UPROPERTY(EditAnywhere, Category = "Sounds")
	//bool bNeedReset = true;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	bool CanEnter = true;
	
	void ResetDoOnce();
};
