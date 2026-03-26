#include "Shop.h"
#include "BaseCharacter.h"
//#include "BaseItem.h"
#include <iostream>

Shop::Shop() {
    this->itemPrices["빨간포션"] = 50;
    this->itemPrices["강철검"] = 200;
}

void Shop::SellItem(Character* player, string itemName) {

    int cost = this->itemPrices[itemName];

    //if (player->gold >= cost) {
    //    player->gold -= cost;


   //     player->AddItem(itemName);

   //     cout << itemName << " 구매 완료! 남은 골드: " << player->gold << "\n";
    //}
    //else {
    //    cout << "골드가 부족합니다!\n";
    //}
}