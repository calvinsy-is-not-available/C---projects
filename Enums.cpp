#include <iostream>

enum Day {Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};

//if you don't assign numbers the elements in the enum, you will implicitly assing 0-n for the items
    //just like above;
    //        0        1          2           3
enum Flavors {Vanilla, Chocolate, Strawberry, Mint};

int main() {

    /*
        enums are a user-defined data type that consists of
            paired named-integer constants.
            They are great if you have a set of potential options
    */

   //std::string today = "sunday";
   Day today = Sunday;

   switch(today) {
        //could use the associated numbers to activate the switch as well
        case Sunday:
            std::cout << "It's Sunday\n";
            break;
        case Monday:
            std::cout << "It's Monday\n";
            break;
        case Tuesday:
            std::cout << "It's Tuesday\n";
            break;
        case Wednesday:
            std::cout << "It's Wednesday\n";
            break;
        case Thursday:
            std::cout << "It's Thursday\n";
            break;
        case Friday:
            std::cout << "It's Friday\n";
            break;
        case Saturday:
            std::cout << "It's Saturday\n";
            break;
   }

   return 0;
}