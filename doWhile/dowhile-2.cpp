#include <iostream>

using namespace std;

int main()
{
	
	// program mencari jawaban yang tepat
	string hewan[7] = {

		"dog",
		"ant",
		"bird",
		"turtle",
		"owl",
		"cat",
		"goat"
	};
	
	string jawaban;
	char ulang;
	int i = 0;
	
	

	do
	{
		cout << endl << "bahasa inggris kucing adalah : " << endl;
		cout << "------------------" << endl;
		cout << hewan[i] << endl;
		cout << "------------------" << endl;
		cout << "benar ? (y/n) : ";
		cin >> ulang;
		i++;

		if (i >= 7)
		{
			i = 0;
		}
	} while (ulang == 'n' || ulang == 'n');

	if (i == 6)
	{
		cout << "Jawaban benar !!!" << endl;
	}else{
		cout << "Jawaban salah !!!" << endl;
	}

	return 0;
}
