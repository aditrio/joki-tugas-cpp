#include <iostream>

using namespace std;

int main()
{
	// program menebak kata

	string jawaban = "kucing";
	string jawab;

	while(true) {

	    cout << "Cat (Bahasa) ? : ";
	    cin >> jawab;
	    cout << "=====================" << endl;
	    if (jawab == jawaban)
	    {		    
	    	cout << "Jawaban benar !!!" << endl;
	    	break;
	    }

	    cout << "Jawaban Salah !!" << endl << endl;
	}

	return 0;
}
