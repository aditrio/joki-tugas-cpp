#include <iostream>

using namespace std;

int main()
{
	
	// program menghitung nilai rata rata 3 mahasiswa

	float nilai[3][3];
	float rata[3] = {0,0,0};

	for (int i = 0; i < 3; ++i)
	{	
		cout << "mahasiswa ke-" << (i+1) << endl;
		cout << "------------------" << endl;

		for (int j = 0; j < 3; ++j)
		{
			cout << "nilai ke-"<<(j+1)<< " : ";
			cin >> nilai[i][j];
			rata[i] += nilai[i][j];
		}
		cout << endl;
	}

	cout <<endl << "Daftar Nilai"<<endl;
	cout << "=====================" << endl;

	for (int i = 0; i < 3; ++i)
	{	
		cout << "mahasiswa ke-" << (i+1) << endl;
		cout << "------------------" << endl;

		for (int j = 0; j < 3; ++j)
		{
			cout << "nilai "<< " : " << nilai[i][j] << endl;		
		}
		cout << "rata : " << rata[i]/3 << endl;
		cout << "------------------" << endl;


	}

	return 0;
}
