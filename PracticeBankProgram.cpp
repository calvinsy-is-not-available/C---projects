#include <iostream>
#include <string>
#include <iomanip>

double balance = 0;
int choice = 0;
int getMenu();
void showBalance();
double deposit();
double withdraw();
void getMenuOption(int userChoice);
void exitMessage();
void welcomeMessage();
bool isNumber(std::string str);

int main() {

    welcomeMessage();
    do {
    choice = getMenu();
    getMenuOption(choice);
    }while(choice!=4);
    exitMessage();

    return 0;
}

bool isNumber(std::string str)
{
    for (char c : str) {
       
        int decimalCounter = 0;
        char decimal = '.';
        // using the std::isdigit() function
        if (c==decimal) {
            decimalCounter += 1;
        }
        if (decimalCounter >= 2&&std::isdigit(c) == 0)
            return false;
    }
    return true;
}

void welcomeMessage() {
    std::cout << "Welcome to our mobile banking application!\n We are pleased you have chosen Independent Banking!\n";
}
void exitMessage() {
    std::cout << "Thank you for chosing Independent Banking!\n We look forward to the next time you consider our services!\n";
}

double deposit() {
    std::string stringAmount;
    double amount;
    std::cout << "How much would you like to deposit?\n";
    std::cin >> stringAmount;
    if (!isNumber(stringAmount)) {
        std::cout << "Error, please enter numerical values only please.\n";
        do {
            choice = getMenu();
            getMenuOption(choice);
        }while(choice!=4);
        exitMessage();
    }
    else {
        amount = std::stod(stringAmount);
        if (amount<0) {
            while (amount<0) {
                std::cout << "Please enter in positive numbers only please\n";
                std::cin >> amount;
            }
        }
        std::cout << "\n You Entered: " << std::setprecision(2) << std::fixed << amount << '\n'; 
    }
    return amount;
}

double withdraw() {
    std::string stringAmount;
    double amount;
    std::cout << "How much would you like to withdraw?\n";
    std::cin >> stringAmount;
    if (!isNumber(stringAmount)) {
        std::cout << "Error, please enter numerical values only please.\n";
        do {
            choice = getMenu();
            getMenuOption(choice);
        }while(choice!=4);
        exitMessage();
    }
    else {
        amount = std::stod(stringAmount);
        std::cout << "\n You Entered: " << std::setprecision(2) << std::fixed << amount << "$\n";
    }
    if ((balance-amount)<0) {
        double overdraft = balance-amount;
        std::cout << "Our apologies, an overdraft of " << overdraft << "$ has been detected.\n";
        std::cout << "A standard 30 US Dollar fee will now be incurred.\n";
        amount = overdraft - 30;
        std::cout << "Your current balance is: " << std::setprecision(2) << std::fixed << amount << "$\n";
        balance = amount;
        return 0;

    }
    return amount;
}

void showBalance() {
    std::cout << "Your balance is: " << std::setprecision(2) << std::fixed << balance << "$\n";
}

int getMenu() {
    
    int userChoice;
    std::cout << "*****************\n";
    std::cout << "Please Enter Your Choice: \n";
    std::cout << "*****************\n";
    std::cout << "1. Show balance\n";
    std::cout << "2. Make a deposit\n";
    std::cout << "3. Make a withdrawal\n";
    std::cout << "4. Exit\n";
    std::cout << "*****************\n";

    std::cin >> userChoice;
    std::cin.clear();
    fflush(stdin);

    return userChoice;

    
}

void getMenuOption(int userChoice) {

    switch(userChoice) {
        case 1: showBalance();
            break;
        case 2: balance += deposit();
            break;
        case 3: balance -= withdraw();
            break;
        case 4: break;
        default:
            std::cout << "Error, please enter integers 1-4\n";
    }
}