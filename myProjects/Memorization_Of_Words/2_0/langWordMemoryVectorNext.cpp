// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа для запоминания английских слов. С применением динамических массивов
// V 2.0 beta refactoring
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <string>
#include <vector>
#include "constants.h" // Константы
using namespace std;

// Генерация случайного числа
int randNums1(int lenRand_1);
  
int userChooseGame(); // Выбор игры

void menuGame();

int main()
{
    vector<string> enIrregularVerbsWords = {"meet", "let", "ride", "hold", "hear", "have", "grow", "give", "get", "fight", "fall",
                                            "cost", "come", "choose", "catch", "bring", "blow", "wear", "wake"};
    vector<string> ruIrregularVerbsWords = {"встречаться", "означать", "кататься", "держать", "слышать", "иметь", "расти", "давать",
                                            "получать", "бороться", "падать", "строить", "придти", "выбирать", "ловить", "приносить", 
                                            "дуть", "носить", "будить"};
    vector<string> ruQuestionsWord = {"что", "почему", "где", "как", "когда", "чей"};
    vector<string> enQuestionsWord = {"what", "why", "where", "how", "when", "whose"};
    menuGame();
    int userChoose = userChooseGame();
    string userInWord;       // Для ввода слова от пользователя
    char again = 'y'; // Для продолжения/завершения программы
    switch (userChoose) {
    case 1:
        do {
            int numArray = randNums1(constants::lengRandVerb);
            cout << "Translate the word - " << ruIrregularVerbsWords[numArray] << endl;
            cin >> userInWord;
            if (enIrregularVerbsWords[numArray] == userInWord) {
                cout << "True!" << endl;
            }
            else {
                cout << "False!" << endl;
            }
            cout << "Do you want to play again? (y/n)" << endl;
            cin >> again;
        } while (again == 'y');
        break;
    case 2:
        do {
            int numArray = randNums1(constants::lengRandQwest);
            cout << "Translate the word - " << ruQuestionsWord[numArray] << endl;
            cin >> userInWord;
            if (enQuestionsWord[numArray] == userInWord) {
                cout << "True!" << endl;
            }
            else {
                cout << "False!" << endl;
            }
            cout << "Do you want to play again? (y/n)" << endl;
            cin >> again;
        } while (again == 'y');
        break;

    default:
        return main();
        break;
    }
    cout << "Goodbye!" << endl;

    return 0;
}

int userChooseGame() {
  int userChoose = 0; // Выбор игр
  cin >> userChoose;
  return userChoose;
}

void menuGame() {
  cout << "Выберите задание (1/2)" << endl;
  cout << "1. IrregularVerb;" << endl;
  cout << "2. QuestionsWord." << endl;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //