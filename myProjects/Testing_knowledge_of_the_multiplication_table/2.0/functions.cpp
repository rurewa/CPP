#include<iostream>
#include<cstdlib> // Библиотека таймера
#include<ctime>

// Генерация случайного числа
int randNums1() {
    int result = 0;
    srand(time(0));
    return result = 3 + (rand() % 8);
}
// Генерация псевдослучайного     сла
int randNums2() {
    int min = 3, max = 8;
    return min + rand() % (max - min);
}