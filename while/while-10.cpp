#include <iostream>

using namespace std; 

int main()
{
	
	// program nilai rata - rata

	float nilai;
	float banyak_nilai;
	float temp_nilai = 0;


	cout << "masukan banyak nilai : ";
	cin >> banyak_nilai;

	int i = 1;
	while(true) {
	    
		if (i > banyak_nilai)
		{
			cout << "rata2 : " << temp_nilai / banyak_nilai << endl;
			break;
		}

		cout << "nilai ke-" << i << " : ";
		cin >> nilai;
		temp_nilai += nilai;

		i++;

	}

	return 0;
}
