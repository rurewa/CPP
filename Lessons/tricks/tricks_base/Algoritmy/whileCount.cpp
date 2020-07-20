// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример цикла while со счётчиком
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    using namespace std;
    int count = 1; // Счётчик и номер строки вывода
    int result = 0; //Сумма всех введённых пользователем чисел
    while (count < 6)
    {
        int z; // Создаётся и уничтожается при каждом цикле
        cout << "Enter integer #" << count << ":";
        cin >> z;
        result += z;
        ++count; // Счётчик внутри цикла

    }
    cout << "The sum of all number entered is: " << result << endl;

    return 0;
}
// Output:
/*
Enter integer #1:3
Enter integer #2:3
Enter integer #3:3
Enter integer #4:3
Enter integer #5:3
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//