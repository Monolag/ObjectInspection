// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#include "BoxWithBallInspection.h"
#include "Components/StaticMeshComponent.h"
#include "InspectionObjectInfWidget.h"
ABoxWithBallInspection::ABoxWithBallInspection() 
{

	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	CupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cup"));

	//Create and bind timeline
	MyTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
	InterpFunction.BindUFunction(this, FName("TimelineFloatReturn"));
	TimelineFinished.BindUFunction(this, FName("OnTimelineFinished"));

	//Box Widget Setup
	BoxWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CupWidget"));
	BoxWidget->SetupAttachment(CupMesh);
	BoxWidget->SetWidgetSpace(EWidgetSpace::Screen);
	BoxWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BoxWidget->SetDrawSize(FVector2D(64.0f, 64.0f));
	BoxWidget->SetHiddenInGame(true);
	BoxWidget->RegisterComponent();

	//Ball Widget Setup
	BallWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("BallWidget"));
	BallWidget->SetupAttachment(BallMesh);
	BallWidget->SetWidgetSpace(EWidgetSpace::Screen);
	BallWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	BallWidget->SetDrawSize(FVector2D(64.0f, 64.0f));
	BallWidget->SetHiddenInGame(true);
	BallWidget->RegisterComponent();
}


// Called when the game starts
void ABoxWithBallInspection::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(MyTimeline)) { return; }
	if (IsValid(fCurve)) {
		MyTimeline->AddInterpFloat(fCurve, InterpFunction, FName("Alpha"));
		MyTimeline->SetTimelineFinishedFunc(TimelineFinished);
		MyTimeline->SetLooping(false);
		MyTimeline->SetIgnoreTimeDilation(true);
	}
}

void ABoxWithBallInspection::InteractionEvent() {
	Super::InteractionEvent();

	if (onPosition) {
		switch (stepIndex)
		{
		case 0:
			CupMeshStartRotation = CupMesh->GetComponentRotation();
			canMove = false;
			BoxWidget->SetVisibility(false);
			MyTimeline->Play();
			stepIndex++;
			break;
		case 1:
			BallWidget->SetVisibility(false);
			BallMesh->SetVisibility(false);
			stepIndex++;
			if (!IsValid(ItemInformationWidget)) { return; }
			ItemInformationWidget->RemoveFromParent();
			break;
		}
	}

}

void ABoxWithBallInspection::OnTimelineFinished()
{

	canMove = true;
}

void ABoxWithBallInspection::TimelineFloatReturn(float value)
{
	auto NewRotation = FMath::Lerp(FRotator(0, -90, 0), FRotator(0, -90, -40), value);

	CupMesh->SetRelativeRotation(NewRotation);
}

void ABoxWithBallInspection::checkRotation()
{

	if (stepIndex > NeededDirection.Num() - 1)
	{
		UE_LOG(LogTemp, Error, TEXT("MONOLAG: You don't have SpecialRotations for every event! Please, add  more SpecialRotations"))
			return;
	}

	if (NeededDirection[stepIndex] == EItemDirection::None) { return; }

	if(OnCurrentDirection()){
		onPosition = true;
		switch (stepIndex)
		{
			case 0: BallWidget->SetHiddenInGame(true); BoxWidget->SetHiddenInGame(false); break;
			case 1: 
				// Enable screen widgets
				BallWidget->SetHiddenInGame(false);
				BoxWidget->SetHiddenInGame(true);

				//Create information widget
				if (!IsValid(ItemInformatonWidgetClass)) { return; }
				if (!ItemInformationWidget) {
					ItemInformationWidget = CreateWidget<UInspectionObjectInfWidget>(GetWorld(), ItemInformatonWidgetClass);
					if (ItemImage) {
						ItemInformationWidget->ItemImage = ItemImage;
					}
					ItemInformationWidget->ItemName = ItemName;
				}

				if (!IsValid(ItemInformationWidget)) { return; }
				if (!(ItemInformationWidget->IsInViewport())) {
					ItemInformationWidget->AddToViewport();
				}
				break;
			case 2:
				if (!IsValid(ItemInformationWidget)) { return; }
				ItemInformationWidget->RemoveFromParent();
				break;
		}
	}
	else {
		onPosition = false;
		switch (stepIndex)
		{
			case 0: BallWidget->SetHiddenInGame(true); BoxWidget->SetHiddenInGame(true); break;
			case 1:
				BallWidget->SetHiddenInGame(true); 
				BoxWidget->SetHiddenInGame(true); 
				if (!IsValid(ItemInformationWidget)) { return; }
				ItemInformationWidget->RemoveFromParent();
				break;
		}
	}
}

void ABoxWithBallInspection::DisableCreatedWidgets() 
{
	Super::DisableCreatedWidgets();

	//Set Ball Widget hidden if it is valid
	if (!IsValid(BallWidget)) { return; }
	BallWidget->SetHiddenInGame(true);

	//Set Box Widget hidden if it is valid
	if (!IsValid(BoxWidget)) { return; }
	BoxWidget->SetHiddenInGame(true);

	//Set Interact Widget visible if it is valid
	if (!IsValid(InteractWidget)) { return; }
	InteractWidget->SetVisibility(true);

	// Remove Item Information Widget if it is valid
	if (!IsValid(ItemInformationWidget)) { return; }
	ItemInformationWidget->RemoveFromParent();

	// Remove Widget "to move object with mouse" if it is valid
	if (!IsValid(MoveVOWidget)) { return; }
	MoveVOWidget->RemoveFromParent();
}