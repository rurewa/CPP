// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример чистой функции, которая принимает
// пользовательский ввод и возвращает его в main
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int getValueFromUser() {
  cout << "Enter an intenger: ";
  int x = 0;
  cin >> x;
  return x;
}

int main() {
  int a = getValueFromUser();
  int b = getValueFromUser();

  cout << a << " + " << b << " = " << a + b << endl;

  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
