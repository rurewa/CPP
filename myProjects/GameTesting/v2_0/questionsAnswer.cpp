// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой Калькулятор v 2.0 alpha (refactoring) The Simply Calculator
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int userNumInput(); // Ожидание и приём ввода от пользователя
// Сравнивает ответ и возвращает полученный результат. Определяет номер правильного ответа
bool checkTrueQuestion(int answer, int num);
int calculate(bool userAnswer); // Вычисляет баллы

int main()
{
  cout.setf(ios::boolalpha); // Чтобы вывод был true/false
  char userInput = 'y'; int answer; bool userAnswer; int checkNum = 0;
  while (userInput != 'n')
  {
    cout << "Ответь на вопросы" << endl;

    cout << "Третья планета от солнца?" << endl;
    cout << "1. Венера" << "\n2. Земля" << endl;
    answer = userNumInput();
    userAnswer = checkTrueQuestion(answer, 2);
    cout << userAnswer << endl;
    checkNum += calculate(userAnswer);
    cout << "Вы набрали: " << checkNum << endl;
    
    cout << "Сколько естественных спутников у Марса?" << endl;
    cout << "1. Один" << "\n2. Два" << endl;
    answer = userNumInput();
    userAnswer = checkTrueQuestion(answer, 2);
    cout << userAnswer << endl;
    checkNum += calculate(userAnswer);
    cout << "Вы набрали: " << checkNum << endl;
    
    cout << "Сколько горбов у двугорбового верблюда?" << endl;
    cout << "1. Один" << "\n2. Два" << endl;
    answer = userNumInput();
    userAnswer = checkTrueQuestion(answer, 2);
    cout << userAnswer << endl;
    checkNum += calculate(userAnswer);
    cout << "Вы набрали: " << checkNum << endl;
    
    cout << "Для повтора нажмите (y), для выхода (n)" << endl;
    cin >> userInput;
    if (userInput == 'y') {
      return main();
    }
    else {
      break;
    }
  }
  return 0;
}

int userNumInput() { // Ожидание и приём ввода от пользователя
  int answer = 0;
  cin >> answer;
  return answer;
}

bool checkTrueQuestion(int answer, int num) { // Сравнивает ответ и возвращает полученный результат
  bool check = false;
  if (answer == num) { check = true; }
  else { check = false; }
  return check;
}

int calculate(bool userAnswer) { // Вычисляет баллы
  int result = 0;
  if (userAnswer == true) { result++; }
  else { result = 0; }
  
  return result;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//