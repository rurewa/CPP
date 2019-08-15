// Программа Калькулятор v 1.2
#include<iostream>
using namespace std;

int firstNum = 0;
int secondNum = 0;
char op = 0;
int result = 0;
int var = 0;

int main() {
  cout << "Программа Калькулятор!" << endl;
  cout << "Введите первое число" << endl;
  cin >> firstNum;
  cout << "Введите символ операции" << endl;
  cin >> op;
  if ((op != '+') && (op != '-') && (op != '*') && (op != '/')) {
    cout << "Введите правильный оператор! +, -, *, /" << endl;
    return main();
  }
  else {
    cout << "Введите второе число" << endl;
    cin >> secondNum;

    switch (op)
    {
      case '*':
        result = firstNum * secondNum;
        cout << "Результат: " << result << endl;
        cout << "Нажмите 1 для продолжения, 0 для выхода" << endl;
        cin >> var;
        if (var == 1) {
          return main();
        }
        else {
          break;
        }
      break;
      case '/':
        result = firstNum / secondNum;
        cout << "Результат: " << result << endl;
        cout << "Нажмите 1 для продолжения, 0 для выхода" << endl;
        cin >> var;
        if (var == 1) {
          return main();
        }
        else {
          break;
        }
      break;
      case '+':
        result = firstNum + secondNum;
        cout << "Результат: " << result << endl;
        cout << "Нажмите 1 для продолжения, 0 для выхода" << endl;
        cin >> var;
        if (var == 1) {
          return main();
        }
        else {
          break;
        }
      break;
      case '-':
        result = firstNum - secondNum;
        cout << "Результат: " << result << endl;
        cout << "Нажмите 1 для продолжения, 0 для выхода" << endl;
        cin >> var;
        if (var == 1) {
          return main();
        }
        else {
          break;
        }
      break;
      default:
        cout << "Введите символ операции" << endl;
      break;
    }
}

  return 0;
}
