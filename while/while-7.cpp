#include <iostream>

using namespace std;

int main()
{
	
	// program fibonacci

	 int n,f,f1=-1,f2=1;
	 int fib;
	 int i = 1;

	 cout << "fibonacci ke : ";
	 cin >> fib;

	 while(true) {
	    
	 	f=f1+f2;
        f1=f2;
        f2=f;
        cout << f << endl;
	 	if (i>=fib)
	 	{	
	 		cout << "--------------------" << endl;
	 		cout << "fibonacci ke-" << fib << " : " << f << endl;
	 		break;
	 	}

	 	i++;
	 }



	return 0;
}
