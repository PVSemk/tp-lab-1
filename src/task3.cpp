#include <task3.h>

unsigned long sumPrime(unsigned int hbound) {
		unsigned long long sum = 0;
	for (unsigned long i = 2; i < hbound; i++) {
		if (checkPrime(i)) sum = sum+i;
	}
	return sum;
}
