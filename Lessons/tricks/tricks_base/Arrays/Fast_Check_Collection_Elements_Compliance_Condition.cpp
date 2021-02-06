// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Использование встроенной функции all_of, any_of и none_of для быстрой проверки
// элементов коллекции на соответствие условию.
// Проверка присутствия в массиве 0
// Fast check of collection elements for compliance with a condition
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm> // std::all_of
#include <vector>

int main() {
    using namespace std;
    //стандартный массив
    //работа с коллекциями
    vector<int> someVector = {5, 1, 2, 2, 7};
    if (std::any_of(someVector.begin(), someVector.end(), [](int elem) { return elem == 0; }))
        std::cout << "The vector contains 0" << std::endl;
    else {
        std::cout << "Vector does not contain 0" << std::endl;
    }
    return 0;
}
// Output:
/*
Vector does not contain 0
0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//