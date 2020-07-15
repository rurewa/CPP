// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

enum class Colors {
    YELLOW,
    WHITE,
    ORANGE,
    GREEN
};

int main() {
    using namespace std;
    cout << "Enter num: " << endl;
    int userNum;
    cin >> userNum;
    Colors color(static_cast<Colors>(userNum));
    if (color == Colors::YELLOW) {
        cout << "White" << endl;
    }
    else if (color == Colors::WHITE) {
        cout << "Yellow" << endl;
    }
    else if (color == Colors::ORANGE) {
        cout << "Orange" << endl;
    }
    else if (color == Colors::GREEN) {
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