
#include <iostream> 
#include <task2.h> 
<<<<<<< HEAD

using namespace std;
=======
>>>>>>> d1230de8148b354d8de3829749841363d285e681
int main()
{
	unsigned int value1;
	unsigned n;
	unsigned long long value2;
	cout << "Enter value for checking prime or not: " << endl;
	cin >> value1;
	if (checkPrime(value1) == true){
		cout << "This value is prime"<<endl;
	}
	else{
		cout << "This value is not prime"<<endl;
	}
<<<<<<< HEAD
	cout << "Enter number: " << endl;
	cin >> n;
	cout << "value=" << nPrime(n)<<endl;
	
	cout << "Enter value for finding next prime number: " << endl;
	cin >> value2;
	cout <<"Next prime="<< nextPrime(value2)<<endl;
=======
	
	cout << nPrime(6) << endl;
	cout << nPrime(500) << endl;

	cout << nextPrime(1031) << endl;
	cout << nextPrime(3559) << endl;
	cout << nextPrime(2) << endl;
	getch();
>>>>>>> d1230de8148b354d8de3829749841363d285e681
	return 0;
}