#include <iostream>

using namespace std;

int main()
{
	// program konversi suhu

	float celcius;
	float reamur;
	float fahrenheit;
	float kelvin;
	char ulang;

	do
	{
		
		cout << endl << "program konversi suhu" << endl;
		cout << "========================" << endl;

		cout << "celcius : " ;
		cin >> celcius;

		cout << "------------------------" << endl;

		reamur = 4 * celcius / 5;
		fahrenheit = 9 * celcius / 5 + 32;
		kelvin = celcius + 273;


		cout << "Reamur : " << reamur << endl;
		cout << "Fahrenheit : " << fahrenheit << endl;
		cout << "Kelvin : " << kelvin << endl;

		cout << "=====================" << endl;
		cout << "ulang ? (y/n) : ";
		cin >> ulang;

	} while (ulang == 'y' || ulang == 'Y');

	cout << "=====================" << endl;
	cout << "Program selesai !!!!" << endl;

	return 0;
}
