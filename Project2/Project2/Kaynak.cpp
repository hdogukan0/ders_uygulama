#include <iostream>

using namespace std;

int main()
{
	int a[5][5];
	int b[5][5];
	int kalan;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
			cout << "\n";
			kalan = a[i][j] % 2;
			if (kalan == 0)
			{
				b[i][j] = a[i][j];
			}
			else
			{
				b[i][j] = -1;
			}
			cout << b[i][j] << endl;

		}
	}

	return 0;
}

