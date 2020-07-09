// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые перечисления и структура с функцией для вывода перечислителей
// V 2.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <string>
using namespace std;

enum class MonsterType {
    OGRE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL
};

struct Monster {
    MonsterType type;
    string name;
    int health;
};

string getMonsterType(Monster monster) {
    switch (monster.type) {
    case MonsterType::OGRE:
        return "Ogre";
        break;
    case MonsterType::GOBLIN:
        return "Goblin";
        break;
    case MonsterType::SKELETON:
        return "Skeleton";
        break;
    case MonsterType::ORC:
        return "Orc";
        break;
    case MonsterType::TROLL:
        return "Troll";
        break;
    default:
        return "Unknown";
        break;
    }
}

void printMonster(Monster monster) {
    cout << "This " << getMonsterType(monster);
    cout << " is named " << monster.name << " and has " << monster.health << " health\n";
}


int main() {
    Monster ogre = {MonsterType::OGRE, "Ogre", 180 };
    printMonster(ogre);
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//