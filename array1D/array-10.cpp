#include <iostream>

using namespace std;

int main()
{
	
	// program input banyaknya belanjaan + total harga
	
	int qty;
	int total = 0;

	cout << "masukan banyak barang : " ;
	cin >> qty;
	cout << "=========================" << endl;

	int harga[qty];

	for (int i = 0; i < qty; ++i)
	{
		cout << "barang ke-" << (i+1) << " : Rp.";
		cin >> harga[i];
		total+=harga[i];
	}

	cout << endl << "daftar harga"<<endl;
	cout << "==================" << endl;

	for (int i = 0; i < qty; ++i)
	{
		cout<<(i+1)<<". "<<harga[i]<<endl;
	}
	cout << "total harga : Rp."<< total << endl;

	

	return 0;
}
