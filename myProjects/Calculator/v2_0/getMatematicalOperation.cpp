#include<iostream>
using namespace std;

// Принимаем знак оператора от пользователя
int getMatematicalOperation() {
  cout << "Please enter which operator: " << endl;
  char op;
  cin >> op;
  // Защита от ввода некоректного символа
  return op;
}