#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	al:
	int kod;
	cout << "1,2,3 �nden birini giriniz." << endl;
	cin >> kod;
	cout << endl;

	switch (kod)
	{
	case 1:
		cout << "Marmara B�lgesi" << endl;
		break;
	case 2:
		cout << "Ege B�lgesi " << endl;

		break;
	case 3:
		cout << "Akdeniz B�lgesi" << endl;
		break;
	case 4:
		cout << " Karadeniz B�lgesi" << endl;
		break;
	case 5:
		cout << "Do�u Anadolu B�lgesi " << endl;
		break;
	case 6:
			cout << "G�ney Do�u Anadolu B�lgesi " << endl;
			break;
	case 7:
		cout << "�� Anadolu B�lgesi" << endl;
		break;
	default:
		cout << "Ge�ersiz Kod" << endl;
		goto al;
		break;
	}

}