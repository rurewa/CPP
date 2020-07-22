#include<iostream>

// Принимаем значение от пользователя
double getUserInput() {
    while (true) { // цикл продолжается до тех пор, пока пользователь не введёт корректное значение
        std::cout << "Please enter a double valie: " << std::endl;
        double value = 0;
        std::cin >> value;
        // Проверка на предыдущие извлечения
        if (std::cin.fail()) { // Если предыдущее извлечение неудачно
            std::cin.clear(); // Возвращаем cin в обычный режим
            std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
            std::cout << "Oops, that input is invalid. Please try agin.\n";
        }
        else {
            std::cin.ignore(32767, '\n'); // удаляем лишние значения
            return value;
        }
    }
}