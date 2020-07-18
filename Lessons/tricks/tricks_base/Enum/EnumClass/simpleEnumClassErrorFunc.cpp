// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример определения отрицательного числа с помощью перечисления
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>

enum class ErrorCode {
    ERROR_SUCCESS = 0,
    ERROR_NEGATIVE_NUMBER = -1
};

ErrorCode doSomething(int value) {
    // Если параметром value является отрицательное число,
    if (value < 0) {
      // то сразу возвращаем код ошибки
      return ErrorCode::ERROR_NEGATIVE_NUMBER;
    }
    return ErrorCode::ERROR_SUCCESS;
}

int main() {
    using namespace std;
    cout << "Enter a positive number: " << endl;
    int a;
    cin >> a;
    cin.ignore(32767, '\n');
    if (doSomething(a) == ErrorCode::ERROR_NEGATIVE_NUMBER) {
        cout << "You entered a negative number" << endl;
    }
    else {
        cout << "It worked!" << endl;
    }
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//