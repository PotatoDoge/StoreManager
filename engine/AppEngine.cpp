//
// Created by Bastian Prado on 29/12/23.
//

#include "AppEngine.h"
#include <iostream>
#include <list>
#include "../entity/Item/Item.h"
#include "../entity/ShoppingCart/ShoppingCart.h"

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

void AppEngine::runApp() {
    ShoppingCart shoppingCart;
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

