// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InteractLibrary.h"
#include "GrabObjectCharacter.generated.h"

class UInputComponent;


UCLASS(config=Game)
class AGrabObjectCharacter : public ACharacter
{
	GENERATED_BODY()


	/** Location where inspection should go. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* InspectionScene;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	float LineTraceDistance = 300.f;

public:
	AGrabObjectCharacter();

	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	EPlayerState CurrentState = EPlayerState::None;

	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay();


public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;


protected:
	
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void OnPause();

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void tryToInteract();


private: 
	AActor* lastActor = nullptr;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction")
	class UInspectObjectComponent* InspectObjectComponent;

	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	/** Returns Inspect Object Component **/
	class UInspectObjectComponent* GetInspectComponent() const { return InspectObjectComponent; }
	/** Returns Inspect Scene **/
	class USceneComponent* GetInspectScene() const { return InspectionScene; };
};

