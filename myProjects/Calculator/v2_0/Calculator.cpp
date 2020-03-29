// Простой Калькулятор v 2.0
// The Simply Calculator
#include<iostream>
using namespace std;

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
    cout << "Do you want to play again? (y/n)" << endl;
    cin >> userSelection;
  } while (userSelection != 'n');
  
  return 0;
}