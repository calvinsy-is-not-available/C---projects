#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
char chooseWinner(char player, char user);
void play(std::string name);
std::string getName();
void playAgain();


int main() {

    play(getName());

    
    return 0;
}

std::string getName() {
    std::string name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin >> std::ws, name);
    return name;

}

void playAgain() {
    std::cout << "**************************************************************************\n";
    std::cout << "Would you like to play again?\nEnter 'y' or any key for yes, or 'n' for no\n";
    std::cout << "**************************************************************************\n";
    char choice;
    std::cin >> choice;
    while(choice!='n') {
        play(getName());
    }
    std::cout << "Thanks for playing!!\n";
}

void play(std::string name) {
    char player;
    char computer;
    int timesPlayed;
    int playerWon;
    int computerWon;

    while (timesPlayed<3) {
        player = getUserChoice();
        std::cout << "Your choice: ";
        showChoice(player);

        computer = getComputerChoice();
        std::cout << "Computer's choice: ";
        showChoice(computer);
        char conclusion = chooseWinner(player, computer);
        if (conclusion =='t') {
            continue;
        }
        else {
            if (conclusion == 'p') {
                playerWon +=1;
            }
            else {
                computerWon +=1;
            }
            timesPlayed +=1;
        }
    }

    if(playerWon>computerWon) {
        std::cout << "*****************************************************\n";
        std::cout << "Winner winner chicken dinner!\n" << "Congratulations " << name << '\n';
        std::cout << "*****************************************************\n";
    }
    else if (computerWon>playerWon) {
        std::cout << "*****************************************************\n";
        std::cout << "AI might have won the battle, but they will never win the war!\n" << "You lose " << name << '\n';
        std::cout << "*****************************************************\n";
    }
    else {
        std::cout << "*****************************************************\n";
        std::cout << "Each side fought valiantly; however, there is no clear winner, but, alas a tie\n";
        std::cout << "*****************************************************\n";
    }

    playAgain();
}

char getUserChoice() {
    char player;

    std::cout << "Rock, Paper, Scissors Game!\n";
    do {
    std::cout << "*****************************\n";
    std::cout << "Choose one of the following\n";
    std::cout << "*****************************\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";
    std::cout << "*****************************\n";
    std::cin >> player;
    }while(player != 'r' && player != 'p'&& player != 's');
    
    return player;
}

char getComputerChoice() {
    
    srand(time(0));
    int number = rand() % 3 + 1;

    switch(number) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}

void showChoice(char choice) {
    switch(choice) {
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
    }
}

char chooseWinner(char player, char computer) {

    switch(player) {
        case 'r':   if (computer == 'r'){
                        std::cout << "It's a tie this round!\n";
                        return 't';
                    }
                    else if (computer == 'p') {
                        std::cout << "You lose this round!\n";
                        return 'c';
                    }
                    else {
                        std::cout << "You win this round!!\n";
                        return 'p';
                    }
        case 'p': if (computer == 'r'){
                        std::cout << "You win this round!!\n";
                        return 'p';
                    }
                    else if (computer == 'p') {
                        std::cout << "It's a tie this round!\n";
                        return 't';
                    }
                    else {
                        std::cout << "You lose this round!\n";
                        return 'c';
                    }
        case 's': if (computer == 'r'){
                       std::cout << "You lose this round!\n";
                        return 'c';
                    }
                    else if (computer == 'p') {
                        std::cout << "You win this round!!\n";
                        return 'p';
                    }
                    else {
                        std::cout << "It's a tie this round!\n";
                        return 't';
                        
                    }
    }
}