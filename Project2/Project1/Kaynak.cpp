#include <iostream>
const int p = 314;
int a, b, c;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int d, e, f;
	int toplam;
	char t;
		gris:
		std::cout << " a say�s� : "; std::cin >> a; std::cout << "\n";
		std::cout << " b say�s� : "; std::cin >> b; std::cout << "\n";
		std::cout << " c say�s� : "; std::cin >> c; std::cout << "\n";
		std::cout << " f say�s� : "; std::cin >> d; std::cout << "\n";
		std::cout << " e say�s� : "; std::cin >> e; std::cout << "\n";
		std::cout << " f say�s� : "; std::cin >> f; std::cout << "\n";
		toplam = a + b + c + d + e + f;
		std::cout << "Hepsinin Toplam� : " << toplam << std::endl;
		toplam = toplam * p;
		std::cout << "P say�s� ile �arp�m� : " << toplam << std::endl;
		if (toplam % 7 == 0)
		{
			std::cout << "7'ye Tam B�l�n�yor ";
			devam:

			std::cout << "Devam Etmek �stiyormusunuz E/H : "; std::cin >> t; std::cout << "\n";
			if (t == 'e' || t == 'E')
			{
				system("cls");
				goto gris;
			}
			else 
			{

			}
		}
		else
		{
			std::cout << "Yediye Tam B�l�nemedi " << std::endl;
			goto devam;
		}


	




}