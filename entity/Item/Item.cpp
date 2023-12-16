#include <iostream>
#include "Item.h"

// .cpp -> class definition

using namespace std;

Item::Item(){
    this->id = "unique";
    this->name = "";
    this->price = 0.0;
    this->description = "";
}

Item::Item(string name, float price, string description ){
    this->id = "unique";
    this->name = name;
    this->price = price;
    this->description = description;
}

string Item::getId() const{
    return this->id;
}

void Item::setId(string newId){
    this->id = newId;
}

string Item::getName() const{
    return this->name;
}

void Item::setName(string newName){
    this->name = newName;
}

float Item::getPrice() const{
    return this->price;
}

void Item::setPrice(float newPrice){
    this->price = newPrice;
}

string Item::getDescription() const{
    return this->description;
}

void Item::setDescription(string newDescription){
    this->description = newDescription;
}

void Item::showItemInfo(){
    cout << "Name: " << this->name << endl;
    cout << "Price: " << this->price << endl;
    cout << "Description: " << this->description << endl;
}

