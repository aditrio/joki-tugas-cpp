#include <iostream>

using namespace std;

int main()
{
	//perkalian matriks 2x2 dengan bilangan bulat

	int a[2][2] = { 
		{8,6},
		{5,8} 
	};

	int b[2][2];

	int bil;

	cout << "input bil bulat : ";
	cin >> bil;

	cout << "======================" << endl;

	for (int i = 0; i < 2; ++i)
	{	

		cout << bil << " * [ ";
		for (int j = 0; j < 2; ++j)
		{
			cout << a[i][j] << "  ";
			b[i][j] = bil * a[i][j];
		}

		cout << "]";
		cout << endl;
	}

	cout << "------------ * " << endl;

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

	return 0;
}
