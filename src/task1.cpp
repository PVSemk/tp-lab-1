#include <task1.h>

unsigned long findValue(unsigned int min, unsigned max)
{
	int n;
	int del;
	int *mas = new int[max - min + 10]{};
	int *ans = new int[max - min + 10]{};

	int i = 0;
	for (int i = min; i <= max; i++)
	{
		n = i;
		del = 2;
		for (int j = 0; j <= max; j++)
			mas[j] = 0;

		while (n != 1)
		{
			if (n%del != 0)
				del++;
			else
			{
				mas[del]++;
				n = n / del;
			}
		}
		for (int i = min; i <= max; i++)
		{
			if (mas[i] > ans[i])
				ans[i] = mas[i];
			
		}
	}
	int answer = 1;

	for (int i = 0; i <= max; i++)
		if (ans[i] != 0)
			for (int j = 0; j<ans[i]; j++)
				answer = answer * i;
	return answer;
}
