#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
		
	// program sewa mobil 

	long harga = 256000;
	long total_harga = 0;
	int hari;
	int i = 1;

	cout << "harga sewa : Rp.256.000" << endl;
	cout << "--------------------------" << endl;
	cout << "masukan jumlah hari : ";
	cin >> hari;

	while(true) {
	    

		total_harga+=harga;

	    if (i == hari)
	    {	
	    	cout << "--------------------------" << endl;
	    	cout << "total harga sewa : Rp." << total_harga << endl;
	    	break;
	    }

	    i++;
	}

	return 0;
}
