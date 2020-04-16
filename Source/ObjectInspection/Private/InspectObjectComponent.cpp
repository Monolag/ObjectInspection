// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#include "InspectObjectComponent.h"
#include "InspectActor.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SceneComponent.h"
#include "ObjectInspection/GrabObjectCharacter.h"

// Sets default values for this component's properties
UInspectObjectComponent::UInspectObjectComponent()
{

	//Create and bind timeline
	MyTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
	InterpFunction.BindUFunction(this, FName("TimelineFloatReturn"));
	TimelineFinished.BindUFunction(this, FName("OnTimelineFinished"));	
}


// Called when the game starts
void UInspectObjectComponent::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(MyTimeline)) { return; }
	if (IsValid(fCurve)) {
		MyTimeline->AddInterpFloat(fCurve, InterpFunction, FName("Alpha"));
		MyTimeline->SetTimelineFinishedFunc(TimelineFinished);
		MyTimeline->SetLooping(false);
		MyTimeline->SetIgnoreTimeDilation(true);
	}

	OwningActor = Cast<AGrabObjectCharacter>(GetOwner());

	if(!(IsValid(OwningActor))){
		UE_LOG(LogTemp, Error, TEXT("Your character needs to be a child of GrabObjectCharacter"))
	}
}


void UInspectObjectComponent::SetInspectionObject(AInspectActor* SetInspectionActor) {
	if (!IsValid(SetInspectionActor)) { return; }
	InspectionObjectLocation = SetInspectionActor->GetActorLocation();
	InspectionObjectRotation = SetInspectionActor->GetActorRotation();
	InspectionActor = SetInspectionActor;
	if (OwningActor) {
		InspectionPlayerLocation = OwningActor->GetActorLocation() + SetInspectionActor->AddViewLocation;
		InspectionPlayerRotation = InspectionActor->StartObjectRotation;
	}
}

void UInspectObjectComponent::MoveObjectToInspectionPlace() 
{

}

void UInspectObjectComponent::OnTimelineFinished()
{

}

void UInspectObjectComponent::TimelineFloatReturn(float value)
{
	auto NewLocation = FMath::Lerp(InspectionObjectLocation, InspectionPlayerLocation, value);
	auto NewRotation = FMath::Lerp(InspectionObjectRotation, InspectionPlayerRotation, value);
	InspectionActor->SetActorLocationAndRotation(NewLocation, NewRotation);
}

void UInspectObjectComponent::PlayTimeline(){
	auto Player = Cast<AGrabObjectCharacter>(GetOwner());
	if (IsValid(Player))
	{
		InspectionActor->InteractWidget->SetVisibility(false);
		MyTimeline->Play();
		
	}
}

void UInspectObjectComponent::ReverseTimeline()
{
	InspectionActor->DisableCreatedWidgets();

	//Blueprint Implementable
	InspectionActor->RemoveWidgets();

	InspectionActor->InteractWidget->SetVisibility(true);
	MyTimeline->Reverse();
}

void UInspectObjectComponent::tryInspectionAction()
{
	if (!IsValid(InspectionActor)) { return; }

	InspectionActor->InteractionEvent();
	InspectionActor->InteractToActor();
}

void UInspectObjectComponent::RotateLeftRight(float value)
{
	if (!IsValid(InspectionActor)) { return; }
	if (InspectionActor->canMove) {
		
		InspectionActor->AddActorWorldRotation(FRotator(0, 0, value));
		InspectionActor->checkRotation();
		//Blueprint Implementable
		InspectionActor->TestRotation();
	}
}

void UInspectObjectComponent::RotateUpDown(float value)
{
	if (!IsValid(InspectionActor)) { return; }
	if (InspectionActor->canMove) {
		
		InspectionActor->AddActorWorldRotation(FRotator(value, 0, 0));
		InspectionActor->checkRotation();
		//Blueprint Implementable
		InspectionActor->TestRotation();
	}
}
