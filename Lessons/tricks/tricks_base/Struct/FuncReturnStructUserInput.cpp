// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример применения функции, которая может возвращать структуру из нескольких
// членов одновременно
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

struct Point3d {
    double x;
    double y;
    double z;
};

Point3d getZeroPoint(double x, double y, double z) {
    Point3d temp = { x, y, z };
    return temp;
}

double userInput() {
    double temp;
    std::cin >> temp;
    std::cin.ignore(32767, '\n');
    return temp;
}

int main() {
    using namespace std;
    cout << "Enter value X: " << endl;
    double valueX = userInput();
    cout << "Enter value Y: " << endl;
    double valueY = userInput();
    cout << "Enter value Y: " << endl;
    double valueZ = userInput();
    Point3d zero = getZeroPoint(valueX, valueY, valueZ);
    if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0) {
        cout << "The point is zero" << endl;
    }
    else {
        cout << "The point is not zero" << endl;
    }
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//