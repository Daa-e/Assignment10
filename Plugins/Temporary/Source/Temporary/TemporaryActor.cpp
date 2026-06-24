#include "TemporaryActor.h"

#include "Kismet/KismetSystemLibrary.h"

ATemporaryActor::ATemporaryActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATemporaryActor::BeginPlay()
{
	Super::BeginPlay();

	UKismetSystemLibrary::PrintString(
		this,
		TEXT("TemporaryActor BeginPlay"),
		true,
		true,
		FLinearColor::Blue,
		5.0f
	);

	UE_LOG(LogTemp, Warning, TEXT("TemporaryActor BeginPlay"));
}