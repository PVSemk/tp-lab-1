

#include <task2.h>
#include <math.h> 

bool checkPrime(unsigned int value)
{
	if (value <= 3)
	{
		return true;
	}
	if (value % 2 == 0)
	{
		return false;
	}

	for (int i = 3; i < sqrt(value) + 1; i += 2)
	{

		if (value % i == 0)
		{
			return false;
		}

	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	int cur = 0;
	int i = 1;
	while (cur != n)
	{
		i++;
		if (checkPrime(i))
		{
			cur++;
		}

	}
	return i;
}

unsigned long long nextPrime(unsigned long long value)
{
	long long nextval = value + 1;
	while (1)
	{
		if (checkPrime(nextval))
		{
			return nextval;
		}
		nextval++;
	}
}