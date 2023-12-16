#ifndef STOREMANAGER_ITEM_H
#define STOREMANAGER_ITEM_H

#include <string>

// .h -> class declaration

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
    Item(string name, float price, string description);

    string getId() const;
    void setId(string id);

    string getName() const;
    void setName(string name);

    float getPrice() const;
    void setPrice(float price);

    string getDescription() const;
    void setDescription(string description);

    void showItemInfo();

};


#endif //STOREMANAGER_ITEM_H
