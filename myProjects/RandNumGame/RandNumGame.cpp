// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра, генерирующая случайное число в диапазоне, отбрасывающая повторы
// При первом старте генеруируется случайное число, которое заносится в фиксированный массив.
// Следующее за первым число сравнимается с первым и, если нет повтора, то оно заносится в
// фиксированный массив в следующий индекс и так до n-количество раз.
// Если обнаружен повтор, то программа его игнорирует и возвращается к генерации числа.
// В программе ещё куча отладночной ин-фы.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max);

int main() {
    using namespace std;
    srand(static_cast<unsigned int>(time(0)));
    //int min = 1;
    //int max = 10;
    // Текущее состояние массива
    cout << "Empty array: " << endl;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int arrIndex = 0; arrIndex <= 9; ++arrIndex) {
        cout << " : " << arr[arrIndex];
    }
    cout << " " << endl;
    cout << "/---------------------------------------------------------------------/" << endl;
    // Новое состояние массива
    unsigned int counter = -1; // Счётчик уникальных чисел
    int currentNum = 0; // Текущее число
    int lastNum = 0; // предыдущее число
    while (counter > 0 || counter <= 10) {
        int randNum = getRandomNumber(1, 10);
        currentNum = randNum;
        if (currentNum != lastNum) { // Сравнивает новое число с предыдущим
            ++counter; // Если уникальное, то счётчик прирастает
            arr[counter] = currentNum; // Записывает в массив по индексу из счётчика
            // Показывает новое содержимое массива и проверяет его на заполненность
            for (int arrIndex = 0; arrIndex <= 9; ++arrIndex) {
                cout << " : " << arr[arrIndex];
                int result = arr[9];
                if (result != 0) {
                    for (int a = 1; a <= 9; ++a) {
                        cout << " : " << arr[a];
                        cout << " " << endl;
                    }
                    cout << " " << endl;
                    return 0;
                }
            }
        }
        else {
            cout << "\nRepeat! " << currentNum;
        }
        lastNum = currentNum;
    }
    return 0;
}

int getRandomNumber(int min, int max)
{
    // Генерируем рандомное число между значениями min и max
    // Предполагается, что функцию srand() уже вызывали
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

/*
int arrSize = sizeof(arr) / sizeof(arr[0]); // Определение текущего размера массива
cout << ". Size array: " << arrSize << endl;
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//