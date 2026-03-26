#pragma once

#include "Actor.h"
#include <iostream>
#include <string>

using namespace std;

class BaseCharacter : public Actor
{
private:
	string name;
public:
	BaseCharacter();
	~BaseCharacter();
	void attack() override;
	void defend() override;
	void heal() override;
};