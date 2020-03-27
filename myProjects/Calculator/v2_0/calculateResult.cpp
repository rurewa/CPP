#include<iostream>
using namespace std;

// Вычисляем полученные значения
int calculateResult(int x, int op, int y) {
  if (op == '+') { return x + y; }
  if (op == '-') { return x - y; }
  if (op == '*') { return x * y; }
  if (op == '/') { return x / y; } 

  return -1; // Если пользователь ввёл неправильный знак
}