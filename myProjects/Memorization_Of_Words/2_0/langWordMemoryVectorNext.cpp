// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа для запоминания английских слов. С применением динамических массивов
// V 2.3 beta refactoring
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <string>
#include <vector>
#include "constants.h" // Константы
#include "function.h" // Функции

int main()
{
    using namespace std;
    vector<string> enIrregularVerbsWords = {"meet", "let", "ride", "hold", "hear", "have", "grow", "give", "get", "fight", "fall",
                                            "cost", "come", "choose", "catch", "bring", "blow", "wear", "wake", "until", "everyone!"};
    vector<string> ruIrregularVerbsWords = {"встречаться", "означать", "кататься", "держать", "слышать", "иметь", "расти", "давать",
                                            "получать", "бороться", "падать", "строить", "придти", "выбирать", "ловить", "приносить",
                                            "дуть", "носить", "будить", "до тех пор", "все"};
    vector<string> ruQuestionsWord = {"что", "почему", "где", "как", "когда", "чей"};
    vector<string> enQuestionsWord = {"what", "why", "where", "how", "when", "whose"};
    vector<string> enProgrammicWorlds = {"issue", "exception", "above", "below", "under"};
    vector<string> ruProgrammicWorlds = {"вопрос", "исключение", "выше", "ниже", "под"};
    menuGame(); // Меню
    int userChoose = userChooseGame(); // Выбор игры
    string userInWord; // Для ввода слова от пользователя
    char again{'y'}; // Для продолжения/завершения программы
    switch (userChoose) {
    case 1:
        do {
            int numArray = randNums(constants::LENG_RAND_VERB);
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
            int numArray = randNums(constants::LENG_RAND_QWEST);
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
       do {
            int numArray = randNums(constants::LENG_RAND_PROGRAMMIC);
            cout << "Translate the word - " << ruProgrammicWorlds[numArray] << endl;
            cin >> userInWord;
            if (enProgrammicWorlds[numArray] == userInWord) {
                cout << "True!" << endl;
            }
            else {
                cout << "False!" << endl;
            }
            cout << "Do you want to play again? (y/n)" << endl;
            cin >> again;
        } while (again == 'y');
       break;
    case 4:
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
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //