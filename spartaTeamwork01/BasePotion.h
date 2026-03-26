#pragma once
#include <string>

using namespace std;

class Actor;

class BasePotion
{
private:
	string name;
	int price;
public:
	BasePotion(string name);
	virtual ~BasePotion();
	virtual void Use(Actor* target) = 0;

	string GetName() const;
	int GetPrice() const;
	void SetPrice(int price);
};


class HPPotion : public BasePotion
{
public:
	HPPotion();
	virtual void Use(Actor* target) override;
};

class MPPotion : public BasePotion
{
public:
	MPPotion();
	virtual void Use(Actor* target) override;
};

