#include <iostream>

using namespace std;

int main()
{

	// program print data array 2 Dimensi

	int data[2][2];

	data[0][0] = 1;
	data[0][1] = 2;
	data[1][0] = 3;
	data[1][1] = 4;
	
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout << "data array index ke-"<<i<<":"<<j<<" = "<<data[i][j]<<endl;
		}
	}


	return 0;
}
