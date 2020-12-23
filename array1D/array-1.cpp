#include <iostream>

using namespace std;


int main()
{
	// program menampilkan data array

	string nama_mahasiswa[5] = {"Ucup","Jajang","Asep","Ridwan","Ahmad"};


	for (int i = 0; i < 5; ++i)
	{
		cout << "nama mahasiswa ke-" << (i+1) << " : " << nama_mahasiswa[i] << endl;
	}


	return 0;
}
