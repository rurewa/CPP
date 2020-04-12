// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример возведения целого числа в степень
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;
// Функция, вычисляющая степень числа
int pow(int base, int exp) {
  int result = 1;
  while (exp) {
    if (exp & 1) {
      result *= base;
    }
    exp >>= 1;
    base *= base;
  }
  return result;
}
// Ввод от пользователя базового числа
int userBaseInput() {
  int base;
  cin >> base;
  return base;
}
// Ввод от пользователя степени
int userExpInput() {
  int exp;
  cin >> exp;
  return exp;
}
// Вычисление и вывод результата
int printResult(int base, int exp) {
  int result = pow(base, exp);
  cout << "Result: " << result << endl;
  return result;
}

int main() {
  cout << "Enter first num: ";
  int base = userBaseInput();
  cout << "Enter second num: ";
  int exp = userExpInput();
  printResult(base, exp);
  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
