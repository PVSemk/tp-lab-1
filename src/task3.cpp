#include <task3.h>
#include <iostream>

using namespace std;

unsigned long long sumPrime(unsigned int hbound)
{
	long long int sum = 0;

	int *mas = new int[hbound + 1]{};

	for (int i = 0; i <= hbound; i++)
	{
		mas[i] = 1;
	}

	for (int i = 2; i*i <= hbound; i++)
		if (mas[i] == 1)
			for (int j = i*i; j <= hbound; j = j + i)
				mas[j] = 0;

	for (int i = 2; i <= hbound; i++)
		if (mas[i] == 1)
			sum = sum + i;
	return sum;
}
