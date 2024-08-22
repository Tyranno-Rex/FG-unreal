// Copyright Epic Games, Inc. All Rights Reserved.

#include "FGGameMode.h"
#include "FGPlayerController.h"
#include "FGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFGGameMode::AFGGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFGPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}

void AFGGameMode::BeginPlay()
{
    Super::BeginPlay();

    // �߰� ĳ���� 4�� ����
    for (int32 i = 0; i < 4; ++i)
    {
        SpawnAdditionalCharacter();
    }
}

void AFGGameMode::SpawnAdditionalCharacter()
{
    if (DefaultPawnClass)
    {
        UWorld* World = GetWorld();
        if (World)
        {
			FVector SpawnLocation = FVector(2500.f, 2500.f, 0.f); // ���� ��ġ ����
            FRotator SpawnRotation = FRotator::ZeroRotator; // ���� ȸ�� ����
            FActorSpawnParameters SpawnParams;
            SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

            AFGCharacter* NewCharacter = World->SpawnActor<AFGCharacter>(DefaultPawnClass, SpawnLocation, SpawnRotation, SpawnParams);

            if (NewCharacter)
            {
                // �ʿ��� ��� ���⿡ �߰� ������ �� �� �ֽ��ϴ�.
            }
        }
    }
}