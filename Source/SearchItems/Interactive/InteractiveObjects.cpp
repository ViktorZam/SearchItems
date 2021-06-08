// Fill out your copyright notice in the Description page of Project Settings.


#include "../Interactive/InteractiveObjects.h"

// Sets default values
AInteractiveObjects::AInteractiveObjects()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractiveObjects::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractiveObjects::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

