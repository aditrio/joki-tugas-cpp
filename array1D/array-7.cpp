#include <iostream>

using namespace std;

int main()
{
	// program array input nilai mahasiswa + rata-rata 

	float nilai[5];
	float rata = 0;

	for (int i = 0; i < 5; ++i)
	{
		cout << "input nilai ke-"<< (i+1) << " : ";
		cin >> nilai[i];
		rata+=nilai[i];
	}

	cout << endl << "daftar nilai" << endl;
	cout << "==========================" << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << (i+1) << ". " << nilai[i] << endl;

	}

	cout << "nilai rata : " << rata / 5 << endl;


	return 0;
}
