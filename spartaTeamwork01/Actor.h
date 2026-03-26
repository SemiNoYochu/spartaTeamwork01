#pragma once
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Actor {
private:
    int Hp;
    int Atk;
    int Def;
    const string Name;

public:
    Actor(int Hp, int Atk, int Def, std::string Name)
        : Hp(Hp), Atk(Atk), Def(Def), Name(Name) {
    }
    virtual ~Actor() {}

    // 공격 로직은 자식에서 구현
    virtual bool Attack(Actor* Target) = 0;
	virtual bool Defend(Actor* Attacker) = 0;
	virtual bool Defend(int dmg) = 0;

    // 모든 Getter/Setter를 가상 함수로 변경
    virtual int GetHP() const noexcept { return Hp; }
    virtual void SetHP(int Value) noexcept { Hp = Value; }

    virtual int GetAtk() const noexcept { return Atk; }
    virtual void SetAtk(int Value) noexcept { Atk = Value; }

    virtual int GetDef() const noexcept { return Def; }
    virtual void SetDef(int Value) noexcept { Def = Value; }

    virtual const string& GetName() const noexcept { return Name; }

    virtual bool IsDead() const noexcept { return Hp <= 0; }
};