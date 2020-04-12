// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример возведения дробного числа в степень
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include <cmath> // Библиотека простых математических операций
using namespace std;
// Ввод от пользователя базового числа
double userBaseInput() {
  double base;
  cin >> base;
  return base;
}
// Ввод от пользователя степени
double userExpInput() {
  double exp;
  cin >> exp;
  return exp;
}
// Вывод результата
void printResult(double x) {
  cout << "Result: " << x << endl;
}

int main() {
  cout << "Enter first num: ";
  double base = userBaseInput();
  cout << "Enter second num: ";
  double exp = userExpInput();
  // Вычисление с помощью функции из cmath
  double x = pow(base, exp);
  printResult(x);
  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
