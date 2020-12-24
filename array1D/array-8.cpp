#include <iostream>

using namespace std;

int main()
{
	
	// input banyak nilai mahasiswa + rata rata

	int qty;

	cout << "banyak nilai : ";
	cin >> qty;
	cout << "====================" << endl;

	float nilai[qty];
	float rata = 0;

	for (int i = 0; i < qty; ++i)
	{
		cout<<"nilai ke-"<<(i+1)<<" : ";
		cin >> nilai[i];
		rata+=nilai[i];
	}

	cout << endl << "daftar nilai" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < qty; ++i)
	{
		cout<<(i+1)<<". "<<nilai[i]<<endl;
	}
	cout << "Rata-rata : " << rata/qty <<endl;


	return 0;
}
