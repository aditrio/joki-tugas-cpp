#include <iostream>

using namespace std;

int main()
{
	
	// program penjumlahan matrix
	int a[2][2];
	int b[2][2];
	int c[2][2];
	char ulang;
	do
	{
		cout << endl << "Penjumlahan matrix 2x2" << endl;
		cout << "==========================" <<endl;

		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				cout << "A [" << i << "][" << j <<"] : ";
				cin >> a[i][j];
			}
		}

		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				cout << "B [" << i << "][" << j <<"] : ";
				cin >> b[i][j];
			}
		}

		cout << endl << "==========================" << endl;

		for (int i = 0; i < 2; ++i)
		{	

			cout << " [ ";
			for (int j = 0; j < 2; ++j)
			{
				cout << a[i][j] << "  ";
				c[i][j] = a[i][j] + b[i][j];
			}
			cout << "]";
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i < 2; ++i)
		{	

			cout << " [ ";
			for (int j = 0; j < 2; ++j)
			{
				cout << b[i][j] << "  ";
			}
			cout << "]";
			cout << endl;
		}
		
		cout << "------------ + " << endl;

		for (int i = 0; i < 2; ++i)
		{	

			cout << " [ ";
			for (int j = 0; j < 2; ++j)
			{
				cout << c[i][j] << "  ";
			}
			cout << "]";
			cout << endl;
		}

		cout << endl << "==========================" <<endl;
				
		cout << "ulang (y/n) : " ;
		cin >> ulang;


	} while (ulang == 'y' || ulang == 'Y');

	cout << "==========================" << endl;
	cout << "Program selesai !!!!" << endl;

	return 0;
}
