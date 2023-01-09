#include <iostream> 

/* Luhn's Algorithm
*
    1. Double every second digit from right to left.
        If doubles number is 2 digits, split them.
    2. Add all single digits from step 1.
    3. Add all odd numbered digits from right to left.
    4. Sum results from steps 2 & 3.
    5. If step 4 is divisible by 10, the number is valid

   *****************************************************
                    STEP ONE
    6011    0009    9013    9424
    6 1     0 0     9 1     9 2 
   12 2     0 0    18 2    18 4
   1 2 2    0 0    1 8 2   1 8 4
   *****************************************************
                    STEP TWO
    1 + 2 + 2 + 0 + 0 + 1 + 8 + 2 + 1 + 8 + 4 = 29
   *****************************************************
                    STEP TREE
    6011    0009    9013    9424
     0 1     0 9     0 3     4 4
    0 + 1 + 0 + 9 + 0 + 3 + 4 + 4 = 21
   *****************************************************
                    STEP FOUR
    21+29 = 50
    *****************************************************
                    STEP FIVE
    50 % 10 is 0
    Therefore, the credit card number is valid
   *****************************************************


*/ 

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
void init();

int main() {

    init();

    return 0;
}

void init() {

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card: \n";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << "card number entered is vaid\n";
    }
    else {
        std::cout << "card number entered is NOT vaid\n";
    }

}

int getDigit(const int number) {

    //to split numbers greater than 9:
    //e.g. 18
    // 18 % 10 = 8
                // (18 / 10 = 1) and 1 % 10 is 1
    // So 8 + 1 is 9
    return number % 10 + (number / 10 % 10);

}

int sumOddDigits(const std::string cardNumber) {

    int sum = 0;
    //iterating from the last odd digit to the first
    for (int i = cardNumber.size() - 1; i>=0; i-=2) {
        //Since we are dealing with a string/array of chars
            //if we are passing in a char we want to deal with its decimal equivalent
            //So we will use the ascii table value of '0,' which is 48, to acquire the proper value
            //e.g. char '9' is 57, so 57-48 yields 9.
                //So on and so forth
        sum += getDigit(cardNumber[i] - '0');
    }
}

int sumEvenDigits(const std::string cardNumber) {

    int sum = 0;
    //iterating from the last even digit to the first
    for (int i = cardNumber.size() - 2; i>=0; i-=2) {
        //Since we are dealing with a string/array of chars
            //if we are passing in a char we want to deal with its decimal equivalent
            //So we will use the ascii table value of '0,' which is 48, to acquire the proper value
            //e.g. char '9' is 57, so 57-48 yields 9.
                //So on and so forth
        sum += getDigit((cardNumber[i] - '0')*2);
    }
}