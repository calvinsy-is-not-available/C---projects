#include <iostream>

void iterativeWalk(int steps);
void recursiveWalk(int steps);

int main() {

    // advantages: it uses less code and is cleaner

    // disadvantages: uses more memory and is slower

    // we will compare iterative approached vs recursive ones

    iterativeWalk(10);

    recursiveWalk(10);

    // for searching or trees, recursion is useful
}

void iterativeWalk(int steps) {
    for (int i = 0; i <steps; i++)
        std::cout << "You took a step!\n";
}

void recursiveWalk(int steps) {
    if(steps!=0) {
        std::cout << "You took a step!\n";
        steps--;
        recursiveWalk(steps);
    }
}