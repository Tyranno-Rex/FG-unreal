// Copyright Epic Games, Inc. All Rights Reserved.

#include "FGCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"

AFGCharacter::AFGCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	
	bIsCameraFixed = false;  // �⺻������ ī�޶�� �������� ����
	FixedCameraLocation = FVector::ZeroVector;  // �ʱ� ���� ��ġ�� (0, 0, 0)
	FixedCameraRotation = FRotator::ZeroRotator;  // �ʱ� ���� ȸ���� (0, 0, 0)

	SetCameraFixed(true, FVector(-1500.f, 2500.f, 3000.f), FRotator(-45.f, 0.f, 0.f));  // ī�޶� ���� ��ġ ����

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

// ��: ī�޶� ���� ����
void AFGCharacter::ReleaseCamera()
{
	SetCameraFixed(false, FVector::ZeroVector, FRotator::ZeroRotator);
}

void AFGCharacter::SetCameraFixed(bool bFixed, FVector NewFixedLocation, FRotator NewFixedRotation)
{
	bIsCameraFixed = bFixed;
	if (bIsCameraFixed)
	{
		FixedCameraLocation = NewFixedLocation;
		FixedCameraRotation = NewFixedRotation;
	}
}

void AFGCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (bIsCameraFixed)
	{
		// ī�޶� ������ ��ġ�� �ֵ��� ����
		TopDownCameraComponent->SetWorldLocation(FixedCameraLocation);
		TopDownCameraComponent->SetWorldRotation(FixedCameraRotation);
	}
	else
	{
		// �÷��̾ ���󰡵��� ���� (�⺻ ����)
		FVector PlayerLocation = GetActorLocation();
		TopDownCameraComponent->SetWorldLocation(PlayerLocation + CameraBoom->GetRelativeLocation());
		TopDownCameraComponent->SetWorldRotation(CameraBoom->GetRelativeRotation());
	}
}

