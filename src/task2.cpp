#include <iostream>
#include <task2.h>


bool checkPrime(unsigned int value)  //- �������� ����� �� ��������.
{
	bool prime = true;
	for (int i = value-1; i>1; i = i - 1)
	{
		if (value%i == 0)
			prime = false;
	}
	return prime;
}
unsigned long long nPrime(unsigned n) //- ���������� n - ��� �������� �����(� ����).
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
unsigned long long nextPrime(unsigned long long value) //- ���������� ���������� ���������� �������� ����� � value.
{
	while (1)
	{
		value++;
		if (checkPrime(value))
			return value;
	}
}




