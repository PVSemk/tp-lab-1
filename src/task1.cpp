#include <iostream>
#include <task1.h>
unsigned long findValue(unsigned int min, unsigned max)
{
	int result = min;
	int t, nod;
	for (int i = min; i < max; ++i)
	{
		int a = result;
		int b = i;
		while (a) 
		{
			int t;
			if (b > a) { t = a; a = b; b = t; }
			a %= b;
		}
		nod = b;
		result = (result*i) / nod;
	}
	return result;

}