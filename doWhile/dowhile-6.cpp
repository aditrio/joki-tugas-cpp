#include <iostream>

using namespace std;

int main()
{
	
	// input banyak nilai mahasiswa + rata rata

	int qty;
	char ulang;

	do
	{
		cout << endl << "Program input nilai dan rata rata" << endl;
		cout << "=====================" << endl;
		cout << "banyak nilai : ";
		cin >> qty;
		cout << "---------------------" << endl;

		float nilai[qty];
		float rata = 0;

		for (int i = 0; i < qty; ++i)
		{
			cout<<"nilai ke-"<<(i+1)<<" : ";
			cin >> nilai[i];
			rata+=nilai[i];
		}

		cout << endl << "daftar nilai" << endl;
		cout << "--------------------" << endl;

		for (int i = 0; i < qty; ++i)
		{
			cout<<(i+1)<<". "<<nilai[i]<<endl;
		}
		cout << "Rata-rata : " << rata/qty <<endl;
		cout << "=====================" << endl;

		cout << "ulang ? (y/n) : ";
		cin >> ulang;

	} while (ulang == 'y' || ulang == 'Y');
	
	cout << "=====================" << endl;
	cout << "Program selesai !!!!" << endl;

	return 0;
}
