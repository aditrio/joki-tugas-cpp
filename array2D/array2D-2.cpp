#include <iostream>

using namespace std;

int main()
{
	
	// pengurangan matrix 2x2

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
			c[i][j] = a[i][j] - b[i][j];
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
	
	cout << "------------ - " << endl;

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
