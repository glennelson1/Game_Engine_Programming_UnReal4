// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorHealthComponent.h"


AMyActorHealthComponent::AMyActorHealthComponent()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	m_MaxHealth = 100.f;
	m_MaxShield = 100.f;
	m_CanRegenSheild = true;
	m_SheildRevoverRate = 10.f;
	m_SheildRevoverDelay = 2.f;

}

// Called when the game starts or when spawned
void AMyActorHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &AMyActorHealthComponent::DamgeTaken);
	m_CurrentHealth = m_MaxHealth;
	m_CurrentShield = m_MaxShield;
	
}

void AMyActorHealthComponent::DamgeTaken(AActor* damagedAcator, float damage, const UDamageType* damageType, AController* instigator, AActor* causer)
{
	float leftOverDamage = FMath::Max(damage - m_CurrentShield, 0.f);
	m_CurrentShield = FMath::Max(m_CurrentShield - damage, 0.f);
	m_SheildRecoverDelayTimer = m_SheildRevoverDelay;

	if(leftOverDamage > 0.f){m_CurrentHealth = FMath::Max(m_CurrentHealth - leftOverDamage, 0.f);}

	if(m_CurrentHealth <= 0.f){onComponentDead.Broadcast(instigator);}
}

// Called every frame
void AMyActorHealthComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if(m_CurrentShield == m_MaxShield || !m_CanRegenSheild) {return;}
	
	if(m_SheildRecoverDelayTimer > 0.f)
	{
		m_SheildRecoverDelayTimer -= DeltaTime;
	}
	else
	{
		m_CurrentShield = FMath::Min(m_MaxShield, m_CurrentShield + (m_SheildRevoverRate * DeltaTime));
	}
	
}

