#include <iostream>

using namespace std;

int main()
{
	
	// program rental motor

	string motor[5] = {

		"Revo",
		"Supra",
		"Beat",
		"N-Max",
		"CB-R"
	};

	int harga[5] = {

		15000,
		21500,
		23500,
		25500,
		31500,
	
	};

	int pilih_motor;
	int total_harga;
	int hari;


	int i=0;
	while(true) {

		if (i>=5)
		{
			break;
		}    
		cout << (i+1) << ". " << motor[i] << " : Rp." << harga[i] << endl;
		i++;
	}

	cout << "---------------------------" << endl;

	cout << "pilih motor : ";
	cin >> pilih_motor;
	cout << "jumlah hari : ";
	cin >> hari;
	cout << "---------------------------" << endl;

	int j = 1;
	while(true) {

	    if (j == hari)
	    {	
	    	cout << "motor : " << motor[(pilih_motor-1)] << endl;
	    	cout << "total harga : Rp." << total_harga << endl;
	    	break;
	    }

	    total_harga += harga[(pilih_motor-1)];
	    j++;
	}

	return 0;
}
