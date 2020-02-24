#include<iostream>
using namespace std;

int main() {
    cout.setf(ios::boolalpha); 
    const int a = 5, b = 5;
    bool result = false;
    result = (a == b); // Сравнение
    cout << "a == b: " << result << endl;

    result = (a != b); // Не равно
    cout << "a != b: " << result << endl;

    result = (a < b); // Меньше
    cout << "a < b: " << result << endl;

    result = (a <= b); // Меньше или равно
    cout << "a =< b: " << result << endl;

    result = (a > b); // Больше
    cout << "a > b: " << result << endl;

    result = (a >= b); // Больше или равно
    cout << "a => b: " << result << endl;

    result = (a == b) || (a != b); // Логическое ИЛИ
    cout << "(a == b) || (a != b) " << result << endl;

    result = (a == b) && (a != b); // Логическое И
    cout << "(a == b) && (a != b) " << result << endl;

    result = (a == b) xor (a != b); // ТОЛЬКО ОДИН
    cout << "(a == b) xor (a != b) " << result << endl;

    return 0;
}

//
// A && B — эквивалент логического «И». Соответственно возвращает true, если A и B являются истиной.
// A || B — эквивалент логического «ИЛИ». Вернёт true если хотя бы одно из выражений является истинным.
// !A — данный оператор инвертирует значение A. То есть, если A == true, то он вернёт false и наоборот.
//  A xor B — этот оператор можно сравнить с «ТОЛЬКО ОДИН», соответственно вернёт true если A == true и B
//  == false, или наоборот.
//