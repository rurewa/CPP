// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Вычисление значения функции у = –2,7x3 + 0,23x2 – 1,4
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <cmath>

int main() {
    double oneNum   { -2.7 };
    double twoNum   { 0.23 };
    double threeNum { 1.4 };
    double onePow = pow(oneNum, 3); // Возводим в степень
    double twoPow = pow(twoNum, 2);
    double y = onePow + twoPow - threeNum;
    std::cout << y << std::endl;  
    return 0;
}
// Output
// -21.0301
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
