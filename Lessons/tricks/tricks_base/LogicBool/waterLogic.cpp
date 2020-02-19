#include<iostream>
using namespace std;

bool a = false; // Вода холодная
bool b = false; // Я плаваю

int main() {
  cout.setf(ios::boolalpha);
  cout << "Вода холодная? (1/0)" << endl;
  cin >> a;

  if (!a) { // Если а  == 1
      b = !b; // То b - true
  }
  else {
      b = b; // Иначе b == false
  }
  cout << "Плаваем или нет? - "<< b << endl;

  return 0; 
}