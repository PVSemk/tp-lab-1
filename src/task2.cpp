
#include <iostream>

bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i <= sqrt(value); i++)
	{
		if (value%i == 0)
			return false;	
	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	unsigned long i = 0, k = 2;
	while (i != n)
	{
		if (checkPrime(k))
			i++;
		k++;
	}
	k--;
	return k;
}

unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long n = value+1;
	while (checkPrime(n) != 1)
		n++;
	return n;
}


int main()
{
	int k;
	k = nextPrime(2);
	std::cout << k;
}