// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой Калькулятор v 2.0 alpha (refactoring) The Simply Calculator
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include "function.h"

int main() {
    using namespace std;
    cout.setf(ios::boolalpha); // Чтобы вывод был true/false
    char userInput = 'y';
    int answer;
    bool userAnswer;
    int checkNum = 0;
    while (userInput != 'n') {
        cout << "Ответь на вопросы" << endl;

        cout << "Третья планета от солнца?" << endl;
        cout << "1. Венера"
             << "\n2. Земля" << endl;
        answer = userNumInput();
        userAnswer = checkTrueQuestion(answer, 2);
        cout << userAnswer << endl;
        checkNum += calculate(userAnswer);
        cout << "Вы набрали: " << checkNum << endl;

        cout << "Сколько естественных спутников у Марса?" << endl;
        cout << "1. Один"
             << "\n2. Два" << endl;
        answer = userNumInput();
        userAnswer = checkTrueQuestion(answer, 2);
        cout << userAnswer << endl;
        checkNum += calculate(userAnswer);
        cout << "Вы набрали: " << checkNum << endl;

        cout << "Сколько горбов у двугорбового верблюда?" << endl;
        cout << "1. Один"
             << "\n2. Два" << endl;
        answer = userNumInput();
        userAnswer = checkTrueQuestion(answer, 2);
        cout << userAnswer << endl;
        checkNum += calculate(userAnswer);
        cout << "Вы набрали: " << checkNum << endl;

        cout << "Для повтора нажмите (y), для выхода (n)" << endl;
        cin >> userInput;
        if (userInput == 'y') {
            return main();
        }
        else {
            break;
        }
    }
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//