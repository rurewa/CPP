// Генерация случайного числа
#include <cstdlib> // Библиотека таймера
#include <ctime>   // Преобразование времени в строку

int randNums1(int lenRand_1) {
    int result = 0;
    srand(time(0));
    return result = 0 + (rand() % lenRand_1);
}