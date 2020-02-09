#include<iostream>
using namespace std;

int main() {

  int result = ((10 << 1) + 5) << 1; // Удвоение результата деления на 3

  cout << result << endl;

  return 0;
}
/*
Вычислить удвоенное число, добавить к нему 5 и снова удвоить результат

int result = ((10 << 1) + 5) << 1; // Удвоение результата деления на 3

а так неправильно!

int result = 10 << 1 + 5 << 1;
*/