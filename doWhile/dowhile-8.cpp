#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// program segitiga trigonometri mencari sisi miring

	float a;
	float b;
	float result;
	char ulang;


	do
	{
		cout << endl << "program segitiga trigonometri mencari sisi miring" << endl;
		cout << "================================================" << endl;
		cout << "masukan bil a : ";
		cin >> a;
		cout << "masukan bil b : ";
		cin >> b;
		result = pow(a,2) + pow(b,2);

		cout << "--------------------" << endl;
		cout << "Sisi miring : " << sqrt(result) << endl;
		cout << "--------------------" << endl;

		cout << "=====================" << endl;
		cout << "ulang ? (y/n) : ";
		cin >> ulang;

	} while (ulang == 'y' || ulang == 'Y');

	cout << "=====================" << endl;
	cout << "Program selesai !!!!" << endl;
	

	return 0;
}
