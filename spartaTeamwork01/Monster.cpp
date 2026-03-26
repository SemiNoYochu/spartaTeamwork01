#include "Monster.h"
#include <iostream>
#include <algorithm>

// --- Golem 구현 ---
void Golem::Attack(Actor* Target) {
    // 가상 함수인 GetAtk(), GetDef()를 통해 수치를 가져옴
    int Damage = std::max(1, GetAtk() - Target->GetDef());

    int NewHP = Target->GetHP() - Damage;
    Target->SetHP(NewHP);

    std::cout << GetName() << "이(가) 주먹으로 " << Target->GetName() << "을 공격!\n";
    std::cout << "데미지: " << Damage << " (상대 남은 HP: " << Target->GetHP() << ")\n";
}

// --- Orc 구현 ---
void Orc::Attack(Actor* Target) {
    int Damage = std::max(1, GetAtk() - Target->GetDef());
    Target->SetHP(Target->GetHP() - Damage);

    std::cout << GetName() << "이(가) 몽둥이로 " << Target->GetName() << "을 공격!\n";
    std::cout << "데미지: " << Damage << " (상대 남은 HP: " << Target->GetHP() << ")\n";
}

// --- Slime 구현 ---
void Slime::Attack(Actor* Target) {
    int Damage = std::max(1, GetAtk() - Target->GetDef());
    Target->SetHP(Target->GetHP() - Damage);

    std::cout << GetName() << "이(가) 몸통박치기로 " << Target->GetName() << "을 공격!\n";
    std::cout << "데미지: " << Damage << " (상대 남은 HP: " << Target->GetHP() << ")\n";
}