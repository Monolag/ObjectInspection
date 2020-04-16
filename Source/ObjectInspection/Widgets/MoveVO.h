// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Blueprint/UserWidget.h"
#include "MoveVO.generated.h"

/**
 * 
 */
UCLASS()
class OBJECTINSPECTION_API UMoveVO : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	class AActor* InspectActor;
	
	
};
