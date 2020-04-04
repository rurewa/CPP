// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример разделения интерфейса с чистыми функциями
// Программа сравнения 2-х введённых пользователем значений
// v 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

bool isEqual(int a, int b) { 
    return (a == b); // Возвращает true или false
}

int userFirstPrintInput() { // 1-е значение от пользователя
    cout << "Enter is first number: " << endl;
    int x;
    cin >> x;

    return x;
}

int userSecondPrintInput() { // 2-е значение от пользователя
    cout << "Enter is second number: " << endl;
    int y;
    cin >> y;

    return y;
}

void printResultEqual(int x, int y) { // Вывод равенства
    cout << x << " end " << y << " are equal " << endl;
}

void printResultNoEqual(int x, int y) { // Вывод неравенства
    cout << x << " end " << y << " are not equal " << endl;
}

void printResult(int x, int y) { // Вывод результата
    if (isEqual(x, y)) { printResultEqual(x, y); }
    else { printResultNoEqual(x, y); }
}

int main()
{
    int x, y;
    x = userFirstPrintInput();
    y = userSecondPrintInput();
    printResult(x, y);

    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//