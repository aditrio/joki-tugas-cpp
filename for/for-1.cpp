#include <iostream>

using namespace std;

int main()
{
	
	// program bintang segitiga 1

	for (int i = 0; i < 5; ++i)
	{
		for(int j = 5; j > i ; --j) {
			
			cout << "*" ;
		}

		cout<< endl;
	}

	// output : 

	// *****
	// ****
	// ***
	// **
	// *


	return 0;
}
