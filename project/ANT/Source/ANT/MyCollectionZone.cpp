// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCollectionZone.h"

#include "Engine.h"
#include "PlayerAnt.h"
#include "Kismet/GameplayStatics.h"

AMyCollectionZone::AMyCollectionZone()
{
	this->OnActorBeginOverlap.AddDynamic(this, &AMyCollectionZone::OnOverlapBegin);
	this->OnActorEndOverlap.AddDynamic(this, &AMyCollectionZone::OnOverlapEnd);
}
void AMyCollectionZone::BeginPlay()
{
	Super::BeginPlay();
	this->hasCollection = true;
}
void AMyCollectionZone::OnOverlapBegin(AActor* OverlapedActor, AActor* OtherActor)
{
	if ((OtherActor != nullptr) && OtherActor != this && OtherActor->ActorHasTag(TEXT("Player")))
	{
		if (dynamic_cast<APlayerAnt*>(OtherActor)->hasCollection == false)
		{
			dynamic_cast<APlayerAnt*>(OtherActor)->hasCollection = true;
			if (dynamic_cast<APlayerAnt*>(OtherActor)->OurCollectionMesh != nullptr)
			{
				dynamic_cast<APlayerAnt*>(OtherActor)->OurCollectionMesh->bVisible = true;
			}
			this->hasCollection = false;
			UE_LOG(LogClass, Display, TEXT("Get Collection!!"));
		}
		else
		{
			UE_LOG(LogClass, Display, TEXT("Already Has Collection"));
		}
	}
	UE_LOG(LogClass, Display, TEXT("On Overlap!!"));
}

void AMyCollectionZone::OnOverlapEnd(AActor* OverlapedActor, AActor* OtherActor)
{

}
