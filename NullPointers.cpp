#include <iostream>

int main() {

    /* Null vals are the same as they are in Java
        Just as a refresher:
            A null val is a val that means something has no value.
            When a pointer is holding a null value, that pointer is
                not pointing to anything.
        

        'nullptr' is the keyword that represents a null pointer literal
            they are helpful when determining if an address was successfully assigned to a pointer
        
        If we create a pointer, and don't assign it a value, we don't know where it is pointing to
            this is bad practice

        when using pointers be careful that your code isn't dereferencing nullptr
        or pointing to free memory
            that will cause undefined behavior
    */ 


   int *pointer = nullptr;
   int x = 123;

   // dereferencing a nullptr or a pointer that is not initially assigned may lead to undefined behavior
    // What some programmers do is checking if their pointer is a nullptr before proceeding
   pointer = &x;

   // assigning a nullptr may fail when working with dynamic memory
   if (pointer == nullptr) {
    //if your pointer was a nullptr it is not safe to dereference that pointer
    std::cout << "Address was not assigned\n";
   }
   else {
    std::cout<< "Address was assigned";
    std::cout<< *pointer << '\n';
   }


   return 0;

}