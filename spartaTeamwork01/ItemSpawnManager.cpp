#include "ItemSpawnManager.h"

using namespace std;

unique_ptr<BaseItem> ItemSpawnManager::MakeItem(ItemType type)
{
	switch (type)
	{
	case ItemType::Item1:
		return make_unique<Item1>();
	case ItemType::Item2:
		return make_unique<Item2>();
	}
	return nullptr;
}
