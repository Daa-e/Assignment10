#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InventoryData.generated.h"

UCLASS(BlueprintType)
class TEST_API UInventoryData : public UObject
{
	GENERATED_BODY()

public:
	UInventoryData();

	int32 GetGold() const;
	int32 GetPotionCount() const;
	int32 GetMaxSlotCount() const;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 Gold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 PotionCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 MaxSlotCount;
};