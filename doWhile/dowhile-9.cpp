#include <iostream>

using namespace std;

int main()
{
	// program menghitung tinggi ideal 

	float tinggi;
	float ideal;
	char jk;
	char ulang;

	do
	{
		
		cout << endl << "program menghitung berat badan ideal" << endl;
		cout << "=================================" << endl;

		cout << "jenis kelamin ? (l/p) : ";
		cin >> jk;

		cout << "tinggi badan : ";
		cin >> tinggi;

		switch(jk){

			case 'l' : 
				ideal = (tinggi - 100) - ((10/100) * (tinggi - 100));
				break;
			case 'p' : 
				ideal = (tinggi - 100) - ((15/100) * (tinggi - 100));
				break;
		}

		cout << "-------------------------------" << endl;
		cout << "Berat ideal anda : " << ideal << endl;
		cout << "=====================" << endl;
		cout << "ulang ? (y/n) : ";
		cin >> ulang;

	} while (ulang == 'y' || ulang == 'Y');

	cout << "=====================" << endl;
	cout << "Program selesai !!!!" << endl;



	return 0;
}
