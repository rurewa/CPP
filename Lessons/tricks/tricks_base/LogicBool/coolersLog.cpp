#include<iostream>
using namespace std;

int main() {
  cout.setf(ios::boolalpha);
  bool a = true;
  bool b = false;
  bool c = false;
  bool d = false;
  cout << "Кондиционирование отключено (1/0)?" << endl;
  cin >> b;
  cout << "Охлаждение не работает (1/0)?" << endl;
  cin >> c;

  // D = (a && b) || (a && c);
  d = a && (b || c);
  cout << "Компьютер вышел из строя: " << d << endl;

  return 0; 
}