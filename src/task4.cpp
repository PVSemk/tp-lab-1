#include <task4.h>
#include <string.h>
#include <cstring>

using namespace std;

char * sum(char *x, char *y)
{
	int max, min;

	if (strlen(x) > strlen(y))
	{
		max = strlen(x);
		min = strlen(y);
	}
	else
	{
		max = strlen(y);
		min = strlen(x);
	}

	int k = max;
	char* newmin = new char[max];
	char *newmax = new char[max];

	if (strlen(x) >= strlen(y))
	{
		for (int i = min; i >= 0; i--)
		{
			newmin[k] = y[i];
			k--;
		}

		for (int i = max - min - 1; i >= 0; i--)
		{
			newmin[k] = 48;
			k--;
		}

		strcpy(newmax, x);
	}

	if (strlen(x) < strlen(y))
	{
		for (int i = min; i >= 0; i--)
		{
			newmin[k] = x[i];
			k--;
		}

		for (int i = max - min - 1; i >= 0; i--)
		{
			newmin[k] = 48;
			k--;
		}

		strcpy(newmax, y);
	}

	char* a = new char[max + 1];

	for (int i = 0; i < max + 1; i++)
		a[i] = 48;
	a[max + 1] = '\0';


	k = max;
	for (int i = max - 1; i >= 0; i--)
	{
		if ((a[k] + newmin[i] + newmax[i] - 48 * 3) >= 10)
			a[k - 1]++;
		a[k] = (a[k] + newmin[i] + newmax[i] - 48 * 3) % 10 + 48;
		k--;
	}

	char* ans = new char[max];
	if (a[0] == 48)
	{
		k = max;

		for (int i = max + 1; i > 0; i--)
		{
			ans[k] = a[i];
			k--;
		}
		return ans;
	}
	else return a;
}
