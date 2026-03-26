#include "Monster.h"
#include <iostream>
#include <cstdlib>

// Monster
Monster::Monster(int h, int a, int d, std::string n)
    : hp(h), atk(a), def(d), name(n) {
}

std::string Monster::getName() const
{
    return name;
}

int Monster::getHP() const
{
    return hp;
}

void Monster::takeDamage(int damage)
{
    int realDamage = damage - def;
    if (realDamage < 0) realDamage = 0;

    hp -= realDamage;
}

int Monster::drop()
{
    return rand() % 11;
}

// Golem
Golem::Golem() : Monster(50, 20, 5, "Golem") {}

int Golem::attack()
{
    std::cout << "Golem attacks!\n";
    return atk;
}

// Orc
Orc::Orc() : Monster(80, 15, 10, "Orc") {}

int Orc::attack()
{
    std::cout << "Orc swings a club!\n";
    return atk;
}

// Slime
Slime::Slime() : Monster(30, 5, 2, "Slime") {}

int Slime::attack()
{
    std::cout << "Slime splashes!\n";
    return atk;
}