//
// Created by Bastian Prado on 10/12/23.
//

#ifndef STOREMANAGER_ITEM_H
#define STOREMANAGER_ITEM_H

#include <string>

using namespace std;

class Item {
private:
    string id;
    string name;
    float price;
    string description;
public:

    // Empty constructor
    Item();
    //Parametrized constructor
    Item(string name, float price, string description){
        this->name = name;
        this->price = price;
        this->description = description;
    }

    string getId() const;
    void setId(string id);

    string getName() const;
    void setName(string name);

    float getPrice() const;
    void setPrice(float price);

    string getDescription() const;
    void setDescription(string description);

};


#endif //STOREMANAGER_ITEM_H
