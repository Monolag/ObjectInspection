// Copyright 2020 Danil Abrosimov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "InteractLibrary.generated.h"

UENUM(BlueprintType)
enum class EPlayerState : uint8 {
	None,
	Inspecting,
	ChangingAnimation
};


UCLASS()
class OBJECTINSPECTION_API UInteractLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};
