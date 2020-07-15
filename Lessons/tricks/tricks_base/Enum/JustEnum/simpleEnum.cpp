// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum
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
    Colors colorOrange = ORANGE;
    cout << "Colors color = ORANGE: " << colorOrange << endl;
    Colors colorWhite(WHITE);
    cout << "Colors colorWhite(WHITE): " << colorWhite << endl;
    int colorGreen = GREEN;
    cout << "int colorGreen = GREEN: " << colorGreen << endl;
    return 0;
}

// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//