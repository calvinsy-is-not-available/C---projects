#include <iostream>

int main() {
    
    // Integers
    int x =5;
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    
    // Doubles
    double someNumber = 7.75;
    std::cout << someNumber << '\n';

    // Chars
    char someCharacter = 'A';
    std::cout << someCharacter << '\n';

    // Bools
    bool lever = true;
    std::cout << lever << '\n';
    std::cout << not lever << '\n';

    // Strings
    std::string someCharArray = "null";
    std::cout << "This string is: " << someCharArray << '\n';

    return 0;
}