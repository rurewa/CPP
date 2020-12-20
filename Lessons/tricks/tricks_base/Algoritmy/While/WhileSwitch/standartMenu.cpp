// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Пример цикла с выбором
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>

int main() {
    using namespace std;
    char again = 'y';
    while (again == 'y') {
        cout << "Chose menu 1, 2 or 3" << endl;
        cout << "Menu one: " << endl;
        cout << "Menu two: " << endl;
        cout << "Menu three: " << endl;
        int userMenu = 0;
        cin >> userMenu;
        switch (userMenu)
        {
        case 1:
            cout << "You chose one" << endl;
            break;
        case 2:
            cout << "You chose two" << endl;
            break;
        case 3:
            cout << "You chose three" << endl;
            break;
        default:
            cout << "You have not chosen anything" << endl;
            break;
        }
        cout << "Do you want to continue (y/n)?: " << endl;
        cin >> again;
    }
    cout << "Goodbay!" << endl;
    return 0;
}
