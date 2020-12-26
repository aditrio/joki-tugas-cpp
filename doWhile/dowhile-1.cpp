#include <iostream>

using namespace std;

int main()
{
	
	// program kalkulator sederhana 

	char ulang;
	float a;
	float b;
	float result;

	int operasi;

	do{
		
		cout << "kalkulator sederhana" << endl;
		cout << "========================" << endl;
		cout << "1. penjumlahan" << endl;
		cout << "2. pengurangan" << endl;
		cout << "3. pembagian" << endl;
		cout << "4. perkalian" << endl;
		cout << "------------------------" << endl;
		
		cout << "bil a : ";
		cin >> a;
		cout << "bil b : ";
		cin >> b;
		
		cout << "pilih operasi : ";
		cin >> operasi;

		switch(operasi){

			case 1 : 
				result = a + b;
				break;

			case 2 : 
				result = a - b;
				break;

			case 3 : 
				result = a / b;
				break;

			case 4 : 
				result = a * b;
				break;

			default : 
				cout << "Input salah !!" << endl;
				break;

		}

		
		cout << "------------------------" << endl;
		cout << "hasil : " << result << endl;
		cout << "------------------------" << endl;

		cout << "ulang ? (y/n) : ";
		cin >> ulang;

	} while (ulang == 'Y' || ulang == 'y');

	return 0;
}
