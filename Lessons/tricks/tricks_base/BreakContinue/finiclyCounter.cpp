#include<iostream>
using namespace std;

int count = 0;

int main() {
    while (true) {
        ++count;
        if (count > 10) { // Доходим до 10
            break;  // И выходим
        }
        if (count == 5) {
            continue; // Пропускаем число 5
        }
        cout << count << endl;
    }    
    return 0;
}
