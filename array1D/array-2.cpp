#include <iostream>

using namespace std;

int main()
{
	
	// program mengubah data dalam array

	string nama_mahasiswa[5] = {"Ucup","Jajang","Asep","Ridwan","Ahmad"};

	cout << "Sebelum diubah : " << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << "nama mahasiswa ke-" << (i+1) << " : " << nama_mahasiswa[i] << endl;
	}

	// ubah data sesuai index array

	nama_mahasiswa[3] = "Rudi";

	cout << endl << "Setelah diubah : " << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << "nama mahasiswa ke-" << (i+1) << " : " << nama_mahasiswa[i] << endl;
	}


	return 0;
}
