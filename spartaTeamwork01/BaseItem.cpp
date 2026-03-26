#include "BaseItem.h"

using namespace std;

BaseItem::BaseItem(const std::string& name)
{
	this->name = name;
}

BaseItem::~BaseItem() {}

std::string BaseItem::GetName() const
{
	return this->name;
}

Item1::Item1() : BaseItem("HPItem") {}

void Item1::Use(Actor* target)
{
	// Heal HP
}

Item2::Item2() : BaseItem("MPItem") {}

void Item2::Use(Actor* target)
{
	// Item2 Used
}