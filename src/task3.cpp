#include <iostream>
#include <task3.h>

unsigned long long sumPrime(unsigned int hbound) {
	int*a = new int[hbound + 1];
	unsigned long long int sum = 0;
	int i = 2, j;
	while (i <= hbound) {
		if (a[i] != 0) {
			sum += i;
			j = i;
			for (j; j < (hbound + 1); j += i)
				a[j] = 0;
		}
		i++;
	}
	return sum;
}