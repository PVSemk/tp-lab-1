#include "task1.h"


unsigned long findValue(unsigned int min, unsigned max) {
	unsigned int s = min;
	for (int i=min; i<=max; i++) {
		s *= i / nod(i, s);
	}
	return s;
}

unsigned long nod(unsigned int a, unsigned b)
{
	if (b == 0) return a;
	else return nod(b, a%b);
}

unsigned long nok(unsigned int n1, unsigned n2)
{
	int kok = 0;
	kok= n1 * n2 / nod(n1, n2);
	return kok;
}


