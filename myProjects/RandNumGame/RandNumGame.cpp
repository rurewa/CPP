// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра, генерирующая случайное число в диапазоне, отбрасывающая повторы
// При первом старте генеруируется случайное число, которое заносится в фиксированный массив.
// Следующее за первым число псравнимается с первым и, сли нет повтора заносится в 
// фиксированный массив в следующий индекс и так до 10 раз.
// Если обнаружен повтор, то программа его игнорирует и возаращается к генерации следующего числа.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max) {
    // Генерируем рандомное число между значениями min и max
    // Предполагается, что функцию srand() уже вызывали
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

int main() {
    using namespace std;
    srand(static_cast<unsigned int>(time(0)));
    int min = 1;
    int max = 10;
    while (true) {
        int randNum = getRandomNumber(min, max);
        cout << randNum << endl;
        int arrInt[10] = {};
        arrInt[0] = randNum;
        /*
        for (int a = 0; a <= 10; ++a) {
            cout << arrInt[a] << endl;
        }
        */
        cout << arrInt[0] << endl;
        cout << "Продолжить? y or no" << endl;
        char useAnswer;
        cin >> useAnswer;
        if (useAnswer == 'n') {
            break;
        }
    }
    
    return 0;
}
// Output:
/*
2
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//