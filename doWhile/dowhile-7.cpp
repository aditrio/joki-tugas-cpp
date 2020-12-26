#include <iostream>

using namespace std;

int main()
{
	// program input tinggi segitiga 

	int tinggi = 0;
	char ulang;

	do
	{	
		cout << endl << "Input tinggi segitiga" << endl;
		cout << "=====================" << endl;
		cout << "Masukan Tinggi : ";
		cin >> tinggi;

		for (int i = 0; i <= tinggi; ++i)
		{
			for(int j = i; j < tinggi ; ++j) {
				
				cout << " " ;
			}
			for (int k = 0; k < i; ++k)
			{
				cout << "*";
			}
			for (int k = 1; k < i; ++k)
			{
				cout << "*";
			}

			cout<< endl;

		}

		cout << "=====================" << endl;
		cout << "ulang ? (y/n) : ";
		cin >> ulang;

	} while (ulang == 'y' || ulang == 'Y');

	cout << "=====================" << endl;
	cout << "Program selesai !!!!" << endl;

	return 0;
}
