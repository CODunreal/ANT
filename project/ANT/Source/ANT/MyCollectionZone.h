// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "MyCollectionZone.generated.h"

/**
 * 
 */
UCLASS()
class ANT_API AMyCollectionZone : public ATriggerBox
{
	GENERATED_BODY()
protected:

	virtual void BeginPlay() override;

public:
	AMyCollectionZone();

	UPROPERTY(VisibleAnywhere)
		bool hasCollection = false;

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlapedActor, class AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlapedActor, class AActor* OtherActor);
};
