#include <iostream>

using namespace std;

int main()
{
	// program perkalian bil bulat dengan matrix 3x3

	int a[3][3] = { 
		{2,3,2},
		{4,2,6},
		{7,8,7}
	};

	int b[3][3];

	int bil;

	cout << "input bil bulat : ";
	cin >> bil;

	cout << "======================" << endl;

	for (int i = 0; i < 3; ++i)
	{	

		cout << bil << " * [ ";
		for (int j = 0; j < 3; ++j)
		{
			cout << a[i][j] << "  ";
			b[i][j] = bil * a[i][j];
		}

		cout << "]";
		cout << endl;
	}

	cout << "-------------------- * " << endl;

	for (int i = 0; i < 3; ++i)
	{	

		cout << " [ ";
		for (int j = 0; j < 3; ++j)
		{
			cout << b[i][j] << "  ";
		}
		cout << "]";
		cout << endl;
	}

	return 0;

}
