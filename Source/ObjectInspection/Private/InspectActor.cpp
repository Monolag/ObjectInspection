// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#include "InspectActor.h"
#include "ObjectInspection/GrabObjectCharacter.h"
#include "InspectObjectComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"

void AInspectActor::EnterPlayerRadius_Implementation(AActor* InteractingActor)
{
	Super::EnterPlayerRadius_Implementation(InteractingActor);	
}

void AInspectActor::LeavePlayerRadius_Implementation(AActor* InteractingActor)
{
	Super::LeavePlayerRadius_Implementation(InteractingActor);
}

void AInspectActor::InteractWith_Implementation(AActor* InteractingActor)
{
	//Cast to player
	if (!IsValid(InteractingActor)) { return; }
	InteractActor = InteractingActor;
	auto Player = Cast<AGrabObjectCharacter>(InteractingActor);
	if (!IsValid(Player)) { return; }

	if (Player->CurrentState != EPlayerState::Inspecting) {
		auto PlayerController = Cast<APlayerController>(Player->GetController());
		PlayerController->bShowMouseCursor = true;
		Player->CurrentState = EPlayerState::Inspecting;

		//Set inspection object information
		if (!IsValid(Player->GetInspectComponent())) { return; }
		Player->GetInspectComponent()->SetInspectionObject(this);

		//Stop and disable player movement
		if (!IsValid(Player->GetCharacterMovement())) { return; }
		Player->GetCharacterMovement()->StopMovementImmediately();
		Player->GetCharacterMovement()->Deactivate();
		Player->GetController()->SetIgnoreLookInput(true);

		// Play Inspection Timeline
		Player->GetInspectComponent()->PlayTimeline();

		//Play interact sound
		if (IsValid(InteractSound)) {
			UGameplayStatics::PlaySoundAtLocation(this, InteractSound, GetActorLocation());
		}

		if (IsValid(InspectionWidgetClass)) {
			InspectionWidget = CreateWidget<UUserWidget>(GetWorld(), InspectionWidgetClass);
			if (IsValid(InspectionWidget)) {
				InspectionWidget->AddToViewport();
			}
		}
		if (IsValid(MoveVOClass)) {
			MoveVOWidget = CreateWidget<UMoveVO>(GetWorld(), MoveVOClass);
			if (IsValid(MoveVOWidget)) {
				MoveVOWidget->AddToViewport();
				MoveVOWidget->SetUserFocus(Cast<APlayerController>(Player->GetController()));
				MoveVOWidget->InspectActor = this;
			}
		}

	}

	permissionRotationCoefficient = FMath::Clamp(permissionRotationCoefficient, -0.9f, -0.5f);
}


bool AInspectActor::OnNeededDirection(EItemDirection Direction)
{
	FVector DirectionVector;
	if (!IsValid(InteractActor))
	{
		auto Player = Cast<AGrabObjectCharacter>(InteractActor);
	}

	switch (Direction) {
		case EItemDirection::Up: DirectionVector = GetActorUpVector(); break;
		case EItemDirection::Down: DirectionVector = -GetActorUpVector(); break;
		case EItemDirection::Forward: DirectionVector = GetActorForwardVector(); break;
		case EItemDirection::Backward: DirectionVector = -GetActorForwardVector(); break;
		case EItemDirection::Left: DirectionVector = -GetActorRightVector(); break;
		case EItemDirection::Right: DirectionVector = GetActorRightVector(); break;
	}

	auto dotResult = FVector::DotProduct(DirectionVector.GetSafeNormal(), InteractActor->GetActorForwardVector().GetSafeNormal());
	
	if (dotResult < permissionRotationCoefficient)
	{
		return true;
	}

	return false;
}

void AInspectActor::OnClickStart(FVector2D mouseLockation)
{
	StartRotation = mouseLockation;

	bRotationEnabled = true;
}

void AInspectActor::OnClickEnd()
{
	bRotationEnabled = false;

}

void AInspectActor::OnMouseMove(FVector2D mouseLockation)
{
	if (!bRotationEnabled) { return; }
	
	auto NewRotation = mouseLockation - StartRotation;
	this->AddActorWorldRotation(FRotator(NewRotation.Y, NewRotation.X * -1, 0));
	StartRotation = mouseLockation;
}

bool AInspectActor::OnCurrentDirection() 
{
	return OnNeededDirection(NeededDirection[stepIndex]);
}

void AInspectActor::InteractionEvent()
{

}

void AInspectActor::DisableCreatedWidgets()
{
	//Remove Inspection Widget if it is valid
	if (IsValid(InspectionWidget)) {
		InspectionWidget->RemoveFromParent();
	}
	if (IsValid(MoveVOWidget)) {
		MoveVOWidget->RemoveFromParent();
	}
}

void AInspectActor::checkRotation()
{
	
}

