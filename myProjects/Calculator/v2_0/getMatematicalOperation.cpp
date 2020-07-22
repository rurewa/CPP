#include<iostream>

// Принимаем знак оператора от пользователя
char getMatematicalOperation() {
    while (true) {
        std::cout << "Enter one of the following: +, -, *, /: ";
        char op;
        std::cin >> op;
        // Переменные типа char могут принимать любые символы из
        // пользовательского ввода, поэтому нам не стоит беспокоиться по поводу
        // возникновения неудачного извлечения
        std::cin.ignore(32767, '\n'); // удаляем лишний балласт
        // Выполняем проверку пользовательского ввода
        if (op == '+' || op == '-' || op == '*' || op == '/') {
            return op; // возвращаем обратно в caller (main)
        }
        else { // в противном случае, сообщаем пользователю что что-то пошло не так
            std::cout << "Oops! That input is invalid. Please try again.\n";
        }
    }

}