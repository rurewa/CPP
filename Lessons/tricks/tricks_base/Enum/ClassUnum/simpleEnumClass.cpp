// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum
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
    Colors colorOrange = Colors::ORANGE; // Вариант доступа №1
    cout << "Colors color = ORANGE: " << static_cast<int>(colorOrange) << endl;
    Colors colorWhite(Colors::WHITE); // Вариант доступа №2
    cout << "Colors color(WHITE): " << static_cast<int>(colorWhite) << endl;

    return 0;
}

// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//