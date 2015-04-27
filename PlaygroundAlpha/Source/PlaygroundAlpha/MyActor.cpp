// Fill out your copyright notice in the Description page of Project Settings.

#include "PlaygroundAlpha.h"
#include "MyActor.h"


void AMyActor::UpdateDPS()
{
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TotalDamage = 300;
	DamageTimeInSeconds = 1.f;
}

void AMyActor::PostInitProperties()
{
	Super::PostInitProperties();	
	UpdateDPS();
}

void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	UpdateDPS();
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

