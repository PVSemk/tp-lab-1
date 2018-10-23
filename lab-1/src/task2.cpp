bool checkPrime(unsigned int value) {
	for (int i = 2; i <= sqrt(value); i++) {
		if ((value%i) == 0) return false;
	}
	return true;
}
unsigned long long nextPrime(unsigned long long value) {
	unsigned long long i = value;
	while (1) {
		i++;
		if (checkPrime(i) == true)return i;
	}
}
unsigned long long nPrime(unsigned n) {
	unsigned long long start = 2;
	for (int i = 1; i < n; i++) {
		start = nextPrime(start);
	}
	return start;
}