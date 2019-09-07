// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGoalZone.h"

#include "Engine.h"
#include "PlayerAnt.h"
#include "Kismet/GameplayStatics.h"

AMyGoalZone::AMyGoalZone()
{
	this->OnActorBeginOverlap.AddDynamic(this, &AMyGoalZone::OnOverlapBegin);
	this->OnActorEndOverlap.AddDynamic(this, &AMyGoalZone::OnOverlapEnd);
}
void AMyGoalZone::BeginPlay()
{
	Super::BeginPlay();
}
void AMyGoalZone::OnOverlapBegin(AActor* OverlapedActor, AActor* OtherActor)
{
	if ((OtherActor != nullptr) && OtherActor != this && OtherActor->ActorHasTag(TEXT("Player")))
	{
		if (dynamic_cast<APlayerAnt*>(OtherActor)->hasCollection)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Red, "게임 종료 트리거");
			UE_LOG(LogClass, Display, TEXT("Game End!"));
		}
		else
		{
			UE_LOG(LogClass, Display, TEXT("You must have Collection!"));
		}
	}
	UE_LOG(LogClass, Display, TEXT("On Overlap!! %s %s %s")
		,
		(!OtherActor ? (TEXT("true")) : (TEXT("false"))),
		(OtherActor->ActorHasTag(TEXT("Player")) ? (TEXT("true")) : (TEXT("false"))),
		(OtherActor != this ? (TEXT("true")) : (TEXT("false")))
	);
}

void AMyGoalZone::OnOverlapEnd(AActor* OverlapedActor, AActor* OtherActor)
{
}
