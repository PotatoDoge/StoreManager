//
// Created by Bastian Prado on 05/01/24.
//

#ifndef STOREMANAGER_ORGANICITEM_H
#define STOREMANAGER_ORGANICITEM_H


#include "../Item/Item.h"

class OrganicItem: public Item {
private:
    string expirationDate;
    double weight;
    string color;
public:

    OrganicItem();

    OrganicItem(string name, float price, string description, string expirationDate, double weight, string color);

    string getExpirationDate();
    void setExpirationDate(string expirationDate);

    double getWeight();
    void setWeight(double weight);

    string getColor();
    void setColor(string color);
};


#endif //STOREMANAGER_ORGANICITEM_H
