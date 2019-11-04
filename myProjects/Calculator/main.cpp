// Простой Калькулятор v 0.6
// The Simply Calculator
#include<iostream>
using namespace std;

int main() {
  char userSelection = 'y';
  do {
    cout << "Калькулятор. Введите первое число" << endl;
    float firstNum = 0;
    cin >> firstNum;
    cout << "Введите символ операции" << endl;
    char op = 0;
    cin >> op;
    if ((op == '+') || (op == '-') || (op == '*') || (op == '/')) {
      cout << "Введите второе число" << endl;
      float secondNum = 0;
      cin >> secondNum;
      switch (op)
      {
        case '*':
          cout << "Результат: " << firstNum * secondNum << endl;
          break;
        case '/':
          cout << "Результат: " << firstNum / secondNum << endl;
          break;
        case '+':
          cout << "Результат: " << firstNum + secondNum << endl;
          break;
        case '-':
          cout << "Результат: " << firstNum - secondNum << endl;
          break;
        default:
          cout << "Введите символ операции" << endl;
          break;
      }
    }
    else {
      cout << "Введите правильный оператор! +, -, *, /" << endl;
      return main();
    }
    cout << "Нажмите y для повтора, n для выхода" << endl;
    cin >> userSelection;
  }  while (userSelection != 'n');

  return 0;
}
