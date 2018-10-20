#include <iostream>
#include <task2.h>

bool checkPrime(unsigned int value) {
	for (long long i = 2; i <= sqrt(value); i++) {
		if (value % i == 0)
			return false;
	}
	return true;
}

unsigned long long nextPrime(unsigned long long value) {
	value++;
	if (value % 2 == 0) {
		if (checkPrime(value) == 1) return value;
		else value++;
	}
	while (value % 3 != 0) {
		if (checkPrime(value) == 1) return value;
		value += 2;
	}
	if (checkPrime(value) == 1) return value;
	value += 2;
	int n = 1;
	while (1) {
		if (n != 3) {
			if (checkPrime(value) == 1) return value;
			n++;
		}
		else n = 1;
		value += 2;
	}
}

unsigned long long nPrime(unsigned n) {
	unsigned long long int np = 2;
	for (int i = 1; i < n; i++) {
		np = nextPrime(np);
	}
	return np;
}