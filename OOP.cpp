#include <iostream>

class Human {
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat() {
            std::cout << "This person is eating \n";
        }

        void drink() {
            std::cout << "This person is drinking \n";
        }

        void sleep() {
            std::cout << "This person is sleeping \n";
        }
};

int main() {

    /*  in c++ an object is a collection of attributes and methods
            They can have characteristics that could preform actions.
            They can be used to mimic real world actions and items
            As in Java, they are created from a class which acts as
                a blueprint

        Here a method is a function that belongs to a class
    */

   //To create a Human object

    Human human_1;
        human_1.name = "Rick";
        human_1.occupation = "Scientist";
        human_1.age = 70;

    //To invoke Human methods:
    human_1.eat();
    human_1.drink();
    human_1.sleep();

   return 0;
}