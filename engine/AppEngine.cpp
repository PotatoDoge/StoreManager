//
// Created by Bastian Prado on 29/12/23.
//

#include "AppEngine.h"
#include <iostream>
#include <list>
#include "../entity/Item/Item.h"
#include "../entity/ShoppingCart/ShoppingCart.h"
#include "../entity/OrganicItem/OrganicItem.h"
#include "../entity/CannedItem/CannedItem.h"

using namespace std;

int showMenu(){

    int option;
    cout << "Menu:" << endl;
    cout << "1)Add item to cart" << endl;
    cout << "2)Remove item to cart" << endl;
    cout << "3)Show items" << endl;
    cout << "4)Pay and checkout" << endl;
    cout << "5)Exit" << endl;

    // validate input
    while (true){
        cin >> option;
        if (std::cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Not a valid input, please enter an option from the menu" << endl;
        } else {
            return option;
        }
    }
}

list<Item> loadStoreItems(){
    list<Item> storeItems;
    //Organic
    OrganicItem apple("Apple",1.5,"Price is per unit", "25/01/2023",0.5, "red");
    OrganicItem pineapple("Pineapple",3.5,"Price is per unit", "27/01/2023",1.5, "yellow");
    OrganicItem blueberry("Blueberry",0.3,"Price is per unit", "25/01/2023",0.1, "blue");
    OrganicItem cucumber("Cucumber",1.2,"Price is per unit", "30/01/2023",1.3, "green");
    OrganicItem banana("Yellow",2.0,"Price is per unit", "25/02/2023",1.0, "yellow");

    //Canned
    CannedItem beans("Beans",3.0, "Can of beans", "Aluminium", "GenericBeansCo");
    CannedItem corn("Corn",1.4,"Canned corn","Steel","GenericCornCo");

    //add items to list
    storeItems.push_front(apple);
    storeItems.push_front(pineapple);
    storeItems.push_front(blueberry);
    storeItems.push_front(cucumber);
    storeItems.push_front(banana);
    storeItems.push_front(beans);
    storeItems.push_front(corn);
    return storeItems;
}

void AppEngine::runApp() {
    ShoppingCart shoppingCart;
    list<Item> storeItems = loadStoreItems();
    bool shopping = true;
    while(shopping){
        int option = showMenu();
        switch(option) {
            case 1:
                // Add item
                break;
            case 2:
                // Remove item
                break;
            case 3:
                //Show items
                shoppingCart.displayItemsInfo();
                break;
            case 4:
                //Pay and checkout
                shoppingCart.checkoutAndPay();
                shopping = false;
                break;
            case 5:
                shopping = false;
                break;
            default:
                cout << "An error occurred, start again, please";
                break;
        }
    }
}

