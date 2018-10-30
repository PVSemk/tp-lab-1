#include <task1.h>

unsigned long findValue(unsigned int min, unsigned max)
{
	long long value = 1;
	long long t, a, b;
	for (int i = min; i <= max; i++) {
		a = value; b = i;
		if (a<b) {t=a;a=b;b=t;}
		while(b!=0) {
			t=b;
			b= a%b;
			a = t;
		}
		value = value*i / a;
	}
	return value;
}
