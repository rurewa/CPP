#include<iostream>

// Вычисляем полученные значения
int calculateResult(int x, char op, int y) {
    switch (op)
    {
    case '+':
      return x + y;
      break;
    case '-':
      return x - y;
      break;
    case '*':
      return x * y;
      break;
    case '/':
      return x / y;
      break;
    default:
      std::cout << "Error operator!" << std::endl;
      return -1;
      break;
    }
}