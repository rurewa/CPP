// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Программа для запоминания английских слов. С применением динамических массивов
// V 1.0 beta
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <string>
#include <cstdlib> // Библиотека таймера
#include <ctime>   // Преобразование времени в строку
#include <vector>
using namespace std;

// Генерация случайного числа
int randNums1(int lenRand_1); // Для первой игры
int randNums2(int lenRand_2); // Для второй игры

int main()
{
    string userInWord;       // Для ввода слова от пользователя
    char again = 'y'; // Для продолжения/завершения программы
    vector<string> enIrregularVerbsWords = {"meet", "let", "ride", "hold", "hear", "have", "grow", "give", "get", "fight", "fall",
                                            "cost", "come", "choose", "catch", "bring", "blow"};
    vector<string> ruIrregularVerbsWords = {"встречаться", "означать", "кататься", "держать", "слышать", "иметь", "расти", "давать",
                                            "получать", "бороться", "падать", "строить", "придти", "выбирать", "ловить", "приносить", "дуть"};
    vector<string> ruQuestionsWord = {"что", "почему", "где", "как"};
    vector<string> enQuestionsWord = {"what", "why", "where", "how"};
    cout << "Выберите задание (1/2)" << endl;
    cout << "1. IrregularVerb;" << endl;
    cout << "2. QuestionsWord." << endl;
    int userChoose = 0; // Выбор игр
    cin >> userChoose;
    switch (userChoose) {
    case 1:
        do {
            int numArray = randNums1(17);
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
            int numArray = randNums2(4);
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

// Генерация случайного числа
int randNums1(int lenRand_1) {
    int result = 0;
    srand(time(0));
    return result = 0 + (rand() % lenRand_1);
}

int randNums2(int lenRand_2) {
    int result = 0;
    srand(time(0));
    return result = 0 + (rand() % lenRand_2);
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
