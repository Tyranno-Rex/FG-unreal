// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FGGameMode.generated.h"

UCLASS(minimalapi)
class AFGGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFGGameMode();
	void BeginPlay() override;
	void SpawnAdditionalCharacter();
};



