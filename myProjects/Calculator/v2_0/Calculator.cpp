// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой Калькулятор v 2.3
// The Simply Calculator
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>

double getUserInput();
char getMatematicalOperation();
double calculateResult(double x, char op, double y);
void printResult(double result);

int main() {
    char userSelection = 'y';
    do {
      double input1 = getUserInput();
      char op = getMatematicalOperation();
      double input2 = getUserInput();
      double result = calculateResult(input1, op, input2);
      printResult(result);
      std::cout << "Do you want to play again? (y/n)" << std::endl;
      std::cin >> userSelection;
    } while (userSelection != 'n');

    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//