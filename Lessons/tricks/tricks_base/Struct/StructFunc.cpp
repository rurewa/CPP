// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая структура для вычисления дробных сисел
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct FractionalNun { // Объявили структуру
  int integerNumerator; // Числитель
  int integerDenominator; // Знаменатель
};

void multiPly(FractionalNun a, FractionalNun b) {
  // Печать с вычислением (a1 * a2) / (b1 * b2)
  // На забываем static_cast, иначе компилятор выполнит целочисленное  деление!
  cout << static_cast<float>(a.integerNumerator * a.integerDenominator) /
  (b.integerNumerator * b.integerDenominator);
}

int main() {
  FractionalNun a; // Инициализировали объект структуры
  cout << "Enter first Numerator: " << endl;
  cin >> a.integerNumerator;
  cout << "Enter first Denominator: " << endl;
  cin >> a.integerDenominator;

  FractionalNun b; // Инициализировали объект структуры
  cout << "Enter second Numerator: " << endl;
  cin >> b.integerNumerator;
  cout << "Enter second Denominator: " << endl;
  cin >> b.integerDenominator;

  multiPly(a, b); // Печать результата

  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
