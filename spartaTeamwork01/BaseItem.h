#pragma once
#include <string>

using namespace std;

class Actor;

class BaseItem
{
private:
	string name;
public:
	BaseItem(const string& name);
	virtual ~BaseItem();
	virtual void Use(Actor* target) = 0;

	string GetName() const;
};

class Item1 : public BaseItem
{
public:
	Item1();
	virtual void Use(Actor* target) override;
};

class Item2 : public BaseItem
{
public:
	Item2();
	virtual void Use(Actor* target) override;
};

