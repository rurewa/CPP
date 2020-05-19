// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа для запоминания английских слов. С применением динамических массивов
// V 2.1 beta refactoring
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <string>
#include <vector>
#include "constants.h" // Константы
using namespace std;

// Генерация случайного числа
int randNums1(int lenRand_1);  
int userChooseGame(); // Выбор игры
void menuGame(); // Меню

int main()
{
    vector<string> enIrregularVerbsWords = {"meet", "let", "ride", "hold", "hear", "have", "grow", "give", "get", "fight", "fall",
                                            "cost", "come", "choose", "catch", "bring", "blow", "wear", "wake", "until", "everyone!"};
    vector<string> ruIrregularVerbsWords = {"встречаться", "означать", "кататься", "держать", "слышать", "иметь", "расти", "давать",
                                            "получать", "бороться", "падать", "строить", "придти", "выбирать", "ловить", "приносить", 
                                            "дуть", "носить", "будить", "до тех пор", "все"};
    vector<string> ruQuestionsWord = {"что", "почему", "где", "как", "когда", "чей"};
    vector<string> enQuestionsWord = {"what", "why", "where", "how", "when", "whose"};
    menuGame(); // Меню
    int userChoose = userChooseGame(); // Выбор игры
    string userInWord;       // Для ввода слова от пользователя
    char again = 'y'; // Для продолжения/завершения программы
    switch (userChoose) {
    case 1:
        do {
            int numArray = randNums1(constants::LENG_RAND_VERB);
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
            int numArray = randNums1(constants::LENG_RAND_QWEST);
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
    case 3:
       cout << "Goodbye!" << endl;
       return 0;
       break;
    default:
        return main();
        break;
    }
    cout << "Do you want main menu? (y/n)" << endl;
    char mainMenu;
    cin >> mainMenu;
    if (mainMenu == 'y') {
        return main();
    }
    else {
      cout << "Goodbye!" << endl;
    }
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
  cout << "3. Exit" << endl;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //