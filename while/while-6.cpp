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

	while(true) {
	    

		cout << "masukan bil a : ";
		cin >> a;
		cout << "masukan bil b : ";
		cin >> b;
		result = pow(a,2) + pow(b,2);

		cout << "--------------------" << endl;
		cout << "Sisi miring : " << sqrt(result) << endl;
		cout << "--------------------" << endl;

		cout << "Ulang (Y/N) : ";
		cin >> ulang;

		if (ulang == 'n' || ulang == 'N')
		{
			cout << "Program selesai" << endl;
			break;
		}
	}
	
	return 0;
}
