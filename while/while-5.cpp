#include <iostream>

using namespace std;

int main()
{
	
	//program penjumlahan sederhana

	int a;
	int b;
	int result;
	char ulang;

	while(true) {
	    

		cout << "masukan bil a : ";
		cin >> a;
		cout << "masukan bil b : ";
		cin >> b;
		result = a + b;
		cout << "--------------------" << endl;
		cout << "Hasil : " << result << endl;
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
