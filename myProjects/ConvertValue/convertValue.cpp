// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа для преобразования чимвола в число и наоборот
// v 1.0 beta
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int chooseMenu() {
    int inputChoose{};
    std::cin >> inputChoose;
    return inputChoose;
}

int userInputInt() {
    int inputNumber{};
    std::cin >> inputNumber;
    return inputNumber;
}

char userInputChar() {
    char inputChar{};
    std::cin >> inputChar;
    return inputChar;
}

void menu() {
    using namespace std;
    cout << "1. Convert char to int\n";
    cout << "2. Convert int to char\n";
    cout << "3. Exit\n";
}

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