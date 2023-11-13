#include <iostream>

using namespace std;


int main()
{

	setlocale(LC_ALL, "Turkish");
	int a[10];
	int b[10];
     

	//cout << "Ýlk Diziyi Giriniz : "; cin >> dizi[10]; cout << endl;
	//cout << "Ýkinci Diziyi Giriniz : "; cin >> dizi1[10]; cout << endl;
	
	for (int i = 0; i < 10; i++)
	{
		 cin >> a[i]; 
		 cin >> b[i]; 

		
	}
	int buyuk1 = a[0];
	int yer1 = 0;
	
	for (int i = 1; i < 10; i++)
	{
		if (a[i] > buyuk1)
		{
			buyuk1 = a[i];
			yer1 = i;
		}

	}

	int kucuk1 = b[0];
	int yer2 = 0;
	
	for (int j = 1; j < 10; j++)
	{
		if (b[j] < kucuk1)
		{
			kucuk1 = b[j];
			yer2 = j;
		}

	}

	int yedek = buyuk1;
	int yedek1 = kucuk1;

	a[yer1] = yedek1;
	b[yer2] = yedek;
	for (int k = 0; k < 10; k++)
	{
		cout << " " << a[k];
		cout << " " << b[k];

	}


	return 0;

}