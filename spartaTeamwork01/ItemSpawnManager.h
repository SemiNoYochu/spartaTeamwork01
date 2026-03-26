#pragma once
#include <memory>
#include "BaseItem.h"

enum class ItemType
{
	Item1,
	Item2
};

class ItemSpawnManager
{
public:
	static unique_ptr<BaseItem> MakeItem(ItemType type);
};