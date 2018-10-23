#include "task3.h"


unsigned long long sumPrime(unsigned int hbound)
{
	long long a = 0;
	for (int i = 2; i < hbound; i++)
	{
		if (checkPrime(i))
		{
			a=a+ i;
		}
	}
	return a;
}