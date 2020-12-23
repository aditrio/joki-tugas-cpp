#include <iostream>

using namespace std;

int main()
{
	
	// program menampilkan banyaknya data dalam array

	string nama_buah[8] = {"Apel","Mangga","Jeruk","Nanas","Anggur","Pisang","Alpukat","Ceri"};

	int qty;

	cout << "banyak data yg diambil : ";
	cin >> qty;

	if (qty > 8)
	{
		cout << "data hanya 8 !!" << endl;
	}else{

		for (int i = 0; i < qty; ++i)
		{
			cout << "data ke-" << (i+1) << " : " << nama_buah[i] << endl;
		}	
	}

	

	return 0;
}
