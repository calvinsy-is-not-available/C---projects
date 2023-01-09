#include <iostream>
#include <ctime>

//will keep track of what spaces are or are not occupied
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);
void play();
bool playAgain();

int main() {

    play();

    return 0;
}

void play() {

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    //main gameplay loop
    while(running) {
        playerMove(spaces, player);
        drawBoard(spaces);
            if(checkWinner(spaces, player, computer)){
                running = false;
                break;
            }
            else if (checkTie(spaces)) {
                running = false;
                break;
            }
        computerMove(spaces, computer);
        drawBoard(spaces);
            if(checkWinner(spaces, player, computer)){
                running = false;
                break;
            }
            else if (checkTie(spaces)) {
                running = false;
                break;
            }
    }

    if (playAgain()) {
        play();
    }
    else {
        std::cout << "Thank you for playing our game!\n";
    }
}

bool playAgain() {
    std::cout << "Would you like to play again? \n" << "Enter any key to continue or 'q' to quit";
    std::string choice;
    std::cin>>choice;
    if (choice!="q"||choice!="Q") {
        return true;
    }
    else {
        return false;
    }
}

void drawBoard(char *spaces) {
    //We want to draw a grid
    std::cout << '\n';
    std::cout<< "     |     |     " << '\n';
    std::cout<< "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout<< "_____|_____|_____" << '\n';
    std::cout<< "     |     |     " << '\n';
    std::cout<< "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout<< "_____|_____|_____" << '\n';
    std::cout<< "     |     |     " << '\n';
    std::cout<< "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout<< "     |     |     " << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player) {
    int number;
    do{
        std::cout << "Please enter an integer, 1-9, to place an 'X' on the board: ";
        std::cin >> number;
        number--;
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
}

void computerMove(char *spaces, char computer) {
    int number;
    srand(time(0));

    while(true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer) {

    //checking horizontals
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])) {
        spaces[0] == player ? std::cout << "You Win!!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])) {
        spaces[3] == player ? std::cout << "You Win!!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])) {
        spaces[6] == player ? std::cout << "You Win!!\n" : std::cout << "You lose!\n";
    }
    //checking verticals
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])) {
        spaces[0] == player ? std::cout << "You Win!!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])) {
        spaces[1] == player ? std::cout << "You Win!!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])) {
        spaces[2] == player ? std::cout << "You Win!!\n" : std::cout << "You lose!\n";
    }
    //checking diagonals
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])) {
        spaces[0] == player ? std::cout << "You Win!!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])) {
        spaces[2] == player ? std::cout << "You Win!!\n" : std::cout << "You lose!\n";
    }
    else {
        return false;
    }


    return true;
}

bool checkTie(char *spaces) {

    for (int i = 0; i < 9; i+=1) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    std::cout << "It's a tie!!\n";

    return true;
}
