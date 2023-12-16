#include <iostream>
#include <list>
#include "entity/Item/Item.h"

using namespace std;

int main() {
    Item woodenChair("Chair",15.5,"Wooden chair");
    Item fridge("Fridge",35.5,"Brand new fridge");
    Item oven("Oven",20.0,"Oven");
    Item lamp("Lamp",5.0,"Lamp");
    list<Item> shoppingCart = {woodenChair,fridge,oven,lamp};

    for (Item item : shoppingCart) {
        item.showItemInfo();
        cout << "-----------" << endl;
    }
    return 0;
}
