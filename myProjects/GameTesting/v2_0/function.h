#ifndef FUNCTION_H
#define FUNCTION_H

int userNumInput(); // Ожидание и приём ввода от пользователя
// Сравнивает ответ и возвращает полученный результат. Определяет номер правильного ответа
bool checkTrueQuestion(int answer, int num);
int calculate(bool userAnswer); // Вычисляет баллы

#endif