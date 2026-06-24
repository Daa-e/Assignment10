#include "InventoryData.h"

UInventoryData::UInventoryData()
{
	Gold = 100;
	PotionCount = 3;
	MaxSlotCount = 20;
}

int32 UInventoryData::GetGold() const
{
	return Gold;
}

int32 UInventoryData::GetPotionCount() const
{
	return PotionCount;
}

int32 UInventoryData::GetMaxSlotCount() const
{
	return MaxSlotCount;
}