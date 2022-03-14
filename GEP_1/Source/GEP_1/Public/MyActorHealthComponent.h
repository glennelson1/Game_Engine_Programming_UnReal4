// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentDeadSignature, AController*, causer);

UCLASS()
class GEP_1_API AMyActorHealthComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorHealthComponent();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintAssignable, Category= "Component")
	FComponentDeadSignature onComponentDead;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Health");
	float m_CurrentHealth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Health");
	float m_MaxHealth;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Shield");
	float m_CurrentShield;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Shield");
	float m_MaxShield;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Shield");
	bool m_CanRegenSheild;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Shield");
	float m_SheildRecoverDelayTimer;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Shield")
	float m_SheildRevoverRate;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Shield");
	float m_SheildRevoverDelay;

	UFUNCTION()
	void DamgeTaken(AActor* damagedAcator, float damage, const UDamageType* damageType, AController* instigator, AActor* causer);
	

public:	
	// Called every frame
	
};
