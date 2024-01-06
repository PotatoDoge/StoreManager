//
// Created by Bastian Prado on 05/01/24.
//

#ifndef STOREMANAGER_CLOTHINGITEM_H
#define STOREMANAGER_CLOTHINGITEM_H

#include <string>
#include "../Item/Item.h"

using namespace std;

class ClothingItem: public Item {
private:
    char size;
    string color;
    string material;

public:

    ClothingItem();

    ClothingItem(string name, float price, string description, char size, string color, string material);

    char getSize();
    void setSize(char size);

    string getColor();
    void setColor(string color);

    string getMaterial();
    void setMaterial(string material);

};


#endif //STOREMANAGER_CLOTHINGITEM_H
