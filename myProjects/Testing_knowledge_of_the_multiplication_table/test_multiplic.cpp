#include<iostream>
#include<cstdlib> // Библиотека таймера
#include<ctime>
using namespace std;

// Генерация случайного числа
int randNums1(int result = 0) {
  srand(time(0));
  return result = 1 + (rand() % 10);
}
// Генерация псевдослучайного числа
int randNums2(int min = 1, int max = 10) {
  return min + rand() % (max - min);
}

int main() {
  cout.setf(ios::boolalpha); // Для вывода слов true/false
  char userSelection = 'y';
  int num = 0; // Для ввода ответа пользователем
  int check = 0; // Для сравнения
  bool answer = false; // Для вывода результата

  cout << "Testing knowledge of the multiplication table" << endl;
  while (userSelection != 'n') {
    cout << randNums1() << " x " << randNums2() << " ? " << endl;
    check = randNums1() * randNums2();
    cin >> num;
    if (num == check) {
      cout << !answer << endl;
    }
    else {
      cout << answer << endl;
    }
    cout << "Press (y) to replay or (n) key to exit" << endl;
    cin >> userSelection;
  }

  return 0;
}
