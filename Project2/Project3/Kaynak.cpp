#include <iostream>
#include <string>

using namespace std;


class ogrenci
{

public:
	int numara;
	string ad;
	string soyad;
	int yas;
	string b�l�m;
	ogrenci(int n, int y, string a, string sa, string b);
	~ogrenci();
	void goruntule();
	

};
ogrenci::ogrenci(int n, int y, string a, string sa, string b)
{
	numara = n;
	yas = y;
	ad = a;
	soyad = sa;
	b�l�m = b;

}
ogrenci::~ogrenci()
{

}
void ogrenci::goruntule()
{
	cout << "Numara :"<< numara<< " /ad : " << ad << " /soyad : "<< soyad << " /yas :" << yas << " /bolum : " << b�l�m;
}


int main()
{
	int a, b;
	string x, y, z;
	cout << "ilk numara sonra yas sonra ad sonra soyad en son bolum: \n";
	cin >> a >> b >> x >> y >> z;
	ogrenci og(a, b, x, y, z);
	og.goruntule();
	
	return 0;
}