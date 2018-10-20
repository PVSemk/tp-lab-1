#include <iostream>
#include <task3.h>

unsigned long long sumPrime(unsigned int hbound) {
	int*a = new int[hbound + 1]{0};
	unsigned long long int sum = 0;
	unsigned int i = 2, j;
	while (i <= hbound) {
		if (a[i] == 0) {
			sum += i;
			for (j=i; j < (hbound + 1); j += i)
				a[j] = 1;
		}
		i++;
	}
	return sum;
}
