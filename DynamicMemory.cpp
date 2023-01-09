#include <iostream>

int main() {

    /*  Dynamic memory is memory that is allocated after the program is compiled and is running

        We use the 'new' operator to allocate memory in the heap rather than the stack

        It is useful for when we do not know how much memory we will need
        It makes our programs more flexible, especially when accepting user input
    */

   int *pNum = NULL;

   // whenever you use the new operator it is expected that you will use the delete operator


   pNum = new int;

   *pNum = 21;

   delete pNum;
   
   return 0;

   //To dynamically generate an array:

   char *pGrades = NULL;

    int size;
    std::cout<<"How many grades do you have to enter in? \n";
   // for when we don't know what the size will be
   pGrades = new char[size];

   for (int i = 0; i < size; i++) {
    std::cout << " Enter grade number " << i + 1 << ": ";
    std::cin >> pGrades[i];
   }

   for (int i = 0; i<size; i++) {
    std::cout << pGrades[i] << " ";
   }

   delete[] pGrades;
}