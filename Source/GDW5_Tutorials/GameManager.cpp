// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"

UGameManager* UGameManager::GetInstance()
{
	if (!GEngine) { return nullptr; }
	UGameInstance* GameInstance = GEngine->GetWorld()->GetGameInstance();
	return Cast<UGameManager>(GameInstance);
}

void UGameManager::BroadcastEntityDeath()
{
	OnEntityDeath.Broadcast();
}

void UGameManager::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Warning, TEXT("GameManager Initialized"));
}
