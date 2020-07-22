#include<iostream>

// Принимаем знак оператора от пользователя
char getMatematicalOperation() {
    std::cout << "Please enter which operator: " << std::endl;
    char op;
    std::cin >> op;
    // Тут должна быть защита от ввода некоректного символа
    return op;
}