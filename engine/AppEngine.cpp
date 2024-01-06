//
// Created by Bastian Prado on 29/12/23.
//

#include "AppEngine.h"
#include <iostream>
#include <list>
#include <map>
#include "../entity/Item/Item.h"
#include "../entity/ShoppingCart/ShoppingCart.h"
#include "../entity/OrganicItem/OrganicItem.h"
#include "../entity/CannedItem/CannedItem.h"
#include "../entity/ClothingItem/ClothingItem.h"

using namespace std;

int showMenu(){

    int option;
    cout << "Menu:" << endl;
    cout << "1)Show available items" << endl;
    cout << "2)Add item to cart" << endl;
    cout << "3)Remove item to cart" << endl;
    cout << "4)Show items" << endl;
    cout << "5)Pay and checkout" << endl;
    cout << "6)Exit" << endl;

    // validate input
    while (true){
        cin >> option;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Not a valid input, please enter an option from the menu" << endl;
        } else {
            return option;
        }
    }
}

list<Item> loadStoreItems(){

    //Declare
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

    //Clothes
    ClothingItem shirt("Shirt",20.5,"Fancy shirt",'M',"Green","Cotton");
    ClothingItem jeans("Jeans",7.5,"Pair of jeans",'4',"Blue","Denim");
    ClothingItem coat("Coat",30,"Fancy coat",'L',"Brown","Wool");

    //add items to list
    storeItems.push_front(apple);
    storeItems.push_front(pineapple);
    storeItems.push_front(blueberry);
    storeItems.push_front(cucumber);
    storeItems.push_front(banana);
    storeItems.push_front(beans);
    storeItems.push_front(corn);
    storeItems.push_front(shirt);
    storeItems.push_front(jeans);
    storeItems.push_front(coat);
    return storeItems;
}

/**
 * Generate a map to optimize item search <id, item>
 * @param availableItem items
 * @return map
 */
map<int, Item> generateAvailableItemsMap(list<Item> availableItem){
     map<int, Item> itemsMap;
     for(Item item: availableItem){
         itemsMap.insert(pair(item.getId(), item));
     }
    return itemsMap;
}

void displayAvailableItems(list<Item> storeItems){
    for(Item item:storeItems){
        cout << "-----" <<endl;
        item.showItemInfo();
        cout << "-----" <<endl;
    }
}

Item addItemToCart(map<int,Item> items){
    int code;
    cout << "Input the code of the item to be added" << endl;
    cin >> code;

    if(cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Not a valid input" << endl;
        return Item(0);
    }

    auto foundItem = items.find(code);
    if(foundItem != items.end()){
        return foundItem->second;
    }

    cout << "Item not found with that code" << endl;
    return Item(0);

}

void AppEngine::runApp() {

    ShoppingCart shoppingCart; // where items will be added
    list<Item> storeItems = loadStoreItems(); // generate available items
    map<int, Item> items = generateAvailableItemsMap(storeItems); // create map for a more efficient search
    Item selectedItem; // selected item to be added
    bool shopping = true;

    while(shopping){
        int option = showMenu();
        switch(option) {
            case 1:
                // Show items
                displayAvailableItems(storeItems);
                break;
            case 2:
                // Add item
                selectedItem = addItemToCart(items);
                if(selectedItem.getId() == 0){
                    break;
                }
                shoppingCart.addItem(selectedItem);
                cout << selectedItem.getName() << " added successfully" <<endl;
                break;
            case 3:
                // Remove item
                break;
            case 4:
                //Show items
                shoppingCart.displayItemsInfo();
                break;
            case 5:
                //Pay and checkout
                shoppingCart.checkoutAndPay();
                shopping = false;
                break;
            case 6:
                shopping = false;
                break;
            default:
                cout << "Not a valid option" <<endl;
                break;
        }
    }
    cout << "Good bye! We hope to see you again! :D" << endl;
}

