// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример проверки нахождения большего числа
// через условный тернарный оператор
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
  int x;
  int y;
  cout << "Enter first num: " << endl;
  cin >> x;
  cout << "Enter second num: " << endl;
  cin >> y;
  int larger;
  larger = (x > y) ? x : y;
  cout << "Result: " << larger << endl;
  /*if (x > y) {
    larger = x;
    cout << "Result: "<< larger << endl;
  }
  else {
    larger = y;
    cout << "Result: " << larger << endl;
  }*/

  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
