#include <iostream>
#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    this->itemsInCart = list<Item>();
}

void ShoppingCart::displayItemsInfo(){
    for (Item item : this->itemsInCart) {
        item.showItemInfo();
        cout << "-----------" << endl;
    }
}


void ShoppingCart::addItem(Item item){
    this->itemsInCart.push_front(item);
}

void ShoppingCart::addMultipleItems(list<Item> toBeAdded){
    for(Item item: toBeAdded){
        this->itemsInCart.push_front(item);
    }
}

void ShoppingCart::removeItem(string itemName){
}
void ShoppingCart::clearShoppingCart(){
    this->itemsInCart.clear();
}

size_t ShoppingCart::numberOfItemsInCart(){
    return this->itemsInCart.size();
}

void ShoppingCart::checkoutAndPay(){
    double receipt = 0;
    for(Item item: this->itemsInCart){
        receipt+= item.getPrice();
    }
    cout << "The total is: $" << receipt << endl;
    itemsInCart.clear();
    cout << "Your shopping cart is now empty";
}