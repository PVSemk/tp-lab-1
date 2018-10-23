#include <iostream>
#include <task3.h>
#include <task2.h>
#include <cmath>

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long summ=0;
	for (unsigned int i = 2; i < sqrt(hbound); i++) 
	{
		if (checkPrime(i))
			summ = summ + i;
	}
	return summ;
}

