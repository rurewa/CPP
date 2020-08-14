#include<iostream>
#include<cstdlib> // Библиотека таймера
#include<ctime>

// Генерация случайного числа
int randNums1() {
    const int min = 3, max = 7;
    srand(time(0));
    return min + (rand() % max);
}
// Генерация псевдослучайного числа
int randNums2() {
    const int min = 3, max = 9;
    return min + rand() % (max - min);
}