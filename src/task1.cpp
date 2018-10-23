#include "task1.h"

unsigned long nod(unsigned int a, unsigned b)
{
	while (b != 0)
	{
		unsigned next_b = a % b;
		a = b;
		b = next_b;
	}

	return a;
}

unsigned long nok(unsigned int a1, unsigned b1)
{
	return a1 * b1 / nod(a1, b1);
}


unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long long s = min;

	for (; min <= max; min++) {
		s = nok(s, min);
	}

	return s;
}