#include <iostream>

using namespace std;

int main()
{

	// print 10 bilangan ganjil

	for (int i = 1; i <= 10; ++i)
	{
		if (i % 2 == 1)
		{
			cout << "Ganjil : " << i << endl;
		}
	}
	
	return 0;
}
