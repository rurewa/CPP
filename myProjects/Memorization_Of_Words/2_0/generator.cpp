// Генерация случайного числа
#include <cstdlib> // Библиотека таймера
#include <ctime>   // Преобразование времени в строку

int randNums(int lenRand) {
    int result{};
    srand(time(0));
    return result = 0 + (rand() % lenRand);
}