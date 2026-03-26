#include "BasePotion.h"

BasePotion::BasePotion(std::string name)
{
	this->name = name;
}

BasePotion::~BasePotion() {}

string BasePotion::GetName() const
{
	return this->name;
}

int BasePotion::GetPrice() const
{
	return this->price;
}

void BasePotion::SetPrice(int price)
{
	this->price = price;
}

HPPotion::HPPotion() : BasePotion("HPPotion") {}

void HPPotion::Use(Actor* target)
{
	// HP ..
}

MPPotion::MPPotion() : BasePotion("MPPotion") {}

void MPPotion::Use(Actor* target)
{
	// MP .. 
}