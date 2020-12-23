#include <iostream>

using namespace std;


int main()
{
	// program print banyaknya bilangan ganjil & genap

	int qty = 0;

	cout << "masukan banyaknya bilangan : " ;
	cin >> qty;

	for (int i = 1; i <= qty; ++i)
	{
		(i % 2 == 1 ) ? cout << i << " = Ganjil" << endl : cout << i << " = Genap" << endl;
	}
	
	return 0;
}
