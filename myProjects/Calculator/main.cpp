// Программа Калькулятор v 0.4
#include<iostream>
using namespace std;

int main() {
  char op = 0;
  int result = 0;
  char var = 0;
  cout << "Программа Калькулятор!" << endl;
  cout << "Введите первое число" << endl;
  int firstNum = 0;
  cin >> firstNum;
  cout << "Введите символ операции" << endl;
  cin >> op;

  if ((op == '+') || (op == '-') || (op == '*') || (op == '/')) {
    cout << "Введите второе число" << endl;
    int secondNum = 0;
    cin >> secondNum;
    switch (op)
    {
      case '*':
        result = firstNum * secondNum;
        cout << "Результат: " << result << endl;
        cout << "Нажмите y для продолжения, n для выхода" << endl;
        cin >> var;
        if (var == 'y') {
          return main();
        }
        else {
          break;
        }
      break;
      case '/':
        result = firstNum / secondNum;
        cout << "Результат: " << result << endl;
        cout << "Нажмите y для продолжения, n для выхода" << endl;
        cin >> var;
        if (var == 'y') {
          return main();
        }
        else {
          break;
        }
      break;
      case '+':
        result = firstNum + secondNum;
        cout << "Результат: " << result << endl;
        cout << "Нажмите y для продолжения, n для выхода" << endl;
        cin >> var;
        if (var == 'y') {
          return main();
        }
        else {
          break;
        }
      break;
      case '-':
        result = firstNum - secondNum;
        cout << "Результат: " << result << endl;
        cout << "Нажмите y для продолжения, n для выхода" << endl;
        cin >> var;
        if (var == 'y') {
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
  else {
    cout << "Введите правильный оператор! +, -, *, /" << endl;
    return main();
  }
  return 0;
}
