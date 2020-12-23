#include <iostream>


using namespace std;


int main()
{
	
	// print 10 bilangan genap 

	for (int i = 1; i <= 10; ++i)
	{
		if (i % 2 == 0)
		{
			cout << "genap : " << i << endl;
		}
	}

	return 0;
}
