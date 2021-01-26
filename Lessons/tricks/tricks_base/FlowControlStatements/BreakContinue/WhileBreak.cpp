// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример, который считает кол-во попыток ввода символа с использованием
// break;
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    using namespace std;
    int count(0); // Считаем кол-во попыток
    bool exitLoop(false); // Контроль завершения выполнения цикла
    while (!exitLoop) {
        cout << "Enter 'e' to exit this loop or any other key to continue: ";
        char sm;
        cin >> sm;

        if (sm == 'e') {
            break;
        }
        ++count;
        cout << "We've iterated " << count << " times\n";
    }

    return 0;
}
// Output:
/*
Enter 'e' to exit this loop or any other key to continue: w
We've iterated 7 times
Enter 'e' to exit this loop or any other key to continue: e
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//