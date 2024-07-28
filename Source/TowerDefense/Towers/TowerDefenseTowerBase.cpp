#include "TowerDefenseTowerBase.h"

ATowerDefenseTowerBase::ATowerDefenseTowerBase()
{
	PrimaryActorTick.bCanEverTick = true;
	AttackRange = 500.f;
	AttackRate = 1.0f;


}

void ATowerDefenseTowerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATowerDefenseTowerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

