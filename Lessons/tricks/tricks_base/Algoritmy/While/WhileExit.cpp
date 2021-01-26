// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример выхода из цикла по условию
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    using namespace std;
    int val = 0;
    
    while (true) {
        cout << "Enter 0 for exit cycle" << endl;
        cin >> val;
        while (val == 0) {
            exit(0);
        }
    }
    cout << "You enter: " << val << endl;
    return 0;
}
// Output:
/*
Enter 0 for exit cycle
6
Enter 0 for exit cycle
1
Enter 0 for exit cycle
0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//