#include <iostream>

using namespace std;

int main()
{
	
	// print banyak data 

	int qty = 0;

	cout << "masukan banyaknya data : ";
	cin >> qty;

	for (int i = 1; i <= qty; ++i)
	{
		cout << "data ke - " << i << endl;
	}

	return 0;
}
