// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEntityDeath);

UCLASS()
class GDW5_TUTORIALS_API UGameManager : public UGameInstance
{
	GENERATED_BODY()

public:
	static UGameManager* GetInstance();
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnEntityDeath OnEntityDeath;
	UFUNCTION(BlueprintCallable, Category = "GameManger")
	void BroadcastEntityDeath();

protected:
	virtual void Init() override;
	
};
