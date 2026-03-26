#pragma once
#include "Actor.h"
#include <string>

class Monster : public Actor {
public:
    Monster(int InHP, int InAtk, int InDef, std::string InName)
        : Actor(InHP, InAtk, InDef, InName) {
    }
    virtual ~Monster() {}

    virtual void Attack(Actor* Target) override = 0;
};

class Golem : public Monster {
public:
    Golem() : Monster(50, 20, 10, "Golem") {}
    virtual void Attack(Actor* Target) override;
};

class Orc : public Monster {
public:
    Orc() : Monster(80, 15, 5, "Orc") {}
    virtual void Attack(Actor* Target) override;
};

class Slime : public Monster {
public:
    Slime() : Monster(30, 10, 5, "Slime") {}
    virtual void Attack(Actor* Target) override;
};