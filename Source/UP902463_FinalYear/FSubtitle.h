// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSubtitle.generated.h"

USTRUCT(BlueprintType)
struct FSubtitle : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

		/*The subtitle that will be displayed for a specific period of time in our UI*/
		UPROPERTY(EditAnywhere)
		FString Subtitle;

	/*The relative time in seconds, that the subtitle will appear*/
	UPROPERTY(EditAnywhere)
		float AssociatedTime;
};
