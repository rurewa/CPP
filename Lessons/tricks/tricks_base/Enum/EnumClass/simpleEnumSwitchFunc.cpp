// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример связки перечисления с функцией. Интересна конструкция switch
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>

enum class Animals {
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH
};

std::string getAnimalName(Animals animal) {
    switch (animal)
    {
    case Animals::PIG:
        return "Pig";
        break;
    case Animals::CHICKEN:
        return "Chicken";
        break;
    case Animals::GOAT:
        return "Goat";
        break;
    case Animals::CAT:
        return "Cat";
        break;
    case Animals::DOG:
        return "Dot";
        break;
    case Animals::OSTRICH:
        return "Ostrich";
        break;
    default:
        return "printNumberLegs(): Unhandled enumerator";
        break;
    }
}

void printNumberLegs(Animals legs) {
    std::cout << "A " << getAnimalName(legs) << " has ";
    switch (legs)
    {
    case Animals::OSTRICH:
    case Animals::CHICKEN:
        std::cout << "2";
        break;

    case Animals::PIG:
    case Animals::GOAT:
    case Animals::CAT:
    case Animals::DOG:
        std::cout << "4";
        break;

    default:
        std::cout << "printNumberLegs(): Unhandled enumerator";
        break;
    }
    std::cout << " legs. \n";
}

int main() {
    using namespace std;

    printNumberLegs(Animals::CHICKEN);
    printNumberLegs(Animals::CAT);

    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//