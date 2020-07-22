// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример бесконечного цикла с выходом по break
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    using namespace std;
    while (true) {
        cout << "Enter 0 to exit or anything else to continue: ";
        int userNum;
        cin >> userNum;
        if (userNum == 0) {
            break;
        }
    }
    cout << "We're out!" << endl;
    return 0;
}
// Output:
/*
Enter 0 to exit or anything else to continue: 3
Enter 0 to exit or anything else to continue: 0
We're out!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//