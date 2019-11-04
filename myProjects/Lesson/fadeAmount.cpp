#include<iostream>
using namespace std;

int main() {
  int i = 0;
  int up = 0;
  int step = 5;
  while (i <= 100) {
    ++i;
    up += step;
    if (up <= 0 || up >= 255) {
      step = -step;
    }
    cout << up << endl;
  }
  return 0;
}
