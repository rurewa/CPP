// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая программа для запоминания таблицы умножения.
// Simple program for storing multiplication tables.
// V 2.3 beta refactoring
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include "functions.h"

int main() {
    using namespace std;
    cout.setf(ios::boolalpha); // Для вывода слов true/false
    char userSelection{'y'}; // Для продолжения или выхода из программы
    float allTry{}; // Подсчёт попыток
    float allFalse{}; // Подсчёт неудач
    cout << "Testing knowledge of the multiplication table" << endl;
    while (userSelection != 'n') {
        ++allTry;
        cout << randNums1() << " x " << randNums2() << " ? " << endl;
        int check{}; // Для сравнения
        check = randNums1() * randNums2(); // Вычисление
        int num{}; // Для ввода ответа пользователем
        cin >> num;
        if (cin.fail()) { // Проверка ввода числа
            cin.clear(); // Сброс состояния
            cout << "Insert the number!" << endl;
            break;
        }
        else {
            const bool answer{false}; // Для вывода результата
            if (num == check) {
                cout << !answer << endl;
            }
            else {
                cout << answer << endl;
                ++allFalse;
            }
            cout << "Press (y) to replay or any other key to exit" << endl;
            cin >> userSelection;
            // Проверка корректности ввода символа
            if (userSelection == 'y') { continue; }
            else { break; }
        }
    }
    computation(allTry, allFalse);
    return 0;
}
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// END FILE
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
