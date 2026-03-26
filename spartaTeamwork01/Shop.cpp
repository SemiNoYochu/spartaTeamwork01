#include "Shop.h"
#include "BaseCharacter.h"
#include "BasePotion.h"
#include <iostream>

Shop::Shop() {
    this->itemPrices["HPPotion"] = 50;
    this->itemPrices["MPPotion"] = 200;
}

void Shop::SellItem(Character* player, string itemName) {

    int cost = this->itemPrices[itemName];

    if (player->gold >= cost) {
        player->gold -= cost;


        player->AddItem(itemName);

        cout << itemName << " 구매 완료! 남은 골드: " << player->gold << "\n";
     }
    else {
        cout << "골드가 부족합니다!\n";
     }
}