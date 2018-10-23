#include "task2.h"



bool checkPrime(unsigned int value) {
	unsigned int i,a;
	if (value == 2) return true;
	if (value == 3) return true;
	if (value % 2 == 0) return false;
	for (i = 3; i <= sqrt(value); i=i+2) {
		if (value % i== 0) break;
	}
	a = ((value % i != 0) && (value != i));
	return (a);
}

unsigned long long nPrime(unsigned n)
{
	int a = 0;
	int i = 1;
	while (a!= n)
	{
		i++;
		if (checkPrime(i))
		{
			a++;
		}

	}
	return i;
}

unsigned long long nextPrime(unsigned long long value)
{
	long long a = value + 1;
	while (1)
	{
		if (checkPrime(a))
		{
			return a;
		}
		a++;
	}
}