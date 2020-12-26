#include <iostream>

using namespace std;

int main()
{
	
	// program input data total belanja

	int harga[5];
	int total = 0;

	char ulang;

	do
	{
		
		cout << endl << "masukan harga 5 barang" << endl;
		cout << "=========================" << endl;

		for (int i = 0; i < 5; ++i)
		{
			cout << "barang ke-" << (i+1) << " : Rp.";
			cin >> harga[i];
			total+=harga[i];
		}

		cout << endl << "daftar harga"<<endl;
		cout << "-------------------------" << endl;

		for (int i = 0; i < 5; ++i)
		{
			cout<<(i+1)<<". "<<harga[i]<<endl;
		}
		cout << "total harga : Rp."<< total << endl;

		cout << "=========================" << endl;

		cout << "ulang ? (y/n) : ";
		cin >> ulang;

	} while (ulang == 'y' || ulang == 'Y');


	cout << "=========================" << endl;
	cout << "Program selesai !!!!" << endl;
	

	return 0;
}
