// Fill out your copyright notice in the Description page of Project Settings.

#include "TestActor.h"

#include "Kismet/KismetSystemLibrary.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	UKismetSystemLibrary::PrintString(
		this,
		TEXT("TestActor BeginPlay"),
		true,
		true,
		FLinearColor::Green,
		5.0f
	);

	UE_LOG(LogTemp, Warning, TEXT("TestActor BeginPlay"));
}