#include <iostream>
#include <list>
#include "entity/Item/Item.h"
#include "entity/ShoppingCart/ShoppingCart.h"

using namespace std;

int main() {
    Item woodenChair("Chair",15.5,"Wooden chair");
    Item fridge("Fridge",35.5,"Brand new fridge");
    Item oven("Oven",20.0,"Oven");
    Item lamp("Lamp",5.0,"Lamp");
    list<Item> items = {woodenChair,fridge,oven,lamp};
    ShoppingCart shoppingCart;
    shoppingCart.addMultipleItems(items);
    shoppingCart.displayItemsInfo();
    cout << "Shopping cart initial size: " << shoppingCart.numberOfItemsInCart() << endl;
    shoppingCart.clearShoppingCart();
    cout << "Shopping cart final size: " << shoppingCart.numberOfItemsInCart() << endl;
    return 0;
}
