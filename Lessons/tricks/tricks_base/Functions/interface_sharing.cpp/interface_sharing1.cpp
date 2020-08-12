// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример разделения интерфейса с чистыми функциями
// Программа сравнения 2-х введённых пользователем значений
// v 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

bool isEqual(int a, int b);

int userInput();

void printResultEqual(int x, int y);

void printResultNoEqual(int x, int y);

void printResult(int x, int y);

int main()
{
    std::cout << "Enter is first integer number: " << std::endl;
    int firstNumber = userInput();
    std::cout << "Enter is second integer number: " << std::endl;
    int secondNumber = userInput();

    printResult(firstNumber, secondNumber);

    return 0;
}

bool isEqual(int a, int b) {
    return (a == b); // Возвращает true или false
}

int userInput() { // 1-е значение от пользователя
    int x{};
    std::cin >> x;
    return x;
}

void printResultEqual(int x, int y) { // Вывод равенства
    std::cout << x << " end " << y << " are equal " <<std:: endl;
}

void printResultNoEqual(int x, int y) { // Вывод неравенства
    std::cout << x << " end " << y << " are not equal " << std::endl;
}

void printResult(int x, int y) { // Вывод результата
    if (isEqual(x, y)) { printResultEqual(x, y); }
    else { printResultNoEqual(x, y); }
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
