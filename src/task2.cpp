#include <iostream>
#include <task2.h>
#include <cmath>

bool checkPrime(unsigned int value)  //- �������� ����� �� ��������.
{
	for (int i = 2; i<=sqrt(value); i = i++)
	{
		if (value%i == 0)
			return false;
	}
	return true;
}
unsigned long long nextPrime(unsigned long long value) //- ���������� ���������� ���������� �������� ����� � value.
{
	while (1)
	{
		value++;
		if (checkPrime(value))
			return value;
	}
}
unsigned long long nPrime(unsigned n) //- ���������� n - ��� �������� �����(� ����).
{
	unsigned long long int np = 2;
	for (int i = 1; i < n; i++) {
		np = nextPrime(np);
	}
	return np;
}




