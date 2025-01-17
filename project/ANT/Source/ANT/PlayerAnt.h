// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerAnt.generated.h"

UCLASS()
class ANT_API APlayerAnt : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	APlayerAnt();

	UPROPERTY(EditAnywhere)
	float MoveSpeed = 10.0f;

	UPROPERTY(EditAnywhere)
	float CameraPitchSpeed = 3.0f;

	UPROPERTY(EditAnywhere)
	float CameraYawSpeed = 3.0f;

	UPROPERTY(EditAnywhere)
	float CameraPitchMax= 60.0f;

	UPROPERTY(EditAnywhere)
	float CameraPitchMin = -30.0f;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* OurSpringArm = nullptr;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* OurCamera = nullptr;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* OurCollectionMesh = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	bool hasCollection = false;

	FVector currentVelocity;

	FVector2D cameraInput;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveX(float AxisValue);

	void PitchCamera(float AxisValue);

	void YawCamera(float AxisValue);
};
