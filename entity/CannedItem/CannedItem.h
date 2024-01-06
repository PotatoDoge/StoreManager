//
// Created by Bastian Prado on 05/01/24.
//

#ifndef STOREMANAGER_CANNEDITEM_H
#define STOREMANAGER_CANNEDITEM_H
#include <string>
#include "../Item/Item.h"

using namespace std;

class CannedItem: public Item {
private:
    string canMaterial;
    string brand;
public:

    CannedItem();

    CannedItem(string name, float price, string description, string canMaterial, string brand);

    string getCanMaterial();
    void setCanMaterial(string canMaterial);

    string getBrand();
    void setBrand(string brand);

};


#endif //STOREMANAGER_CANNEDITEM_H
