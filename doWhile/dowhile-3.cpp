#include <iostream>


using namespace std;

int main()
{
	// program menebak genap


	char ulang;
	int i;
	
	do
	{	
		i = rand() % 100;
		cout << endl << "angka genap : " << endl;
		cout << "------------------" << endl;
		cout << i << endl;
		cout << "------------------" << endl;
		cout << "benar ? (y) | ulang ? (n) : ";
		cin >> ulang;

		
	} while (ulang == 'n' || ulang == 'n');

	if (i % 2 == 0)
	{
		cout << "Jawaban benar !!!" << endl;
	}else{
		cout << "Jawaban salah !!!" << endl;
	}

	return 0;
}
