#include<iostream>
using namespace std;
// Принимаем первое значение от пользователя
int getUserInput() {
  cout << "Please enter an integer: " << endl;
  int value = 0;
  cin >> value;
  return value;
}