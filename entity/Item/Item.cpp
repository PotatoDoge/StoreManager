#include <iostream>
#include <random>
#include "Item.h"

// .cpp -> class definition

// Initialize the static random number generator outside the class
std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));

using namespace std;

Item::Item(){
    this->id = this->generateRandomId();
    this->name = "";
    this->price = 0.0;
    this->description = "";
}

Item::Item(int id) {
    this->id = id;
}

Item::Item(string name, float price, string description ){
    this->id = this->generateRandomId();
    this->name = name;
    this->price = price;
    this->description = description;
}

int Item::getId() const{
    return this->id;
}

void Item::setId(int newId){
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
    cout << "ID:" << this->id << endl;
    cout << "Name: " << this->name << endl;
}

int Item::generateRandomId() {

    // Define the distribution for 6-digit numbers
    std::uniform_int_distribution<int> distribution(100000, 999999);

    // Generate a random 6-digit code
    int randomCode = distribution(rng);
    return randomCode;
}

