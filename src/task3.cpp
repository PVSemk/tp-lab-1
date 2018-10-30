
#include <iostream>
#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long int sum = 0, i = 1;
	while (nextPrime(i) < hbound)
	{
		sum = sum + nextPrime(i);
		i = nextPrime(i);
	}
	return sum;

}



