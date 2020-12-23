#include <iostream>

using namespace std;

int main()
{
	
	// program bintang segitiga 3

	for (int i = 0; i < 7; ++i)
	{
		for(int j = 6; j > i ; --j) {
			
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

	// output : 

	//    *
	//   ***
	//  *****
	// *******

	return 0;
}
