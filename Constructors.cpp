#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;

    // The default constructor    
    Student(std::string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};


int main() {

    /*
        the constructor is a special method that is automatically called
            when an object is instantiated.
        Useful for assinging values to attributes as args
        We can overload constructors just like in Java
    */ 

   return 0;
}