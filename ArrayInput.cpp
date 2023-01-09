#include <iostream>

void init();

int main() {

    init();

    return 0;
    
}

void init() {
    std::cout << "How big will you like the grocery list to be?\n";
    int size;
    std::cin >> size;
    std::cout << "You entered: " << size << " items\n";
    std::string groceryList[size];
    std::cout<<"Please enter in the items that correspond to your list\n";
    for (int i = 0; i<size;i+=1) {
        int temp_int = i+1;
        std::string temp_grocery_item;
        std::cout<< "Please enter item " << temp_int << '\n';
        std::getline(std::cin >> std::ws, temp_grocery_item);
        groceryList[i] = temp_grocery_item;
    }

    std::cout<<"Your grocery list is:  \n";
    std::cout<<"***********************\n";
    for (std::string item : groceryList) {
        std::cout<< item << '\n';
    }
    std::cout<<"***********************\n";
    std::cout<<"Thanks for shopping with us!\n";
}