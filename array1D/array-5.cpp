#include <iostream>

using namespace std;

int main()
{
	
	// program array 1 dimensi input data

	string nama_mahasiswa[3];

	cout << "Input 3 nama mahasiswa"<<endl;
	cout << "==========================" << endl;

	for (int i = 0; i < 3; ++i)
	{
		cout << endl << "nama mahasiswa ke-"<< (i+1) << " : " ;
		cin >> nama_mahasiswa[i];

	}
	cout << "==========================" << endl;

	cout << "Daftar mahasiswa : " << endl;

	for (int i = 0; i < 3; ++i)
	{
		cout  << "mahasiswa ke-"<< (i+1) << " : " << nama_mahasiswa[i] << endl;;
	}




	return 0;
}
