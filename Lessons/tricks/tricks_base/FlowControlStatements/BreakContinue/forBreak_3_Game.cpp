// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра "Угадай букву!". Пример использования оператора break в бесконечном цикле
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    using namespace std;
    int count = 0;
    cout << "Guess the letter!" << endl;
    int con = 0;
    // Выводим английские буквы в алфавитном порядке
    // в столбик по 13 букв
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        ++con;
        if (con % 13 == 0) {
            cout << "\n";
        }
        cout << ch << " ";
    }
    
    while (true) {
        cout << "\nEnter letter: ";
        char sm;
        cin >> sm;
        if (sm == 'e') {
            break;
        }
        ++count;
        cout << sm << "Iteration: " << count << endl; // Номер попытки
        cout << "Try again!" << endl;
    }
    cout << "Sum iteration: " << count << endl; // Сумма попыток

    return 0;
}
// Output:
/*
Enter letter: k
kIteration: 3
Try again!

Enter letter: q
qIteration: 4
Try again!

Enter letter: e
Sum iteration: 4
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//