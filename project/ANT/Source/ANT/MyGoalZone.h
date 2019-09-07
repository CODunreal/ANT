// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "MyGoalZone.generated.h"

/**
 * 
 */
UCLASS()
class ANT_API AMyGoalZone : public ATriggerBox
{
	GENERATED_BODY()
protected:

	virtual void BeginPlay() override;

public:
	AMyGoalZone();

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlapedActor, class AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlapedActor, class AActor* OtherActor);
};
