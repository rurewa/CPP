// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Изящное определение четности
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

bool isEven (int x) {
    // Even - 1, Odd - 0
    return ((x & 1) != 0) ? 0 : 1;
}

int main() {
    using namespace std;
    //изящное определение четности
    cout << "Enter num: ";
    int userNum{0};
    cin >> userNum;
    cout << isEven(userNum) << endl;
    return 0;
}
// Output:
/*
Enter num: 5
0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//