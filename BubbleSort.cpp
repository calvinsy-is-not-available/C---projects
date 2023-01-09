#include <iostream>

template <typename T>

void bubble_sort(T *array, int size);

int main() {

   std::string arrayOne[] = {"String One", "String Two", "String Three"};

    int arrayTwo[] = {5, 4, 2, 1};


    double arrayThree[] {3.5, 1.6, 5.7, 2.2, 4.9};

    
    //Strings
    bubble_sort(arrayOne, sizeof(arrayOne)/sizeof(arrayOne[0]));
    for (std::string element : arrayOne) {
        std::cout << element << " ";
    }
    std::cout << '\n';
    //ints
    bubble_sort(arrayTwo, sizeof(arrayTwo)/sizeof(arrayTwo[0]));
    for (int element : arrayTwo) {
        std::cout << element << " ";
    }
    std::cout << '\n';
    //double
    bubble_sort(arrayThree, sizeof(arrayThree)/sizeof(arrayThree[0]));
    for (double element : arrayThree) {
        std::cout << element << " ";
    }
    std::cout << '\n';
    return 0;
}


// formula is correct, but I haven't been able to get the generic to work
template <typename T>
void bubble_sort(T *array, int size) {

    T temp;
    for(int i = 0; i<size-1;i+=1){
        for(int j = 0; j < size - i; j+=1){
            // if element on the left is greater than the one on the right, swap those two vals
            if (array[j]<array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
    }
    for (T element : array) {
        std::cout << element << " ";
        std::cout << '\n';
    }
}

