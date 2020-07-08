// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая структура с функцией для печати информации
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct Person {
    short id;
    int age;
    double salary;
};

void printInfo(Person person) {
    cout << "ID: " << person.id << endl;
    cout << "Age: " << person.age << endl;
    cout << "Salary: " << person.salary << endl;
}

int main() {
    Person alex = {1, 43, 300000};
    Person inna = {2, 19, 50000};
    cout << "Alex: " << endl;
    printInfo(alex);
    cout << "\n";
    cout << "Inna: " << endl;;
    printInfo(inna);
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//