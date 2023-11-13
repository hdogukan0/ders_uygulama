#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	al:
	int kod;
	cout << "1,2,3 ünden birini giriniz." << endl;
	cin >> kod;
	cout << endl;

	switch (kod)
	{
	case 1:
		cout << "Marmara Bölgesi" << endl;
		break;
	case 2:
		cout << "Ege Bölgesi " << endl;

		break;
	case 3:
		cout << "Akdeniz Bölgesi" << endl;
		break;
	case 4:
		cout << " Karadeniz Bölgesi" << endl;
		break;
	case 5:
		cout << "Doðu Anadolu Bölgesi " << endl;
		break;
	case 6:
			cout << "Güney Doðu Anadolu Bölgesi " << endl;
			break;
	case 7:
		cout << "Ýç Anadolu Bölgesi" << endl;
		break;
	default:
		cout << "Geçersiz Kod" << endl;
		goto al;
		break;
	}

}