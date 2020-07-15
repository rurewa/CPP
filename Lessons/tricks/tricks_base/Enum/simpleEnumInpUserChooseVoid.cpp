// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты по void для доступа к элементам перечислений enum по выбору
// пользователя
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

enum Colors {
  COLOR_RED, // Присваивается 0
  COLOR_BROWN, // Присваивается 1
  COLOR_GRAY, // Присваивается 2
  COLOR_WHITE, // Присваивается 3
  COLOR_PINK, // Присваивается 4
  COLOR_ORANGE, // Присваивается 5
  COLOR_BLUE, // Присваивается 6
  COLOR_PURPLE, // Присваивается 7
};

void printColor(Colors color) {
    using namespace std;
    if (color == COLOR_RED) {
        cout << "Red" << endl;
    }
    else if (color == COLOR_BROWN) {
        cout << "Brown" << endl;
    }
    else if (color == COLOR_GRAY) {
        cout << "Gray" << endl;
    }
    else if (color == COLOR_WHITE) {
        cout << "White" << endl;
    }
    else if (color == COLOR_PINK) {
        cout << "Pink" << endl;
    }
    else if (color == COLOR_ORANGE) {
        cout << "Orange" << endl;
    }
    else if (color == COLOR_BLUE) {
        cout << "Blue" << endl;
    }
    else if (color == COLOR_PURPLE) {
        cout << "Purple" << endl;
    }
    else {
        cout << "Unknown" << endl;
    }
}

int main() {
    using namespace std;
    cout << "Enter num: " << endl;
    int userNum;
    cin >> userNum;
    Colors color(static_cast<Colors>(userNum));
    printColor(color);

    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//