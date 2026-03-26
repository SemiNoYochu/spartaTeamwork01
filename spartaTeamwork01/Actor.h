#pragma once
#include <iostream>
#include <string>
#include <algorithm>

class Actor {
private:
    int Hp;
    int Atk;
    int Def;
    std::string Name;

public:
    Actor(int Hp, int Atk, int Def, std::string Name)
        : Hp(Hp), Atk(Atk), Def(Def), Name(Name) {
    }
    virtual ~Actor() {}

    // 공격 로직은 자식에서 구현
    virtual void Attack(Actor* Target) = 0;

    // 모든 Getter/Setter를 가상 함수로 변경
    virtual int GetHP() const { return Hp; }
    virtual void SetHP(int Value) { Hp = Value; }

    virtual int GetAtk() const { return Atk; }
    virtual void SetAtk(int Value) { Atk = Value; }

    virtual int GetDef() const { return Def; }
    virtual void SetDef(int Value) { Def = Value; }

    virtual std::string GetName() const { return Name; }
    virtual void SetName(const std::string& NewName) { Name = NewName; }

    virtual bool IsDead() const { return Hp <= 0; }
};