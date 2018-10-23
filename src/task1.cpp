#include <task1.h>

unsigned long findValue(unsigned int min, unsigned max)
{
	int a;
	int k = 2;
	
	int *mass = new int[max + 1]{};
	int *ans = new int[max + 1]{};

	for (int i = min; i <= max; i++)
	{
		a = i;

		while (a != 1)
		{
			if (a%k == 0)
			{
				mass[k]++;
				a = a / k;
			}
			else
				k++;
		}

		for (int i = 0; i < max + 1; i++)
			if (mass[i] > ans[i])
				ans[i] = mass[i];

		for (int i = 0; i < max + 1; i++)
			mass[i] = 0;
		k = 2;
	}

	int p = 1;

	for (int i = 0; i < max + 1; i++)
	{
		for (int j = 0; j < ans[i]; j++)
			p = p*i;
	}

	return p;

}