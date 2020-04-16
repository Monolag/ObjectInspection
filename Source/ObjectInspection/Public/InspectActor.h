// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

//#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "Components/TimelineComponent.h"
#include "ObjectInspection/Widgets/MoveVO.h"

#include "InspectActor.generated.h"


UENUM(BlueprintType)
enum class EItemDirection : uint8 {
	None,
	Forward,
	Backward,
	Right,
	Left,
	Up,
	Down
};

USTRUCT(BlueprintType)
struct FSpecialRotations {
	GENERATED_BODY()

};

UCLASS()
class OBJECTINSPECTION_API AInspectActor : public AInteractableActor
{
	GENERATED_BODY()
	
	virtual void EnterPlayerRadius_Implementation(AActor* InteractingActor) override;
	virtual void LeavePlayerRadius_Implementation(AActor* InteractingActor) override;
	virtual void InteractWith_Implementation(AActor* InteractingActor) override;

protected:

	UPROPERTY(BlueprintReadWrite, Category = "State")
	int32 stepIndex = 0;

	UPROPERTY(BlueprintReadWrite, Category = "State")
	bool onPosition = false;

	UPROPERTY(BlueprintReadOnly, Category = "State")
	AActor* InteractActor;

	// Check if item is rotated correctly to interact with
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setup")
	TArray<EItemDirection> NeededDirection = { EItemDirection::None };
	
	UFUNCTION(BlueprintCallable, Category = "Logic")
	bool OnNeededDirection(EItemDirection Direction);

	UPROPERTY(EditAnywhere, Category = "Setup")
	float permissionRotationCoefficient = -0.7;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UMG")
	TSubclassOf<class UUserWidget> InspectionWidgetClass;
	class UUserWidget* InspectionWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UMG")
	TSubclassOf<class UUserWidget> MoveVOClass;
	class UMoveVO* MoveVOWidget;

	UPROPERTY(EditAnywhere, Category = "Sounds")
	USoundCue* PutBackSound;


	UPROPERTY()
	bool bRotationEnabled = false;
	UPROPERTY()
	FVector2D StartRotation = FVector2D(0, 0);
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void OnClickStart(FVector2D mouseLockation);
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void OnClickEnd();
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void OnMouseMove(FVector2D mouseLockation);

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Location")
	FVector AddViewLocation = { 0,70,20 };

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Logic")
	void InteractToActor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Logic")
	void RemoveWidgets();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Logic")
	void TestRotation();

	UFUNCTION(BlueprintCallable, Category = "Logic")
	bool OnCurrentDirection();

	UFUNCTION(BlueprintCallable, Category = "Logic")
	virtual void InteractionEvent();
	
	UFUNCTION(BlueprintCallable, Category = "Logic")
	virtual void DisableCreatedWidgets();

	UFUNCTION(BlueprintCallable, Category = "Logic")
	virtual void checkRotation();

	bool canMove = true;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	FRotator StartObjectRotation = FRotator(0, 0, 0);
};
