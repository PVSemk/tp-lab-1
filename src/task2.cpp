#include <task2.h>


bool checkPrime(unsigned int value)
{
	for (int i = 2; i < value; i++)
		if (value%i == 0)
			return false;	
	return true;
}

unsigned long long nPrime(unsigned n)
{
	int k = 0;
	int i = 1;
	while (k != n)
	{
		i++;
		if (checkPrime(i) == true)
			k++;
	}
	return i;
}

unsigned long long nextPrime(unsigned long long value) 

{
	int i = value + 1;

	while (checkPrime(i) == false)
		i++;
	return i;
}
