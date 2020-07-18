// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой Калькулятор v 2.1
// The Simply Calculator
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>

int getUserInput();
int getMatematicalOperation();
int calculateResult(int x, char op, int y);
void printResult(int result);

int main() {
    char userSelection = 'y';
    do {
      int input1 = getUserInput();
      char op = getMatematicalOperation();
      int input2 = getUserInput();
      int result = calculateResult(input1, op, input2);
      printResult(result);
      std::cout << "Do you want to play again? (y/n)" << std::endl;
      std::cin >> userSelection;
    } while (userSelection != 'n');

    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//