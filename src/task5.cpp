#include <task5.h>

void split(char ***result, int *N, char *buf, char ch) 

{
	int NumOfCh = 0;
	int MaxLen = 0;

	for (int i = 0; i < strlen(buf); i++)
		if (buf[i] == ch)
			NumOfCh++;
	*N = NumOfCh + 1;
	if (buf[strlen(buf) - 1] == ch)
		N--;
	// we fouded number of strings


	int Max = 0;
	for (int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] != ch)
			Max++;
		else
		{
			if (Max > MaxLen)
				MaxLen = Max;
			Max = 0;
		}
	}
	

	char **arr = new char*[*N];
	for (int i = 0; i < *N; i++)
		(arr[i]) = new char[MaxLen + 1];


	int r = 0;
	int c = 0;

	for (int k = 0; k <= strlen(buf); k++)
	{
		if (k == strlen(buf))
		{
			arr[*N - 1][c] = '\0';
			break;
		}
		if (buf[k] != ch)
		{
			(arr[r][c]) = buf[k];
			c++;
		}
		else
		{
			arr[r][c] = '\0';
			c = 0;
			r++;
		}
	}

	*result = &(arr[0]);

}