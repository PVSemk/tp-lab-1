#include <task2.h>

int main()
{
	int checkit = 1031;
	cout <<checkit<<"  "<< checkPrime(checkit) << endl;
	cout <<checkit<<"th  simple number is "<< nPrime(checkit) << endl;
	cout <<"next simple number after "<<checkit<<" is "<<nextPrime(checkit) << endl;
	return 0;
}
