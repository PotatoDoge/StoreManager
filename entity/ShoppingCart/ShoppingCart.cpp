#include <iostream>
#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    this->itemsInCart = map<int,Item>();
}

void ShoppingCart::displayItemsInfo(){
    if(this->itemsInCart.empty()){
        cout << "No items in cart!" << endl;
        return;
    }
    cout << "Items in cart:" << endl;
    for (auto item : this->itemsInCart) {
        cout << "-----------" << endl;
        item.second.showItemInfo();
        cout << "-----------" << endl;
    }
}


void ShoppingCart::addItem(Item item){
    this->itemsInCart.insert(pair(item.getId(), item));
}

void ShoppingCart::removeItem(int itemId){
    auto foundItem = this->itemsInCart.find(itemId);
    if(foundItem != this->itemsInCart.end()){
        this->itemsInCart.erase(foundItem->first);
        cout << "Item removed successfully" << endl;
        return;
    }
    cout << "No item was found with that code" << endl;
}

void ShoppingCart::clearShoppingCart(){
    this->itemsInCart.clear();
}

size_t ShoppingCart::numberOfItemsInCart(){
    return this->itemsInCart.size();
}

void ShoppingCart::checkoutAndPay(){
    double receipt = 0;
    if(this->itemsInCart.empty()){
        cout << "No items in cart!" << endl;
        return;
    }
    for(auto item: this->itemsInCart){
        receipt+= item.second.getPrice();
    }
    cout << "The total is: $" << receipt << endl;
    itemsInCart.clear();
    cout << "Your shopping cart is now empty" << endl;
}