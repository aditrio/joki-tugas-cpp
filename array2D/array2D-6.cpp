#include <iostream>

using namespace std;

int main()
{
	
	// pengurangan matrix 3x3
	int a[3][3] = { 
		{4,5,3},
		{7,8,6},
		{2,3,9}
	};
	int b[3][3] = { 
		{2,3,2},
		{4,2,6},
		{7,8,7}
	};

	int c[3][3];

	for (int i = 0; i < 3; ++i)
	{	

		cout << " [ ";
		for (int j = 0; j < 3; ++j)
		{
			cout << a[i][j] << "  ";
			c[i][j] = a[i][j] - b[i][j];
		}
		cout << "]";
		cout << endl;
	}

	cout << endl;

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
	
	cout << "----------------- - " << endl;

	for (int i = 0; i < 3; ++i)
	{	

		cout << " [ ";
		for (int j = 0; j < 3; ++j)
		{
			cout << c[i][j] << "  ";
		}
		cout << "]";
		cout << endl;
	}

	return 0;
}
