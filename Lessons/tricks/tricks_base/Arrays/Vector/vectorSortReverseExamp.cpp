// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Пример сортировки ветора, его вывода и реверса содержимого.
// Алгоритмы sort() и reverse()
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;
    vector<int> vect;
    vect.push_back(3);
    vect.push_back(1);
    vect.push_back(5);
    vect.push_back(-1);
    vect.push_back(6);
    vect.push_back(8);
    vect.push_back(7);
    vect.push_back(14);
    sort(vect.begin(), vect.end()); // Выполняем сортировку элементов вектора
    vector<int>::const_iterator it; // Объявляем итератор
    // Выводим с помощью цикла и итератора содержимое вектора
    for (it = vect.begin(); it != vect.end(); ++it) {
        cout << *it << " ";
    }
    cout << '\n';
    reverse(vect.begin(), vect.end()); // Сортируем элементы вектора в обратную сторону
    for (it = vect.begin(); it != vect.end(); ++it) {
        cout << *it << " ";
    }
    cout << '\n';
    return 0;
}
// Output
/*
-1 1 3 5 6 7 8 14 
14 8 7 6 5 3 1 -1 
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //