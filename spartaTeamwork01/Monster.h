#pragma once
#pragma once
#include <string>

class Monster
{
protected:
    int hp;
    int atk;
    int def;
    std::string name;

public:
    Monster(int h, int a, int d, std::string n);

    virtual int attack() = 0;
    void takeDamage(int damage);
    int drop();

    std::string getName() const;
    int getHP() const;

    virtual ~Monster() {}
};

class Golem : public Monster
{
public:
    Golem();
    int attack() override;
};

class Orc : public Monster
{
public:
    Orc();
    int attack() override;
};

class Slime : public Monster
{
public:
    Slime();
    int attack() override;
};