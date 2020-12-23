#include <iostream>

using namespace std;

int main()
{
	
	// program array input banyak data

	int qty;
	
	cout << "banyak data : ";
	cin >> qty;

	string list[qty];

	for (int i = 0; i < qty; ++i)
	{	
		
		cout<<"data ke-" << (i+1) << " : " ;
		cin >> list[i];
	}

	cout << endl << "list data"<<endl;
	cout << "==========================" << endl;

	for (int i = 0; i < qty; ++i)
	{
		cout << (i+1) << ". " << list[i] << endl;
	}


	return 0;
}
