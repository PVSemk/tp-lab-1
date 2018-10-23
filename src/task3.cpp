#include <iostream>
#include <task3.h>
unsigned long long sumPrime(unsigned int hbound)
{
	long long sum = 0;
	for (long long j = 2; j < hbound - 1; j++)
	{
		if (checkPrime(j) == 1)
		{
			sum = sum + j;
		}
	}
	return sum;

}