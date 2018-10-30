#include <iostream>
#include <task1.h>

unsigned long findValue(unsigned int min, unsigned max) { 
	unsigned long Value = 1;
	bool find = true;
	while (1) 
	{
		find = true;
		for (int i = min; i <= max; i++)
		{
			if (Value % i != 0)
			{
				find = false;
				break;
			}

		}
		if (find == true)
			return Value;
		Value++;
	}

}