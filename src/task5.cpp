#include "task5.h"

void split(char ***result, int *N, char *buf, char ch)
{
	int n = 0, i;
	for (i = 0; buf[i] != 0; i++)
	{
		if (buf[i] == ch)
			n++;
	}	
	*N = n + 1;

	char *tmp = new char[i+1];
	*result = new char*[*N];
	(*result)[0] = tmp;
	int j = 1;
	
	for ( i = 0; buf[i] != '\0'; i++)
	{
		tmp[i] = buf[i];
		if (buf[i] == ch)
		{
			tmp[i] = '\0';
			(*result)[j] = tmp + i + 1;
			j++;
		}
	}
	tmp[i] = '\0';
}