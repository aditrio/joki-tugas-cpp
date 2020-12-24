#include <iostream>

using namespace std;

int main()
{
	
	//program perkalian 2 matrix 2x2 

	int a[2][2] = { 
		{8,6},
		{5,8} 
	};
	int b[2][2] = { 
		{3,1},
		{3,6} 
	};

	int c[2][2];

	for (int i = 0; i < 2; ++i)
	{	

		cout << " [ ";
		for (int j = 0; j < 2; ++j)
		{
			cout << a[i][j] << "  ";			
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

	cout << "------------ * " << endl;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				c[i][j] = a[i][k] * b[k][j];
			}
		}
	}

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
