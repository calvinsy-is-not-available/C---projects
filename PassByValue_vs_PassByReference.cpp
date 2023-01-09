#include <iostream>

// Here we use the '&' operator to pass the value of the given strings by reference and not value
void swap(std::string &x, std::string &y);

int main() {

    std::string drink = "Some drink";
    std::string food = "Some food";

    std::cout << "Before swap\n" << drink << '\n' << food << '\n';
    swap(drink, food);
    std::cout << "After swap\n" << drink << '\n' << food << '\n';
}

void swap (std::string &x, std::string &y) {
    std::string temp = x;
    x = y;
    y = temp;
}

