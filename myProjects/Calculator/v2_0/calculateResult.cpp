#include<iostream>

// Вычисляем полученные значения
double calculateResult(double x, char op, double y) {
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