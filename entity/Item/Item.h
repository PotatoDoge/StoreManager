#ifndef STOREMANAGER_ITEM_H
#define STOREMANAGER_ITEM_H

#include <string>

// .h -> class declaration

using namespace std;

class Item {
private:
    int id;
    string name;
    float price;
    string description;

    int generateRandomId();

public:

    // Empty constructor
    Item();

    // Constructor to handle errors
    Item(int id);

    //Parametrized constructor
    Item(string name, float price, string description);

    int getId() const;
    void setId(int id);

    string getName() const;
    void setName(string name);

    float getPrice() const;
    void setPrice(float price);

    string getDescription() const;
    void setDescription(string description);

    void showItemInfo();

};


#endif //STOREMANAGER_ITEM_H
