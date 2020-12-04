// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа для преобразования cимвола в число и наоборот
// по таблице ANCii
// v 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include "function.h"

int main() {
    using namespace std;
    menu();
    int choose = chooseMenu();
    switch (choose)
    {
    case 1:
        cout << "Enter simbol: ";
        char ch;
        ch = userInputChar();
        cout << ch << " -> " << static_cast<int>(ch) << endl;
        break;
    case 2:
        cout << "Enter number 0-127: ";
        int in;
        in = userInputInt();
        // Ввести проверку диапазона чисел
        if (in < 0 || in > 127) {
            cout << "Enter number 0-127: " << endl;
            return main();
        }
        else {
            cout << in << " -> " << "\"" << static_cast<char>(in) << "\"" << endl;
        }
        break;
    case 3:
        cout << "Goodbay!\n";
        break;
    default:
        return 0;
        break;
    }
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
