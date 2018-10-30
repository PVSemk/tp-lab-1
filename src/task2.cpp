#include "task2.h"

bool checkPrime(unsigned value) {
	if (value < 2) return false;
	if (value == 2) return true;
	if (value % 2 == 0) return false;

	double limit = sqrt(value);

	for (unsigned i = 3; i <= limit; i += 2) {
		if ((value % i) == 0) return false;
	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	int a = 0;
	int i = 1;
	while (a != n)
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
	long long next_value = value + 1;
	while (1)
	{
		if (checkPrime(next_value))
		{
			return next_value;
		}
		next_value++;
	}
}