
#include <iostream> 
#include <task2.h> 
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
	
	cout << nPrime(6) << endl;
	cout << nPrime(500) << endl;

	cout << nextPrime(1031) << endl;
	cout << nextPrime(3559) << endl;
	cout << nextPrime(2) << endl;
	getch();
	return 0;
}