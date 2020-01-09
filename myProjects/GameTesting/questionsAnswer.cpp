#include<iostream>
using namespace std;

int digitCount = 0;

void foo();

int main()
{
  cout.setf(ios::boolalpha);
  char userInput = 'y';
  while (userInput != 'n')
  {
    cout << "Ответь на вопросы" << endl;
    cout << "Третья планета от солнца?" << endl;
    cout << "1. Венера" << "\n2. Земля" << endl;
    foo();
    cout << "Сколько естественных спутников у Марса?" << endl;
    cout << "1. Один" << "\n2. Два" << endl;
    foo();
    cout << "Сколько горбов у двугорбового верблюда?" << endl;
    cout << "1. Один" << "\n2. Два" << endl;
    foo();
    cout << "Вы набрали баллов: " << digitCount  << endl;
    cout << "Для повтора нажмите (y), для выхода (n)" << endl;
    cin >> userInput;
    if (userInput == 'y') { return main(); }
    else { break; }
  }
  return 0;
}

void foo() {
  int answer = 0; bool check = false;
  cin >> answer;
  if (answer == 2) {
    ++digitCount;
    cout << "Вы выбрали: " << answer << endl;
    check = true;
    cout << check << endl;
  }
  else {
    cout << "Вы выбрали: " << answer << endl;
    check = false;
    cout << check << endl;
  }
}
