#include <task2.h>
#include <cmath>

bool checkPrime(unsigned int value){
	if (value < 2) return false;
	if (value < 4) return true;
	if (value % 2 == 0) return false;
	
	for(unsigned int i = 3; i < sqrt(value)+1; i += 2) {
		if (value % i == 0) return false;
	}
	return true;
}

unsigned long long nPrime (unsigned n) {
		int current = 1;
		int nthprime = 0;
		while (nthprime != n) {
			current++;
			if (checkPrime(current)) nthprime++;
		}
		return current;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long long next = value + 1;
	while (true) {
		if (checkPrime (next)) return next;
		next++;
	}
}
