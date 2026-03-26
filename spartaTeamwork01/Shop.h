#pragma once
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
class Character;
class Item;

class Shop {
private:
    map<string, int> potionStock;
    map<string, int> equipmentStock;
    map<string, int> itemPrices;

public:

    Shop();

    void SellItem(Character* player, string itemName);
    void AddStock(string itemName, int count);
};