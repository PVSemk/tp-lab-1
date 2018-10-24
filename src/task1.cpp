#include <task1.h>

long long Nod(long long a, long long b)
{
	long long t;
   if (a<b) { t =a; a=b; b=t; }
   while(b!=0) {
     t = b;
     b = a%b;
     a = t;
  }
   return a;
}

unsigned long findValue(unsigned int min, unsigned max)
{
	long long value = 1;
	for (int i = min; i <= max; i++) {
		value = value*i / Nod(value, i);
	}
	return value;
}
