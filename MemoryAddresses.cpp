#include <iostream>

int main() {

    //A memory address is the location where memory is stored
    //A memory address can be accessed with '&,' the address of operator

    //Example
    std::string name = "Calvin";
    int age = 19;
    bool student = true;

    std::cout << "The memory address (in hex) for my name Calvin in my current memory" << &name << '\n';
}