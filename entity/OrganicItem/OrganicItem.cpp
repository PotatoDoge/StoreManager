//
// Created by Bastian Prado on 05/01/24.
//

#include "OrganicItem.h"

OrganicItem::OrganicItem():Item() {}

OrganicItem::OrganicItem(string name, float price, string description, string expirationDate, double weight,
                         string color): Item(name,price, description) {
    this->expirationDate = expirationDate;
    this->color = color;
    this->weight = weight;
}

string OrganicItem::getExpirationDate() {
    return this->expirationDate;
}

void OrganicItem::setExpirationDate(string expirationDate) {
    this->expirationDate = expirationDate;
}

double OrganicItem::getWeight() {
    return this->weight;
}

void OrganicItem::setWeight(double weight) {
    this->weight = weight;
}

string OrganicItem::getColor() {
    return this->color;
}

void OrganicItem::setColor(string color) {
    this->color = color;
}