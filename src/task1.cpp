#include <iostream>
#include <task1.h>

unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long int div = min, x, y;
	for (int i = min; i < max; i++) {
		x = div;
		y = i;
		while (x != y) {
			int tmp = x - y;
			if (tmp > 0) x = x - y;
			else
				y = y - x;
		}
		div = div * i / x;
	}
	return div;
}