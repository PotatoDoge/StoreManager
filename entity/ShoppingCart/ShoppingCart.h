//
// Created by Bastian Prado on 16/12/23.
//

#ifndef STOREMANAGER_SHOPPINGCART_H
#define STOREMANAGER_SHOPPINGCART_H

#include "../Item/Item.h"
#include <list>

class ShoppingCart {
private:
    list<Item> itemsInCart;
public:

    ShoppingCart();

    void displayItemsInfo();
    void addItem(Item item);
    void addMultipleItems(list<Item> toBeAdded);
    void removeItem(string itemName);
    void clearShoppingCart();
    int numberOfItemsInCart();

};


#endif //STOREMANAGER_SHOPPINGCART_H
