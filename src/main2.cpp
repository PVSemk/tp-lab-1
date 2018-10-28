
#include <iostream> 
#include <task2.h> 

using namespace std;
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
	cout << "Enter number: " << endl;
	cin >> n;
	cout << "value=" << nPrime(n)<<endl;
	
	cout << "Enter value for finding next prime number: " << endl;
	cin >> value2;
	cout <<"Next prime="<< nextPrime(value2)<<endl;
	return 0;
}