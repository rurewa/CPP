// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример проверки чётности введённого числа
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

bool isEven(int x) {
  bool isEven = (x % 2) == 0;
  return isEven;
}

int main() {
  cout.setf(ios::boolalpha);
  cout << "Введите целое число: " << endl;
  int num;
  cin >> num;
  cout <<isEven(num) << endl;

  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
