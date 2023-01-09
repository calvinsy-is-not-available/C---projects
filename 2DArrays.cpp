#include <iostream>

//Not finshed
void printArray (std::string *array, int rows, int columns);

int main() {

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars)/sizeof(cars[0][0]);

    printArray((std::string *)cars, rows, columns);

    return 0;

}

void printArray(std::string *array, int rows, int columns) {

    for(int i = 0; i<rows;i+=1){
        for(int j =0; j< columns; j++) {
            std::cout<< array[i][j] << " ";
        }
        std::cout << '\n';
    }
}