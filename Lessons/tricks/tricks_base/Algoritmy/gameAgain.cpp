#include <iostream>
using namespace std;

int main() 
{
	char again = 'y';
    while (again == 'y') {
        cout << "**Вы отлично поиграли!**" << endl;;
        cout << "\n:Желаете продолжить? (y/n)" << endl;
        cin >> again;
    }

    cout << "\nOk, bay!" << endl;

    return 0;
}
// Второй вариант реализации данного алгоритма
// do 
//	{
//		cout << "\n**Played an exciting game**";
//		cout << "\nDo you want to play again? (y/n): ";
//		cin >> again;
//	} while (again == 'y');