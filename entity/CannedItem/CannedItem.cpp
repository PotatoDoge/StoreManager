//
// Created by Bastian Prado on 05/01/24.
//

#include "CannedItem.h"

CannedItem::CannedItem():Item() {}

CannedItem::CannedItem(string name, float price, string description,
           string canMaterial, string brand): Item(name, price, description){
    this->canMaterial = canMaterial;
    this->brand = brand;
}

string CannedItem::getCanMaterial() {
    return this->canMaterial;
}

void CannedItem::setCanMaterial(string canMaterial) {
    this->canMaterial = canMaterial;
}

string CannedItem::getBrand() {
    return this->brand;
}

void CannedItem::setBrand(string brand) {
    this->brand = brand;
}
