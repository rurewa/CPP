#include <iostream>
#include "function.h"

int userNumInput() { // Ожидание и приём ввода от пользователя
    int answer = 0;
    std::cin >> answer;
    return answer;
}

bool checkTrueQuestion(int answer, int num) { // Сравнивает ответ и возвращает полученный результат
    bool check = false;
    if (answer == num) {
        check = true;
    }
    else {
        check = false;
    }
    return check;
}

int calculate(bool userAnswer) { // Вычисляет баллы
    int result = 0;
    if (userAnswer == true) {
        result++;
    }
    else {
        result = 0;
    }

    return result;
}