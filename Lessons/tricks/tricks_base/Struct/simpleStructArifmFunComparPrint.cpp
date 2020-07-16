// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Примеры применения структуры
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <string>

struct Employe {
    std::string name;
    short id;
    int age;
    double salary;
};

void printInformation(Employe employe) {
    using namespace std;
    cout << "Name: " << employe.name << endl;
    cout << "ID: " << employe.id << endl;
    cout << "Age: " << employe.age << endl;
    cout << "Salary" << employe.salary << endl;
}

int main() {
    using namespace std;
    /*
    Employe john;
    john.id = 8;
    john.age = 27;
    john.salary = 32.17;

    Employe james;
    james.id = 9;
    james.age = 30;
    james.salary = 28.35;
    */
   // Инициализируем члены структуры
    Employe john{ "John", 8, 27, 32.17};
    Employe james{ "James", 9, 30, 28.35};
    // Выполняем арифметические операции с членами структуры
    int totalAge = john.age + james.age;
    // Печатаем значения структур и результат вычисления
    /*
    cout << "john ID: " << john.id << endl;
    cout << "james ID: " << james.id << endl;
    cout << "Total age: " << totalAge << endl;
    */
    printInformation(john);
    printInformation(james);
    cout << "Total age: " << totalAge << endl;
    // Выполняем сравнение членов структур (как обычные переменные)
    if (john.salary > james.salary) {
        cout << "John makes more than James" << endl;
    }
    else if (john.salary < james.salary) {
        cout << "John makes less than James" << endl;
    }
    else {
        cout << "John and James make the same amount" << endl;
    }


    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//