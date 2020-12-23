#include <iostream>

using namespace std;

int main()
{
	
	//program srgitiga bintang dengan inputan tinggi segitiga

	int tinggi = 0;


	cout << "Masukan Tinggi : ";
	cin >> tinggi;

	for (int i = 0; i <= tinggi; ++i)
	{
		for(int j = i; j < tinggi ; ++j) {
			
			cout << " " ;
		}
		for (int k = 0; k < i; ++k)
		{
			cout << "*";
		}
		for (int k = 1; k < i; ++k)
		{
			cout << "*";
		}


		cout<< endl;
	}



	return 0;
}
