// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#include "GrabObjectCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/InputSettings.h"
#include "InteractionInterface.h"
#include "InteractableActor.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "InspectObjectComponent.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AGrabObjectCharacter

AGrabObjectCharacter::AGrabObjectCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	//Setup Inspect Object Component
	InspectObjectComponent = CreateDefaultSubobject<UInspectObjectComponent>(TEXT("InspectComponent"));

	//Setup inspection location
	InspectionScene = CreateDefaultSubobject<USceneComponent>(TEXT("InspectionScene2"));
	InspectionScene->SetRelativeLocation(FVector(0.f, 0.f, -130.f));
	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

}

void AGrabObjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FHitResult Hit;
	auto Start = FirstPersonCameraComponent->GetComponentLocation();
	auto End = FirstPersonCameraComponent->GetComponentLocation() + FirstPersonCameraComponent->GetForwardVector() * LineTraceDistance;
	GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility);
	//DrawDebugLine(GetWorld(), Start, End, FColor::Blue);
	if (Hit.bBlockingHit) {
		if (ensure(Hit.GetActor())) {
			if (UKismetSystemLibrary::DoesImplementInterface(Hit.GetActor(), UInteractionInterface::StaticClass())) {
				if (Hit.GetActor() != lastActor) {
					if (lastActor) {
						IInteractionInterface::Execute_LeavePlayerRadius(lastActor, this);
						lastActor = nullptr;
					}
					IInteractionInterface::Execute_EnterPlayerRadius(Hit.GetActor(), this);
					lastActor = Hit.GetActor();
				}
			}
			else {
				if (lastActor) {
					IInteractionInterface::Execute_LeavePlayerRadius(lastActor, this);
					lastActor = nullptr;
				}
			}
		}
	}
	else {
		if (lastActor) {
			IInteractionInterface::Execute_LeavePlayerRadius(lastActor, this);
			lastActor = nullptr;
		}
	}


}

void AGrabObjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

}


void AGrabObjectCharacter::OnPause()
{
	if (CurrentState == EPlayerState::Inspecting)
	{
		if (ensure(GetInspectComponent())) { 
		GetInspectComponent()->ReverseTimeline();
		}
		CurrentState = EPlayerState::None;

		if (ensure(GetCharacterMovement())) {
			GetCharacterMovement()->Activate();
		}
		GetController()->SetIgnoreLookInput(false);
		auto PlayerController = Cast<APlayerController>(GetController());
		PlayerController->bShowMouseCursor = false;
	}
}

void AGrabObjectCharacter::tryToInteract()
{
	if (CurrentState == EPlayerState::Inspecting)
	{
		InspectObjectComponent->tryInspectionAction();
	}

	else {

		FHitResult Hit;
		auto Start = FirstPersonCameraComponent->GetComponentLocation();
		auto End = Start + FirstPersonCameraComponent->GetForwardVector() * LineTraceDistance;
		GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility);
		if (UKismetSystemLibrary::DoesImplementInterface(Hit.GetActor(), UInteractionInterface::StaticClass())) {
			IInteractionInterface::Execute_InteractWith(Hit.GetActor(), this);
			IInteractionInterface::Execute_EnterPlayerRadius(Hit.GetActor(), this);
		}
	}
}

