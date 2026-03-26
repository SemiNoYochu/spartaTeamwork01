#pragma once

#include "Actor.h"
#include <iostream>
#include <string>
#include <map>
#include <memory>
#include "BaseItem.h"
#include "BasePotion.h"

using namespace std;

class BaseCharacter : public Actor
{
private:
	int mp;
	map<unique_ptr<BaseItem>, int> inventory; // 아이템과 수량을 저장하는 맵
	//map<unique_ptr<BaseSkill>, int> skills; // 아이템과 수량을 저장하는 맵
	//map<unique_ptr<BaseSkill>, int> usedSkills; // 아이템과 수량을 저장하는 맵
	map<unique_ptr<BasePotion>, int> potions; // 포션과 수량을 저장하는 맵
	map<unique_ptr<BasePotion>, int> usedPotions; // 포션과 수량을 저장하는 맵
public:
	BaseCharacter(int hp, int Atk, int def, std::string name, int mp);
	~BaseCharacter();
	bool Attack(Actor* actor) override;
	bool Defend(Actor* actor) override;
	bool Defend(int dmg) override;

	int GetHP() const override;
	void SetHP(int Value) override;

	int GetAtk() const override;
	void SetAtk(int Value) override;

	int GetDef() const override;
	void SetDef(int Value) override;

	const string& GetName() const override;

	bool IsDead() const override;

	// 아이템과 포션을 관리하는 함수들
	void AddItem(unique_ptr<BaseItem> item, int quantity = 1);
	void printInventory() const;

	void AddPotion(unique_ptr<BasePotion> potion, int quantity = 1);
	void printPotions() const;
	void UsePotion(const string& potionName, Actor* target);
};