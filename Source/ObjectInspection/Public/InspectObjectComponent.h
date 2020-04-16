// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"
#include "InspectObjectComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OBJECTINSPECTION_API UInspectObjectComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UInspectObjectComponent();

protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	void MoveObjectToInspectionPlace();

	UTimelineComponent* MyTimeline;

	UFUNCTION()
	void OnTimelineFinished();

	UFUNCTION()
	void TimelineFloatReturn(float value);

	FOnTimelineFloat InterpFunction{};
	FOnTimelineEvent TimelineFinished{};
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Setup")
	UCurveFloat* fCurve;

	class AInspectActor* InspectionActor;

	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	class AGrabObjectCharacter* OwningActor;
public:	

	UFUNCTION()
	void SetInspectionObject(AInspectActor* SetInspectionActor);
	
	FORCEINLINE UTimelineComponent* GetTimeline() const { return MyTimeline; }

	//Timeline Functions
	UFUNCTION()
	void PlayTimeline();
	UFUNCTION()
	void ReverseTimeline();

	UFUNCTION()
	void tryInspectionAction();

	UFUNCTION(BlueprintCallable, Category = "Rotate")
	void RotateLeftRight(float value);

	UFUNCTION(BlueprintCallable, Category = "Rotate")
	void RotateUpDown(float value);

private:

	FVector InspectionObjectLocation = FVector(0, 0, 0);
	FRotator InspectionObjectRotation = FRotator(0, 0, 0);
	FVector InspectionPlayerLocation = FVector(0, 0, 0);
	FRotator InspectionPlayerRotation = FRotator(0, 0, 0);

};
