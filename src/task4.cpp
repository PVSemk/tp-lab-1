#include "../include/task4.h"

using namespace std;

char *sum(char *x, char *y)
{
	int x_len = strlen(x);
	int y_len = strlen(y);

	int max = (x_len > y_len) ? x_len : y_len;

	char *str_x = new char[max + 1];
	char *str_y = new char[max + 1];

	for (int i = 0; i <= max - 1; i++)
	{
		str_x[i] = '0';
		str_y[i] = '0';
	}

	str_x[max + 1] = '\0';
	str_y[max + 1] = '\0';

	int counter = max;
	for (int i = (x_len - 1); i >= 0; i--)
	{
		str_x[counter] = x[i];
		counter--;
	}
	counter = max;
	for (int i = (y_len - 1); i >= 0; i--)
	{
		str_y[counter] = y[i];
		counter--;
	}
	for (int i = max; i >= 0; i--)
	{
		if ((str_x[i] + str_y[i] - 48 * 2) >= 10) str_x[i - 1]++;

		str_x[i] = (str_x[i] + str_y[i] - 48 * 2) % 10 + 48;
	}
	if (str_x[0] == '0')
	{
		memmove(str_x, str_x + 1, strlen(str_x) - 1);
		str_x[strlen(str_x) - 1] = '\0';
	}
	return str_x;
}