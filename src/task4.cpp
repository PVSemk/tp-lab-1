#include <iostream>
#include<algorithm>
char * sum(const char *x, const char *y)
{
	int len1 = strlen(x);
	int len2 = strlen(y);
	int lenresult = std::max(len1, len2) + 1;
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