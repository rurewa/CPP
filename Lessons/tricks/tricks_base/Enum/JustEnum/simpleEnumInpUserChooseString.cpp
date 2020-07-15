// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты со string для доступа к элементам перечислений enum по выбору
// пользователя
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <string>
using namespace std;

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

string printColor(Colors color) {
  if (color == COLOR_RED) {
    return string("Red");
  }
  else if (color == COLOR_BROWN) {
    return string("Brown");
  }
  else if (color == COLOR_GRAY) {
    return string("Gray");
  }
  else if (color == COLOR_WHITE) {
    return string("White");
  }
  else if (color == COLOR_PINK) {
    return string("Pink");
  }
  else if (color == COLOR_ORANGE) {
    return string("Orange");
  }
  else if (color == COLOR_BLUE) {
    return string("Blue");
  }
  else if (color == COLOR_PURPLE) {
    return string("Purple");
  }
  else {
    return string("Unknown!");
  }
}

int main() {
    cout << "Enter num: " << endl;
    int userNum;
    cin >> userNum;
    Colors color(static_cast<Colors>(userNum));
    cout << printColor(color) << endl;

    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//