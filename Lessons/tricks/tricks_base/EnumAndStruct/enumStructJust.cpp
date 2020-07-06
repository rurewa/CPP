// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые перечисления и структура для вывода перечислителей
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum MonsterType {
  MONSTER_OGRE,
  MONSTER_GOBLIN,
  MONSTER_SKELETON,
  MONSTER_ORC,
  MONSTER_TROLL
};

void printMonster(MonsterType typeName) {
  if (typeName == MONSTER_OGRE) {
    cout << "Ogre" << endl;
  }
  else if (typeName == MONSTER_GOBLIN) {
    cout << "Goblin" << endl;
  }
  else if (typeName == MONSTER_SKELETON) {
    cout << "Skeleton" << endl;
  }
  else if (typeName == MONSTER_ORC) {
    cout << "Orc" << endl;
  }
  else if (typeName == MONSTER_TROLL) {
    cout << "Troll" << endl;
  }
  else {
    cout << "Unknown!";
  }
}

int main() {
  cout << "Enter num monster type: ";
  int numMonsterType;
  cin >> numMonsterType;
  cin.ignore(32767, '\n'); // Очистка ввода от знака переносат строки
  // Явное преобразование в int через static_cast
  printMonster(static_cast<MonsterType>(numMonsterType));

  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
