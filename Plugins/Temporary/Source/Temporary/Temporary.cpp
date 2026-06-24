#include "Temporary.h"

#define LOCTEXT_NAMESPACE "FTemporaryModule"

void FTemporaryModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Temporary Plugin StartupModule"));
}

void FTemporaryModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Temporary Plugin ShutdownModule"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FTemporaryModule, Temporary)