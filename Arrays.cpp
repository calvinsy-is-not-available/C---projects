#include <iostream>
#include <experimental/iterator>

void printArray(std::string array[], int size);

int main() {

    std::string cars[] = {"Corvette", "Mustang", "Camry"};
    
    int size = sizeof(cars)/sizeof(cars[0]);
    printArray(cars, size);

    return 0;
}

void printArray(std::string array[], int size) {

    for (int i = 0; i<size;i+=1) {
        std::cout << array[i] << ' ';
    }
}