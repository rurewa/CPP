#include<iostream>
// Вычисление кол-ва попыток, неудач и общий % успеха
void computation(double a, double b) {
    std::cout << "Попыток: " << a << " из них неудач: " << b;
    double result = 100 - (b / a * 100);
    std::cout << ". Успех: " << result << "%" << std::endl;
}