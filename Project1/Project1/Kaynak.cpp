#include <iostream>
#include <cmath>

using namespace std;

double  topla(double x, double y)
{
	double c1 = x /y;
	return c1;

}
double kuvvet(double z, double f)
{
	double c2 = z * f;
	return c2;
}
double e, f;

int main()
{
	setlocale(LC_ALL, "Turkish");
	cout << "�lk Say�y� Giriniz : ";
	cin >> e; cout << endl;
	cout << "�kinci Say�y� Giriniz";
	cin >> f; cout << endl;

	double sonuc1, sonuc2;
	sonuc1 = topla(e,f);
	sonuc2 = kuvvet(e, f);
	cout << "Sonuc1 : " << sonuc1 << " " << "Sonu�2 : " << sonuc2 << endl;

	return 0;
}
