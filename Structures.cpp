#include <iostream>

struct student {
    std::string name;
    double gpa;
    bool enrolled;
};

//How to associate a struct to a function

struct Car {
    std::string model;
    int year;
    std::string color;
};

//Suppose we had a function to display the members of our car struct

void printCar(Car car);

//mutating a car
void paintCar(Car &car, std::string paintColor);

int main() {

    /*
        A struct (structure) is something that groups related variables under one name
            They can contain varying data types
                vars in a struct are known as members
            Members can be accessed with the '.' or class member access operator 

        Seems similar to classes and parent classes in Java
    */

    student student_1;
        // These are members
        student_1.name = "Spongebob";
        student_1.gpa = 3.2;
        student_1.enrolled = true;

    student student_2;
        student_1.name = "Patrick";
        student_1.gpa = 2.9;
        student_1.enrolled = true;

    Car ford;
        ford.model = "Mustang GT, California Special";
        ford.color = "White";
        ford.year = 2016;

    // let's mutate the car:
    paintCar(ford, "Grey pearlescent white");
    printCar(ford);


}

void paintCar(Car &car, std::string paintColor) {
    car.color = paintColor;
}

void printCar(Car car) {
    // structs are passed by value not reference
        // Therefore we pass a copy of a struct not the original
        // To work with the original, use the '&' operator
    // Therefore this prints a copy and not the original
    std::cout<< car.model << '\n';
    std::cout<< car.year << '\n';
    std::cout<< car.color << '\n';
}