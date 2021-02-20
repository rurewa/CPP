// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример, который считает кол-во попыток ввода символа
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    using namespace std;
    int count = 0; // Считаем кол-во попыток
    bool exitLoop = false; // Флаг для контроля завершения выполнения цикла
    while (!exitLoop) {
        cout << "Enter 'e' to exit this loop or any other key to continue: ";
        char sm;
        cin >> sm;

        if (sm == 'e') {
            exitLoop = true; // Меняем флаг, чтобы выйти из цикла
        }
        else {
            ++count;
            // Выводим текущий счёт итераций
            cout << "We've iterated " << count << " times\n";
        }
    }
    cout << "We've sum iterated " << count + 1 << " times\n";

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