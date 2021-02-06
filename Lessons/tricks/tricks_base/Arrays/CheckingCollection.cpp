// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Использование встроенной функции all_of, any_of и none_of для быстрой проверки
// элементов коллекции на соответствие условию.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm> // std::all_of

int main() {
    using namespace std;
    //стандартный массив
    int arr[5] = {5, 1, 3, 2, -7};
    if (std::all_of(arr, arr + 5, [](int elem) { return elem > 0; }))
        std::cout << "All array elements are positive" << std::endl;
    else {
        std::cout << "There are negative elements in the array" << std::endl;
    }
    return 0;
}
// Output:
/*
There are negative elements in the array
0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//