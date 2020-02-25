#include <iostream>
using namespace std;

int main() 
{
    char again = 'y';
	
    while (again == 'y') {
      cout << "Стандартное меню\n\n";
	  cout << "1 - Пункт\n";
	  cout << "2 - Пункт\n";
	  cout << "3 - Пункт\n\n";  
      int choice; // Выбор пункта меню
	  cout << "Выбрайте:  ";
      cin >> choice;

	  switch (choice)
	  {
		case 1:	
			cout << "Вы выбрали 1-й пункт.\n";
			break;
		case 2:	
			cout << "Вы выбрали 2-й пункт.\n";
			break;
		case 3:	
			cout << "Вы выбрали 3-й пункт.\n";
			break;
		default:
			cout << "Вы выбрали неправильный пункт.\n";
	  }
      cout << "Хотите продолжить? (y/n)" << endl;
      cin >> again;
    }	

    cout << "До свидания!" << endl;

    return 0;
}