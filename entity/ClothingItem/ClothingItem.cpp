//
// Created by Bastian Prado on 05/01/24.
//

#include "ClothingItem.h"

ClothingItem::ClothingItem() {}

ClothingItem::ClothingItem(string name, float price, string description, char size, string color,
                           string material): Item(name, price, description) {
    this->size = size;
    this->color = color;
    this->material = material;
}

char ClothingItem::getSize() {
    return this->size;
}

void ClothingItem::setSize(char size) {
    this->size = size;
}

string ClothingItem::getColor() {
    return this->color;
}

void ClothingItem::setColor(string color) {
    this->color = color;
}

string ClothingItem::getMaterial() {
    return this->material;
}

void ClothingItem::setMaterial(string material) {
    this->material = material;
}
