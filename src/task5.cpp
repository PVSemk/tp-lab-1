#include <task5.h>
#include <cstring>
#include <iostream>

void split(char ***result, int *N, char *buf, char ch)

{
	int nStr = 0;
	int max = 0;


	int temp = 0;
	for (int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] != ch)
			temp++;
		else
		{
			if (temp > max)
				max = temp;
			temp = 0;
		}
	}

	for (int i = 0; i < strlen(buf); i++)
		if (buf[i] == ch)
			nStr++;
	*N = nStr + 1;
	if (buf[strlen(buf) - 1] == ch)
		*N--;


	char **arr = new char*[*N];
	for (int i = 0; i < *N; i++)
		(arr[i]) = new char[max + 1];

	int row = 0;
	int col = 0;
	for (int k = 0; k <= strlen(buf); k++)
	{
		if (k == strlen(buf))
		{
			arr[*N - 1][col] = '\0';
			break;
		}
		if (buf[k] != ch)
		{
			(arr[row][col]) = buf[k];
			col++;
		}
		else
		{
			arr[row][col] = '\0';
			col = 0;
			row++;
		}
	}
	*result = &(arr[0]);
}