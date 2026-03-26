#pragma once
#include <iostream>

using namespace std;

class Actor
{
private:
	int hp;
	int atk;
	int def;
public:
	Actor();
	~Actor();
	virtual void attack();
	virtual void defend();
	virtual void heal();
};