#include<iostream>
using namespace std;

int main() {
    cout.setf(ios::boolalpha);
    const int a = 5, b = 5;
    bool result = false;
    result = (a == b);
    cout << "a == b: " << result << endl;

    result = (a != b);
    cout << "a != b: " << result << endl;

    result = (a < b);
    cout << "a < b: " << result << endl;

    result = (a <= b);
    cout << "a =< b: " << result << endl;

    result = (a > b);
    cout << "a > b: " << result << endl;

    result = (a >= b);
    cout << "a => b: " << result << endl;
    
    return 0;
}