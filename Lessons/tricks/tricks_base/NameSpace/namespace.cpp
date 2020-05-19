// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример применения пространства имён
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include "boo.h"
#include "doo.h"
using namespace std;

int main()
{
    cout << Boo::doOperation(5, 4) << endl;
    cout << Doo::doOperation(5, 4) << endl;
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//