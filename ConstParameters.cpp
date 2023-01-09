#include <iostream>

void printInfo(std::string name, int age);

int main() {
    //const parameter is a parameter that is effectively read-only 
                // code is mroe secure and conveys intent
                // useful for references and pointers
                // Perhaps similar to final or constant in java

    //Example
    std::string name = "Calvin";
    int age = 19;

    printInfo(name, age);
    
    return 0;
}

void printInfo(const std::string name, const int age) {
    std::cout << name << '\n';
    std::cout << age << '\n';
}