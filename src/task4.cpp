#include "../include/task4.h"

using namespace std;

char *sum(char *x, char *y)
{
	int x_len = 0;
	int y_len = 0;

	for (int i = 0; x[i] != '\0'; i++) x_len++;
	for (int i = 0; y[i] != '\0'; i++) y_len++;

	int max = (x_len > y_len) ? (x_len + 1) : (y_len + 1);

	int *str_x = new int[max + 1];
	int *str_y = new int[max + 1];

	char *result = new char[max + 1];
	for (int i = 0; i < max + 1; ++i) result[i] = '0';

	for (int i = 0; i < max + 1; i++)
	{
		str_x[i] = 0;
		str_y[i] = 0;
	}

	for (int i = 0; i < x_len; i++) str_x[x_len - i] = int(x[i]) - 48;

	for (int i = 0; i < y_len; i++) str_y[y_len - i] = int(y[i]) - 48;

	int c = 0;
	for (int i = 1; i < max + 1; ++i)
	{
		c = c + str_x[i] + str_y[i],
		str_x[i] = c % 10,
		c /= 10;
	}

	for (int i = 1; i < max + 1; ++i) result[max - i] = str_x[i] + 48;
	
	result[max] = '\0';
	if (result[0] == '0')
	{
		for (int i = 0; i < max - 1; i++)
		{
			result[i] = result[i + 1];
		}
		result[max - 1] = '\0';
	}

	return result;
}