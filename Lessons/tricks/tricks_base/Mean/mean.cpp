#include<iostream>
using namespace std;

int a = 0, b = 0, c = 0, maxNum = 0;

int main() {
  cout << "Введите число для a: " << endl;
  cin >> a;
  cout << "Введите число для b: " << endl;
  cin >> b;
  cout << "Введите число для c: " << endl;
  cin >> c;
  if (a > b) {
    if (a > c) {
      maxNum = a;
    }
    else {
      maxNum = c;
    }
  }
  else {
    if (b > c) {
      maxNum = b;
    }
    else {
      maxNum = c;
    }
  }
  cout << "Максимальное число: " << endl;
  cout << maxNum << endl;

  return 0;
}