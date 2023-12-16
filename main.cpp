#include <iostream>
#include <list>
#include "entity/Item.h"

using namespace std;

int main() {
    Item woodenChair("Chair",15.5,"Wooden chair");
    Item fridge("Fridge",35.5,"Brand new fridge");
    Item oven("Oven",20.0,"Oven");
    Item lamp("Lamp",5.0,"Lamp");
    list<Item> ikea = {woodenChair,fridge,oven,lamp};

    for (Item elem : ikea) {
        elem.showItemInfo();
        cout << "-----------" << endl;
    }
    return 0;
}
