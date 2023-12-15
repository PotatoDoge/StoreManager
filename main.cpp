#include <iostream>
#include "entity/Item.h"

using namespace std;

int main() {
    Item item("IPhone",15.5,"New Iphone");
    cout << "Hello, World!" << endl;
    cout << item.getName() << endl;
    cout << item.getPrice() << endl;
    cout << item.getDescription() << endl;
    return 0;
}
