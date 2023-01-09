#include <iostream>

int main() {
    /*
        pointers are a variable that stores a memory address of another variable
            sometimes it is easier to work with an address
        
        e.g. 
            if I have a stack of pizzas that I am going to give out for free in my neighbourhood
                instead of going around house to house carrying the free pizzas and handing it out
                    it's a lot easier to give everyone an address detailing where the pizzas are located

        & is the address-of operator
        * is the dereference operator
    */

   std::string name = "Calvin";

   // To create a pointer to my name:
    //'p' at the beginning of the var name is a common naming scheme
        //Note the pointer of a var must be the same type as the original var

   std::string *pName = &name;

   std::cout << "The variable name: " << *pName << ", is located at the address: " << pName << '\n';

   // back to the pizza analogy
   std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
   std::string *pFreePizzas = freePizzas;

   std::cout<< "The string located at index one of the  array 'freePizzas,' is: " <<*pFreePizzas << "\n and is located at: "<< pFreePizzas <<'\n';

}