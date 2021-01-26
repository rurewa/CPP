// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример использования цикла for с оператором break
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    using namespace std;
    int sum = 0;
    // Разрешаем пользователю ввести до 10-и чисел
    for (int count = 0; count < 10; ++count) {
        cout << "Enter a number to add, or 0 to exit: ";
        int val;
        cin >> val;
        // Выходим из цикла, если пользователь ввёл 0
        if (val == 0) {
            break;
        }
        sum += val;
    }
    cout << "The sum of all the numbers you entered is " << sum << "\n";
    return 0;
}
// Output:
/*
Enter a number to add, or 0 to exit: 1
Enter a number to add, or 0 to exit: 0
The sum of all the numbers you entered is 64
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//