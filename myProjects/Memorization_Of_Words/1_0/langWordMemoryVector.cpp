// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Программа для запоминания английских слов. С применением динамических массивов
// V 1.0 beta
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include<iostream>
#include<string>
#include<cstdlib> // Библиотека таймера
#include<ctime> // Преобразование времени в строку
#include<vector>
using namespace std;

const int lenArray = 15; // Размер массива

// Генерация случайного числа
int randNums1(int result = 0) {
  srand(time(0));
  return result = 0 + (rand() % lenArray);
}

int main() {
  string userInWord; // Для ввода слова от пользователя
  char again =  'y'; // Для продолжения/завершения программы
  vector<string> enWords = {"meet", "let", "ride", "hold", "hear", "have", "grow", "give", "get", "fight", "fall", 
  "cost", "come", "choose", "catch"};
  vector<string> ruWords = {"встречаться", "означать", "кататься", "держать", "слышать", "иметь", "расти", "давать",
  "получать", "бороться", "падать", "строить", "придти", "выбирать", "ловить"};
  do {
    int numArray = randNums1();
    cout << "Translate the word - " << ruWords[numArray] << endl;
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
