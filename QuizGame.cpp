#include <iostream>

void play();

int main() {

    play();
    
    return 0;
}


void play() {
    char guess;
    int score;

    std::string questions[] = {"1. What year was C++ created?: ",
                                "2. Who invented C++?: ",
                                "3. What is predecessor of C++?",
                                "4. Is the Earth flat?: "};


    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                    {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                    {"A. C", "B. C+", "C. C#", "D. C--"},
                    {"A. Yes", "B. No", "C. Sometimes", "What's Earth"}
                    };


    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size_of_questions = sizeof(questions)/sizeof(questions[0]);

    for (int i = 0; i<size_of_questions;i++) {
        std::cout<< "****************\n";
        std::cout<< questions[i] << '\n';
        std::cout<< "****************\n";

        for(int j =0; j<sizeof(options[i])/sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << '\n';
        }
        std::cin>>guess;
        guess = toupper(guess);

        if (guess==answerKey[i]) {
            std::cout << "Correct!\n";
            score++;
        }
        else {
            std::cout << "Wrong!\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    std::cout<< "****************\n";
    std::cout<< "*   RESULTS    *\n";
    std::cout<< "****************\n";
    std::cout << "Correct guesses: " << score << '\n';
    std::cout << "# of questions: " << size_of_questions << '\n';
    std::cout << "Score: " << (score/(double)size_of_questions)*100 << "%\n";

}