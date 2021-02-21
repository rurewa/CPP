// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Пример итерации по вектору
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <vector>

int main() {
    using namespace std;
    vector<int> myVector;
    // Заполним вектор 5-ю числами
    for (int count = 0; count < 5; ++count) {
        myVector.push_back(count);
    }
    // Объявляем итератор только для чтения
    vector<int>::const_iterator it;
    it = myVector.begin(); // Присваеваем ему начальный элемент вектора
    // Пока итератор не достигнет последнего элемента
    while (it != myVector.end()) {
        // Выводим значение элемента, на который указывает итератор
       cout << *it << " "; 
       ++it; // Переходим к следующему элементу
    }
    cout << '\n';
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //