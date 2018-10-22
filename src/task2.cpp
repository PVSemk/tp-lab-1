#include <task2.h>

bool checkPrime(unsigned int value)
{
	if ((value == 1) || (value == 0))
		return false;
	
	int test = 0;
	for (int i = 2; i < value; i++)
		if (value%i == 0)
		{
			//cout << "no, " << i << endl;
			test = 1;
			return false;
		}
	if (test != 1)
		return true;
}

unsigned long long nPrime(unsigned n)
{
	int k = 0; // counter of prime numbres
	int num = 1; // for checking


	for (int i = 2; ; i++)
	{
		if (checkPrime(i) == true)
			k++;
		if (k == n)
		{
			return i;
		}
	}
}

unsigned long long nextPrime(unsigned long long value)
{
	for (int i = value + 1; ; i++)
	{
		if (checkPrime(i) == true)
			return i;
	}
}