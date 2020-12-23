#include <iostream>

using namespace std;


int main()
{
	
	// program print data array 1 dimensi

	int data[5] = { 10, 20, 30, 40, 50};

	int banyak_data = sizeof(data)/sizeof(data[0]);

	for (int i = 0; i < banyak_data; ++i)
	 {
	 	cout << "data array index ke-" << i << " : " << data[i] << endl;
	 } 


	return 0;
}
