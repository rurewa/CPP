// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Определение положительных и отрицательных чисел ветвлением
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    using namespace std;
    cout << "Enter an integer:" << endl;
    int a;
    cin >> a;
    cout << "Enter another integer: " << endl;
    int b;
    cin >> b;
    if (a > 0 && b > 0) {
        cout << "Both numbers are positive" << endl;
    }
    else if (a > 0 || b > 0) {
        cout << "One of numbers is positive" << endl;
    }
    else {
        cout << "Neither numbers is positive" << endl;
    }
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
