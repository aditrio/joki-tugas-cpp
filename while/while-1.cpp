#include <iostream>

using namespace std;

int main()
{
	
	// program pengulangan sampai menemukan angka yang dicari

	int cari; 
	int i = 0;
	cout << "masukan angka yg dicari : ";
	cin >> cari;

	while(true)
	{	
		cout << "angka : " << i <<endl;

		if (i == cari)
		{	
			cout << "angka ditemukan !!" <<endl;
			break;
		}

		i++;
	}

	return 0;
}
