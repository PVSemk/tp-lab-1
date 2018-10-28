
#include <iostream> 
#include <task3.h> 

using namespace std;
int main()
{	
	unsigned int bound;
	unsigned long long sum;
	cout << "Enter bound: " << endl;
	cin >> bound;
	sum = sumPrime(bound);
	cout << "sum=" << sum << endl;
	return 0;
}
