// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InspectActor.h"
#include "BoxWithBallInspection.generated.h"

/**
 * 
 */
UCLASS()
class OBJECTINSPECTION_API ABoxWithBallInspection : public AInspectActor
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

	ABoxWithBallInspection();

	virtual void InteractionEvent() override;

protected:

	//Setup Meshes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Meshes")
	class UStaticMesh* CupStaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Meshes")
	class UStaticMesh* BallStaticMesh;

	// Item Information setup
	UPROPERTY(EditAnywhere, Category = "Item Information")
	FText ItemName;
	UPROPERTY(EditAnywhere, Category = "Item Information")
	UTexture2D* ItemImage;

	//Setup Widgets 
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Widget")
	UWidgetComponent* BoxWidget = nullptr;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Widget")
	UWidgetComponent* BallWidget = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Mesh")
	class UStaticMeshComponent* CupMesh;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Mesh")
	class UStaticMeshComponent* BallMesh;

	//World widgets
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UMG")
	TSubclassOf<class UUserWidget> ItemInformatonWidgetClass;
	class UInspectionObjectInfWidget* ItemInformationWidget;

	// Open Cup Timeline
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Setup")
	UTimelineComponent* MyTimeline;
	FOnTimelineFloat InterpFunction{};
	FOnTimelineEvent TimelineFinished{};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	UCurveFloat* fCurve;
	UFUNCTION()
	void OnTimelineFinished();
	UFUNCTION()
	void TimelineFloatReturn(float value);

	FRotator CupMeshStartRotation;

	virtual void checkRotation() override;

	virtual void DisableCreatedWidgets() override;
};
