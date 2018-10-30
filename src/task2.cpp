
#include <iostream>
#include "task2.h"

bool checkPrime(unsigned int value)
{
	if ( value <= 3)
		return true;
	for (unsigned int i = 2; i < sqrt(value) + 1; i++)
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
