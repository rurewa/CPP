// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые перечисления и структура с функцией для вывода перечислителей
// и выбором от пользователя
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>

enum class MonsterType {
    OGRE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL
};

struct Monster {
    MonsterType type;
    std::string name;
    int halth;
};

std::string getMonsterType(Monster monster);

void printMonster(Monster monster);

void printUserChose();

int userNum();

int main() {
    using namespace std;
    Monster ogr = { MonsterType::OGRE, "Shrek", 200 };
    Monster gobl = { MonsterType::GOBLIN, "Feone", 500 };
    Monster skel = { MonsterType::SKELETON, "Cherep", 100 };
    Monster orc = { MonsterType::ORC, "Gloctar", 160 };
    Monster troll = { MonsterType::TROLL, "Lis", 70 };
    printUserChose();
    int choseNum = userNum();
    switch (choseNum)
    {
    case 1:
      printMonster(ogr);
      break;
    case 2:
      printMonster(gobl);
      break;
    case 3:
      printMonster(skel);
      break;
    case 4:
      printMonster(orc);
      break;
    case 5:
      printMonster(troll);
      break;
    default:
      cout << "Unknown" << endl;
      break;
    }
  return 0;
}
std::string getMonsterType(Monster monster) {
    switch (monster.type)
    {
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
    std::cout << "This " << getMonsterType(monster);
    std::cout << " is named " << monster.name << " and has " << monster.halth << " halth\n";
}

void printUserChose() {
    using namespace std;
    cout << "1. OGRE" << endl;
    cout << "2. GOBLIN" << endl;
    cout << "3. SKELETON" << endl;
    cout << "4. ORC" << endl;
    cout << "5. TROLL" << endl;
    cout << "Name monsters: " << endl;
}

int userNum() {
    int numMonster;
    std::cin >> numMonster;
    std::cin.ignore(32767, '\n');
    return numMonster;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//