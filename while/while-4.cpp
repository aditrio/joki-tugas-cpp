#include <iostream>

using namespace std;

int main()
{
	
	// program mencari kelipatan bilangan

	int bil;
	int kelipatan;
	int total;
	int i = 1;

	cout << "masukan bilangan : ";
	cin >> bil;
	cout << "masukan kelipatan ke : ";
	cin >> kelipatan;

	total = bil;

	cout << "============================" << endl;

	while(true) {
	    
		cout << i << ". " << total << endl;
		

		if (i == kelipatan)
		{	
			cout << "-------------------------" << endl;
			cout << "kelipatan ke-" << kelipatan << " : " << total << endl;
			break;
		}

		total += bil;
		i++;

	}

	return 0;
}
