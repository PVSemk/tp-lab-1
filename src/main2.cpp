#include "task2.h"


int main() {

	unsigned int value;
	
	cin >> value;
	cout << " " << checkPrime(value) << endl;

	unsigned n;
	
	cin >> n;
	cout << " " << nPrime(n) << endl;

	cin >> value;
	cout << " " << nextPrime(value) << endl;
	
	return 0;

}