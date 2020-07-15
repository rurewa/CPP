// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты со string для доступа к элементам перечислений enum class по
// выбору пользователя
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <string>

enum class Colors {
  RED,    // Присваивается 0
  BROWN,  // Присваивается 1
  GRAY,   // Присваивается 2
  WHITE,  // Присваивается 3
  PINK,   // Присваивается 4
  ORANGE, // Присваивается 5
  BLUE,   // Присваивается 6
  PURPLE, // Присваивается 7
};

std::string printColor(Colors color); // Печать выбранного цвета

int main() {
  using namespace std;
  cout << "Enter num: " << endl;
  int userNum;
  cin >> userNum;
  Colors color(static_cast<Colors>(userNum));
  cout << printColor(color) << endl;

  return 0;
}

std::string printColor(Colors color) {
  using namespace std;
  if (color == Colors::RED)   {
    return string("Red");
  }
  else if (color == Colors::BROWN) {
    return string("Brown");
  }
  else if (color == Colors::GRAY) {
    return string("Gray");
  }
  else if (color == Colors::WHITE) {
    return string("White");
  }
  else if (color == Colors::PINK) {
    return string("Pink");
  }
  else if (color == Colors::ORANGE) {
    return string("Orange");
  }
  else if (color == Colors::BLUE) {
    return string("Blue");
  }
  else if (color == Colors::PURPLE) {
    return string("Purple");
  }
  else {
    return string("Unknown!");
  }
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//