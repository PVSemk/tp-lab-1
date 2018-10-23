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
unsigned long long nPrime(unsigned n)
{
	int size = n; 
	int *primes = new int[n]; 
	int *numbers = new int[size]; 

	for (int i = 0; i < size; i++)
		numbers[i] = i; 

	primes[0] = 2; 
	int i = 0; 

	while (i < n) {
		int p = primes[i++]; 

		for (int j = p * 2; j < size; j += p)
			numbers[j] = 0; 

		while (numbers[p + 1] == 0)
			p++; 

		if (p + 1 >= size) { 
			int *tmp = new int[size * 2];

			for (int k = 0; k < size; k++)
				tmp[k] = numbers[k];

			

			size *= 2;
			numbers = tmp;

			for (int j = size / 2; j < size; j++)
				numbers[j] = j; 

			i = 0; 
		}
		else
			primes[i] = p + 1; 
	}
	return primes[n - 1];
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