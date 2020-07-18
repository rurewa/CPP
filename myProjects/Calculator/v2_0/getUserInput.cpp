#include<iostream>

// Принимаем значение от пользователя
int getUserInput() {
    std::cout << "Please enter an integer: " << std::endl;
    int value = 0;
    std::cin >> value;
    return value;
}