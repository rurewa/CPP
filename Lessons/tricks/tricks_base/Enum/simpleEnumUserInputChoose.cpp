// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum Colors {
    YELLOW,
    WHITE,
    ORANGE,
    GREEN,
};

int main() {
    cout << "Enter num: " << endl;
    int userNum;
    cin >> userNum;
    Colors colorYellow(static_cast<Colors>(userNum));
    Colors colorWhite(static_cast<Colors>(userNum));
    Colors colorOrange(static_cast<Colors>(userNum));
    Colors colorGreen(static_cast<Colors>(userNum));
    if (colorYellow == YELLOW) {
        cout << "White" << endl;
    }
    else if (colorWhite == WHITE) {
        cout << "Yellow" << endl;
    }
    else if (colorOrange == ORANGE) {
        cout << "Orange" << endl;
    }
    else if (colorGreen == GREEN) {
        cout << "Green" << endl;
    }
    else {
        cout << "Unknown!" << endl;
    }

    return 0;
}

// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//