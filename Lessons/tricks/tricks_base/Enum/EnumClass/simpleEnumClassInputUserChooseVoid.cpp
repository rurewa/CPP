// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты по void для доступа к элементам перечислений enum class по
// выбору пользователя
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

enum class Colors {
  RED, // Присваивается 0
  BROWN, // Присваивается 1
  GRAY, // Присваивается 2
  WHITE, // Присваивается 3
  PINK, // Присваивается 4
  ORANGE, // Присваивается 5
  BLUE, // Присваивается 6
  PURPLE, // Присваивается 7
};

void printColor(Colors color);
int userInput();


int main() {
    int userInputNum = userInput();
    Colors color(static_cast<Colors>(userInputNum));
    printColor(color);

    return 0;
}

void printColor(Colors color) {
    using namespace std;
    if (color == Colors::RED) {
        cout << "Red" << endl;
    }
    else if (color == Colors::BROWN) {
        cout << "Brown" << endl;
    }
    else if (color == Colors::GRAY) {
        cout << "Gray" << endl;
    }
    else if (color == Colors::WHITE) {
        cout << "White" << endl;
    }
    else if (color == Colors::PINK) {
        cout << "Pink" << endl;
    }
    else if (color == Colors::ORANGE) {
        cout << "Orange" << endl;
    }
    else if (color == Colors::BLUE) {
        cout << "Blue" << endl;
    }
    else if (color == Colors::PURPLE) {
        cout << "Purple" << endl;
    }
    else {
        cout << "Unknown" << endl;
    }
}

int userInput() {
    using namespace std;
    cout << "Enter num: " << endl;
    int userNum;
    cin >> userNum;
    cin.ignore(32767, '\n');
    return userNum;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//