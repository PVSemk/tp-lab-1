#include <task1.h>
unsigned long findValue(unsigned int min, unsigned max)
{
	long int value = 1;
	bool flag = 0;
	for (int i = min; i <= max; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (value % j == 0 && i % j == 0)
			{
				value *= (i / j);
				flag = 1;
				break;
			}
		}
	}
	return value;
}