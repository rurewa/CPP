// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример ввода определённого количества чисел,
// вычисления суммы их значений в векторе
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <vector>

int main() {
  using namespace std;
  static int sum = 0;
  vector<int> arr;
  // Для ввода числа от пользователя
  for (int x = 0; x <= 4; ++x) {
    cout << "Enter num: " << endl;
    int userNum;
    cin >> userNum;
    arr.push_back(userNum); // Добавляем в массив числа пользователя
  }
  int arrSize = arr.size();
  // Для вычесления суммы всех элементов массива
  for (int i = 0; i <= arrSize; ++i) {
    cout << arr[i] << " ";
    sum += arr[i];
  }
  cout << sum << endl;

  return 0;
}
// Output:
/*
Enter num: 
1
Enter num: 
2
Enter num: 
3
Enter num: 
4
Enter num: 
5
1 2 3 4 5 0 15
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
