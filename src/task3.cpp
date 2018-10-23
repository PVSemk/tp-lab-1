#include "../include/task3.h"
unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	unsigned long current = 2;
	unsigned long a;
	while (1) {
		sum += current;
		if ((a=nextPrime(current)) >= hbound)return sum;
		current = a;
	}
}