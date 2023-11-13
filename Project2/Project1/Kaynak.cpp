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
		std::cout << " a sayısı : "; std::cin >> a; std::cout << "\n";
		std::cout << " b sayısı : "; std::cin >> b; std::cout << "\n";
		std::cout << " c sayısı : "; std::cin >> c; std::cout << "\n";
		std::cout << " f sayısı : "; std::cin >> d; std::cout << "\n";
		std::cout << " e sayısı : "; std::cin >> e; std::cout << "\n";
		std::cout << " f sayısı : "; std::cin >> f; std::cout << "\n";
		toplam = a + b + c + d + e + f;
		std::cout << "Hepsinin Toplamı : " << toplam << std::endl;
		toplam = toplam * p;
		std::cout << "P sayısı ile Çarpımı : " << toplam << std::endl;
		if (toplam % 7 == 0)
		{
			std::cout << "7'ye Tam Bölünüyor ";
			devam:

			std::cout << "Devam Etmek İstiyormusunuz E/H : "; std::cin >> t; std::cout << "\n";
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
			std::cout << "Yediye Tam Bölünemedi " << std::endl;
			goto devam;
		}


	




}