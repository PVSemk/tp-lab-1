#include <iostream>
#include <task2.h>
#include <cmath>

bool checkPrime(unsigned int value)  //- проверка числа на простоту.
{
	for (int i = 2; i<=sqrt(value); i = i ++)
	{
		if (value%i == 0)
			return false;
	}
	return true;
}
unsigned long long nPrime(unsigned n) //- нахождение n - ого простого числа(в ряду).
{
	unsigned long long value = 1;
	int counter = 0;
	while (counter != n)
	{
		value++;
		if (checkPrime(value))
		{
			counter++;
		}
	}
	return value;
}
unsigned long long nextPrime(unsigned long long value) //- нахождение ближайшего следующего простого числа к value.
{
	while (1)
	{
		value++;
		if (checkPrime(value))
			return value;
	}
}




