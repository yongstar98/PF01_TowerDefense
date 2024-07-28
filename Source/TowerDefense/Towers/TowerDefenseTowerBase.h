#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerDefenseTowerBase.generated.h"

UCLASS()
class TOWERDEFENSE_API ATowerDefenseTowerBase : public AActor
{
	GENERATED_BODY()
	
public:	
	ATowerDefenseTowerBase();

public:	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere)
		float AttackRange;

	UPROPERTY(EditAnywhere)
		float AttackRate;

	
};
