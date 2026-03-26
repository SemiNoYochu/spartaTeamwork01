#include "BaseCharacter.h"

using namespace std;

// BaseCharacter 생성자 정의 수정
BaseCharacter::BaseCharacter(int hp, int Atk, int def, string name, int mp)
    : Actor(hp, Atk, def, name), mp(mp)
{
}

BaseCharacter::~BaseCharacter()
{
}

bool BaseCharacter::Attack(Actor* actor)
{
    cout << GetName() << "이(가) " << actor->GetName() << "을(를) 공격합니다!" << endl;
    int damage = max(0, GetAtk() - actor->GetDef());
    return actor->Defend(damage);
}

bool BaseCharacter::Defend(Actor* actor)
{
    cout << GetName() << "이(가) " << actor->GetName() << "의 공격에 데미지를 입습니다." << endl;
    int damage = max(0, actor->GetAtk() - GetDef());
    SetHP(GetHP() - damage);
	return IsDead();
}

bool BaseCharacter::Defend(int dmg) {
    int damage = max(0, dmg - GetDef());
    cout << damage << "의 데미지를 입었습니다." << endl;
    SetHP(GetHP() - damage);
    return IsDead();
}

int BaseCharacter::GetHP() const
{
    return Actor::GetHP();
}

void BaseCharacter::SetHP(int Value)
{
    Actor::SetHP(Value);
}

int BaseCharacter::GetAtk() const
{
    return Actor::GetAtk();
}

void BaseCharacter::SetAtk(int Value)
{
    Actor::SetAtk(Value);
}  

int BaseCharacter::GetDef() const
{
    return Actor::GetDef();
}

void BaseCharacter::SetDef(int Value)
{
    Actor::SetDef(Value);
}


const string& BaseCharacter::GetName() const
{
    return Actor::GetName();
}  

bool BaseCharacter::IsDead() const
{
    return Actor::IsDead();
}  

void BaseCharacter::AddItem(unique_ptr<BaseItem> item, int quantity)
{
    inventory[move(item)] += quantity;
}

void BaseCharacter::printInventory() const
{
    cout << "인벤토리:" << endl;
    for (const auto& pair : inventory)
    {
        cout << pair.first->GetName() << " x" << pair.second << endl;
    }
}

void BaseCharacter::AddPotion(unique_ptr<BasePotion> potion, int quantity)
{
    potions[move(potion)] += quantity;
}

void BaseCharacter::printPotions() const
{
    cout << "포션 목록:" << endl;
    for (const auto& pair : potions)
    {
        cout << pair.first->GetName() << " x" << pair.second << endl;
    }
}

void BaseCharacter::UsePotion(const string& potionName, Actor* target)
{
    for (auto& pair : potions)
    {
        if (pair.first->GetName() == potionName && pair.second > 0)
        {
            pair.first->Use(target);
            pair.second--;
            return;
        }
    }
    cout << "포션이 없습니다: " << potionName << endl;
}


