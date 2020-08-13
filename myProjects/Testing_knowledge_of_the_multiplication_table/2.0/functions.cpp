#include<iostream>
#include<cstdlib> // Библиотека таймера
#include<ctime>

// Генерация случайного числа
int randNums1() {
    int min = 3, max = 7;
    int result = 0;
    srand(time(0));
    return result = min + (rand() % max);
}
// Генерация псевдослучайного     сла
int randNums2() {
    int min = 3, max = 9;
    return min + rand() % (max - min);
}