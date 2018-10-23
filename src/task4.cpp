#include <task4.h>
#include <string.h>
#include <cstring>

using namespace std;

char *sum(char *x, char *y)
{
	int max = strlen(x);

	if (max < strlen(y))
		max = strlen(y);


	char *newx = new char[max + 2];
	char *newy = new char[max + 2];
	for (int i = max + 1; i >= 0; i--)
	{
		newx[i] = '0';
		newy[i] = '0';
	}

	newx[max + 1] = '\0';
	newy[max + 1] = '\0';

	int k = max;
	for (int i = strlen(x) - 1; i >= 0; i--)
	{
		newx[k] = x[i];
		k--;
	}
	k = max;
	for (int i = strlen(y) - 1; i >= 0; i--)
	{
		newy[k] = y[i];
		k--;
	}

	for (int i = max; i >= 0; i--)
	{
		if ((newx[i] + newy[i] - 48 * 2) >= 10)
			newx[i - 1]++;
		newx[i] = (newx[i] + newy[i] - 48 * 2) % 10 + 48;
	}

	if (newx[0] == '0')
	{
		memmove(newx, newx + 1, strlen(newx) - 1);
		newx[strlen(newx) - 1] = '\0';
	}

	return newx;
}