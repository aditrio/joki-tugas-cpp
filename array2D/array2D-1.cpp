#include <iostream>

using namespace std;

int main()
{
	
	// penjumlahan matrix 2x2

	int a[2][2] = { 
		{4,5},
		{7,8} 
	};
	int b[2][2] = { 
		{2,3},
		{4,2} 
	};

	int c[2][2];

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

	return 0;
}
