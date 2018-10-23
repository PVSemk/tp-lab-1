#include <iostream>
#include <task4.h>
char * sum(char *x, char *y)
{
	int len1 = 0;
	int len2 = 0;
	for (int i=0;x[i]!='\0';i++)
	{
		len1++;
	}
	for (int i = 0; y[i] != '\0'; i++)
	{
		len2++;
	}
	int lenresult = 0;
	if (len1 > len2) 
	{
		lenresult = len1 + 1;
	}
	else
	{
		lenresult = len2 + 1;
	}
	int *a = new int[lenresult + 1];
	int *b = new int[lenresult + 1];
	char *result = new char[lenresult + 1];
	for (int i = 0; i < lenresult + 1; ++i)
	{
		result[i] = '0';
	}
	for (int i = 0; i < lenresult + 1; ++i)
		a[i] = 0;
	for (int i = 0; i < lenresult + 1; ++i)
		b[i] = 0;


	for (int i = 0; i < len1; i++)
	{
		a[len1 - i] = int(x[i]) - 48;
	}

	for (int i = 0; i < len2; i++)
	{
		b[len2 - i] = int(y[i]) - 48;
	}

	int c = 0;
	for (int i = 1; i < lenresult + 1; ++i)
	{
		c = c + a[i] + b[i],
			a[i] = c % 10,
			c /= 10;


	}
	for (int i = 1; i < lenresult + 1; ++i)
	{
		result[lenresult - i] = a[i] + 48;
	}
	result[lenresult] = '\0';
	if (result[0] == '0')
	{
		for (int i = 0; i < lenresult - 1; i++)
		{
			result[i] = result[i + 1];
		}
		result[lenresult - 1] = '\0';
	}

	return result;
}