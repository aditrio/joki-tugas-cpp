#include <iostream>

using namespace std;

int main()
{

	// program kelipatan 3 ke-90
	
	int kelipatan_tiga = 3;
	int i = 0;
	while(true) {
	    
	    cout << "angka : " << kelipatan_tiga << endl;
	    kelipatan_tiga += 3;
	    
	    if (i==90)
	    {
	    	cout << "Angka kelipatan 3 ke-90 : " << kelipatan_tiga << endl; 
	    	break;
	    }

	    i++;

	}

	return 0;
}
