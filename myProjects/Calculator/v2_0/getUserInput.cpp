#include<iostream>

// Принимаем значение от пользователя
double getUserInput() {
    std::cout << "Please enter an integer: " << std::endl;
    double value = 0;
    std::cin >> value;
    return value;
}