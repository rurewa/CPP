// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Программа для запоминания английских слов
// V 1.0 beta
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include<iostream>
#include<string>
#include<cstdlib> // Библиотека таймера
#include<ctime> // Преобразование времени в строку
using namespace std;

// Генерация случайного числа
int randNums1(int result = 0) {
  srand(time(0));
  return result = 0 + (rand() % 6);
}

int main() {
  string userInWord; // Для ввода слова от пользователя
  char again = 'y'; // Для продолжения/выхода программы
  string enWords[6] = {"meet", "let", "ride", "hold", "hear", "have"};
  string rusWords[6] = {"встречаться", "означать", "кататься", "держать", "слышать", "иметь"};
  do {
    int numArray = randNums1();
    cout << "Translate the word - " << rusWords[numArray] << endl;
    cin >> userInWord;
    if (enWords[numArray] == userInWord) {
      cout << "True!" << endl;
    }
    else {
      cout << "False!" << endl;
    }
    cout << "Do you want to play again? (y/n)" << endl;
    cin >> again;
  } while (again == 'y');
  cout << "Goodbye!" << endl;

  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
