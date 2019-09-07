// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayerAnt.h"

#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"

// Sets default values
APlayerAnt::APlayerAnt()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->AutoPossessPlayer = EAutoReceiveInput::Player0;
	this->bUseControllerRotationYaw = false;
	this->bUseControllerRotationRoll = false;
	this->bUseControllerRotationPitch = false;

	this->GetCapsuleComponent()->SetCapsuleHalfHeight(34);
	this->GetCapsuleComponent()->SetCapsuleRadius(34);

	this->GetMesh()->SetRelativeLocation(FVector(0, 0, -55));
	this->GetMesh()->SetRelativeScale3D(FVector(0.25f, 0.25f, 0.25f));

	this->OurSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("FollowArm"));
	{
		this->OurSpringArm->SetupAttachment(RootComponent);
		this->OurSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(338.0f, 0.0f, 0.0f));
		this->OurSpringArm->TargetArmLength = 170.f;
		this->OurSpringArm->bEnableCameraLag = true;
	}
	this->OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	{
		this->OurCamera->SetupAttachment(OurSpringArm, USpringArmComponent::SocketName);
	}
	this->OurCollectionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollectionMesh"));
	{
		this->OurCollectionMesh->SetupAttachment(RootComponent);
		this->OurCollectionMesh->bVisible = false;
	}
	//this->Tags.AddDefaulted(1);
	this->Tags.AddUnique("Player");

}

// Called when the game starts or when spawned
void APlayerAnt::BeginPlay()
{
	Super::BeginPlay();
	auto* pc = UGameplayStatics::GetPlayerController(this, 0);
	pc->SetViewTarget(this);
	this->hasCollection = false;
	this->OurCollectionMesh->bVisible = false;
}

// Called every frame
void APlayerAnt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	{
		if (!this->currentVelocity.IsZero())
		{
			auto moveVector = (GetActorForwardVector() * (currentVelocity.X * DeltaTime));
			FVector NewLocation = GetActorLocation() + moveVector;
			//UE_LOG(LogClass, Display, TEXT("MoveInput : %d , %d"), moveVector.X, moveVector.Y);
			SetActorLocation(NewLocation);
		}
		if (!this->cameraInput.IsZero())
		{
			FRotator NewRotation = GetActorRotation();
			NewRotation.Yaw += cameraInput.X;
			if (this->OurCamera != nullptr)
			{
				auto t = this->OurCamera->GetRelativeTransform().GetRotation().Rotator();
				this->OurCamera->SetRelativeRotation(FRotator(FMath::Clamp(t.Pitch + cameraInput.Y, CameraPitchMin, CameraPitchMax), 0, 0));
				//UE_LOG(LogClass, Display, TEXT("Rotation %f"), t + cameraInput.Y);
				this->OurCamera->AddLocalRotation(FRotator(cameraInput.Y, 0, 0));
			}
			//UE_LOG(LogClass, Display, TEXT("CameraInput : %d , %d"), cameraInput.X, cameraInput.Y);
			SetActorRotation(NewRotation);

		}
	}
}

// Called to bind functionality to input
void APlayerAnt::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	this->InputComponent->BindAxis("MoveX", this, &APlayerAnt::MoveX);
	this->InputComponent->BindAxis("PitchCamera", this, &APlayerAnt::PitchCamera);
	this->InputComponent->BindAxis("YawCamera", this, &APlayerAnt::YawCamera);

}

void APlayerAnt::MoveX(float AxisValue)
{
	this->currentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.f * MoveSpeed;
	//UE_LOG(LogClass, Display, TEXT("MoveX"));
}
void APlayerAnt::PitchCamera(float AxisValue)
{
	cameraInput.Y = AxisValue * CameraPitchSpeed;
	//UE_LOG(LogClass, Display, TEXT("PitchCamera : %d"), AxisValue);

}

void APlayerAnt::YawCamera(float AxisValue)
{
	cameraInput.X = AxisValue * CameraYawSpeed;
	//UE_LOG(LogClass, Display, TEXT("YawCamera : %d"), AxisValue);
}

