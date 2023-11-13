#include <iostream>
#include <cmath>
using namespace std;





int main()
{
	setlocale(LC_ALL, "Turkish");

	double faktoriyel, sonuc, us;

	for (int i = 1; i <= 10; i++)
	{
		faktoriyel = 1;
		for (int j = 1; j <= i; j++)
		{
			faktoriyel = faktoriyel * j;
		}
		us = pow(2, i);
		sonuc = us / faktoriyel;
		cout << i << " " << "Sonuc : "<< sonuc << endl;
	}
	return 0;
}