#include <iostream>

using namespace std;

int main()
{
	double a[5][5];
	double b[5][5];
	double kalan;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
			cout << "\n";
			kalan = (a[i][j]*1.0) % 2;



		}
	}
}

