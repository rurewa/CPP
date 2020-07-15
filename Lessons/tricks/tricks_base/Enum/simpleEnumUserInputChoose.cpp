// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// V 1.1
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

enum Colors {
    YELLOW,
    WHITE,
    ORANGE,
    GREEN,
};

int main() {
    using namespace std;
    cout << "Enter num: " << endl;
    int userNum;
    cin >> userNum;
    Colors color(static_cast<Colors>(userNum));
    if (color == YELLOW) {
        cout << "White" << endl;
    }
    else if (color == WHITE) {
        cout << "Yellow" << endl;
    }
    else if (color == ORANGE) {
        cout << "Orange" << endl;
    }
    else if (color == GREEN) {
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