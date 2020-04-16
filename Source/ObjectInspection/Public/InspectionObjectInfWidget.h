// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Engine/Texture2D.h"
#include "InspectionObjectInfWidget.generated.h"

/**
 * 
 */
UCLASS()
class OBJECTINSPECTION_API UInspectionObjectInfWidget : public UUserWidget
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	FText ItemName;
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	UTexture2D* ItemImage;
	
};
