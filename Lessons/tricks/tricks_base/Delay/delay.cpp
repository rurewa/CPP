#include <iostream>
#include <unistd.h>

int multyply(int a, int b) {
    return a * b;
}

int main() {
    using namespace std;
    sleep(5);
    cout << "Result:" << multyply(7, 8) << endl;
    return 0;        
}