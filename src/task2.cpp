#include <task2.h>
bool checkPrime(unsigned int value) {
	for (unsigned int i = 2; i < value; i++)
		if (value % i == 0)
			return false;
	return true;
}

unsigned long long nPrime(unsigned n) {
	unsigned int value = 0;
	while (n != -1) {
		value++;
		if (checkPrime(value)) n--;

	}
	return value;
}

unsigned long long nextPrime(unsigned long long value) {
	while (1) {
		value++;
		if (checkPrime(value)) break;
	}
	return value;
}