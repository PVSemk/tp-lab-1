
#include <iostream>
#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long int sum = 0;
	for( int i = 0;  i < hbound / 2; i++)
	{
		sum = sum + nextPrime(i);
	}
	return sum;

}



