#include <iostream>
#include "function.h"

int chooseMenu() {
    int inputChoose{};
    std::cin >> inputChoose;
    return inputChoose;
}

int userInputInt() {
    int inputNumber{};
    std::cin >> inputNumber;
    return inputNumber;
}

char userInputChar() {
    char inputChar{};
    std::cin >> inputChar;
    return inputChar;
}

void menu() {
    using namespace std;
    cout << "1. Convert char to int\n";
    cout << "2. Convert int to char\n";
    cout << "3. Exit\n";
}