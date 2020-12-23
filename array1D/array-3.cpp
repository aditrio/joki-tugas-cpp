#include <iostream>

using namespace std;

int main()
{
	
	// program memilih data dalam array

	string nama_buah[5] = {"Apel","Mangga","Jeruk","Nanas","Anggur"};
	string buah;
	int pilihan;



	cout << "Nama buah" << endl;
	cout << "=========================" << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << (i+1) << ". " << nama_buah[i] << endl;
	}

	cout << endl << "pilih buah (1/5) : " ;
	cin >> pilihan;

	switch(pilihan) {

		case 1 : 
			buah = nama_buah[0];
			break;
		case 2 : 
			buah = nama_buah[1];
			break;
		case 3 : 
			buah = nama_buah[2];
			break;
		case 4 : 
			buah = nama_buah[3];
			break;
		case 5 : 
			buah = nama_buah[4];
			break;
		default : 
			buah = "Buah tidak tersedia";
			break;

	}

	cout << endl << "buah : " << buah << endl;



	return 0;
}
