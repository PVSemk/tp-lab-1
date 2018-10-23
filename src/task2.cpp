#include <iostream>
#include <task2.h>
bool checkPrime(unsigned int value)
{
	if ((value == 2) or (value == 3))
	{
		return true;
	}
	if ((value == 4) or (value == 6) or (value == 8) or (value == 10)) { return false; }
	for (int i = 3; i <= value; i += 2)
	{
		if ((value % i == 0) or (value % 2 == 0))
		{
			return false;
		}
	}
	return true;
}
unsigned long long nPrime(unsigned n) {
		unsigned j = n;
		unsigned long long i = 2;
		while (j) 
		{
			if (checkPrime(i) == true) 
			{
				j--;
			}
			i++;
		}
		i--;
		return i;
	}
unsigned long long nextPrime(unsigned long long value)
{
	value++;
	while (!checkPrime(value))
	{
		value++;
	}
	return value;
}