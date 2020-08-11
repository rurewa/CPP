// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая программа для запоминания таблицы умножения.
// Simple program for storing multiplication tables.
// V 2.0 beta refactoring
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include "functions.h"

int main() {
    using namespace std;
    cout.setf(ios::boolalpha); // Для выода слов true/false
    char userSelection{'y'}; // Для продолжения или выхода из программы
    int num = 0; // Для ввода ответа пользователем
    int check = 0; // Для сравнения
    const bool answer = false; // Для вывода результата

    cout << "Testing knowledge of the multiplication table" << endl;
    while (userSelection != 'n') {
        cout << randNums1() << " x " << randNums2() << " ? " << endl;
        check = randNums1() * randNums2(); // Вычисление
        cin >> num;
        if (cin.fail()) { // Проверка ввода числа
            cin.clear(); // Сброс состояния
            cout << "Insert the number!" << endl;
            break;
        }
    else {
        if (num == check) {
            cout << !answer << endl;
        }
        else {
            cout << answer << endl;
        }
        cout << "Press (y) to replay or any other key to exit" << endl;
        cin >> userSelection;
        // Проверка корректности ввода символа
        if (userSelection == 'y') { continue; }
        else { break; }
        }
    }
}
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// END FILE
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
