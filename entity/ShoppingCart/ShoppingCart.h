//
// Created by Bastian Prado on 16/12/23.
//

#ifndef STOREMANAGER_SHOPPINGCART_H
#define STOREMANAGER_SHOPPINGCART_H

#include "../Item/Item.h"
#include <list>
#include <map>

class ShoppingCart {
private:
    map<int,Item> itemsInCart;
public:

    ShoppingCart();

    void displayItemsInfo();
    void addItem(Item item);
    void removeItem(int itemId);
    void clearShoppingCart();
    size_t numberOfItemsInCart();
    void checkoutAndPay();

};


#endif //STOREMANAGER_SHOPPINGCART_H
