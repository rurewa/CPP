// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра, генерирующая случайное число в диапазоне, отбрасывающая повторы
// При первом старте генеруируется случайное число, которое заносится в фиксированный массив.
// Следующее за первым число сравнимается с первым и, если нет повтора, то оно заносится в
// фиксированный массив в следующий индекс и так до n-количество раз.
// Если обнаружен повтор, то программа его игнорирует и возвращается к генерации числа.
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
    //int min = 1;
    //int max = 10;
    // Текущее состояние массива
    cout << "Empty array" << endl;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int arrIndex = 0; arrIndex <= 9; ++arrIndex) {
        cout << " Index arr: " << arr[arrIndex];
    }
    cout << "/----------------------------------------/" << endl;
    // Новое состояние массива
    int count = 0;
    int currentNum = 0; // Текущее число
    int lastNum = 0;
    while (count <= 10) {
        cout << ". Enter you num: " << endl;
        cin >> currentNum; // Введённое число
        cout << "Index: " << count;
        if (currentNum != lastNum) {
            ++count;
            arr[count] = currentNum;
            for (int arrIndex = 0; arrIndex <= 9; ++arrIndex) {
                cout << " : " << arr[arrIndex];
            }
        }
        else {
            cout << "\nRepeat!";
        }
        lastNum = currentNum;
    }
    /*
    for (int arrIndex = 0; arrIndex <= 9; ++arrIndex) {
        cout << " Index arr: " << arr[arrIndex];
    }
    */
    return 0;
}
/*
int lastNum = 0; // Предыдущее число
        if (currentNum != lastNum) {
            ++count;
            arr[count] = currentNum;
        }
        else {
            cout << "Repeat!" << endl;
            lastNum = currentNum;
        }
while (true) {
        int randNum = getRandomNumber(min, max);
        cout << randNum << endl;
        int arrInt[10] = {};
        arrInt[0] = randNum;
        for (int a = 0; a <= 10; ++a) {
            cout << arrInt[a] << endl;
        }
cout << arrInt[0] << endl;
cout << "Продолжить? y or no" << endl;
char useAnswer;
cin >> useAnswer;
if (useAnswer == 'n')
{
    break;
}
}
*/
// Output:
/*
2
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//