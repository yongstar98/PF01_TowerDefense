#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CTowerDefensePlayerController.generated.h"

UCLASS()
class TOWERDEFENSE_API ACTowerDefensePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACTowerDefensePlayerController();

protected:
	virtual void BeginPlay() override;
};
