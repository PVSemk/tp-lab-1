#include <iostream>
void split(char ***result, int *N, const char *buf, char ch)
{
	int k = 0;
	int RazdCount = 0;
	for (int i = 0;buf[i] != '\0'; i++)
	{
		if (buf[i] == ch)
		{
			RazdCount++;
		}
		k++;
	}
	*N = RazdCount+1;
	int WaitForLastMas = 0;
	char *massivs = (char *)malloc((RazdCount+1) * sizeof(char));
	(*result) = (char**)malloc((k+1) * sizeof(char*));
	(*result)[0] = massivs;
	for (int i = 0, k = 1; buf[i] != '\0'; i++)
	{
		if (buf[i] == ch)
		{
		(*result)[k] = massivs+i+1;
		massivs[i] = '\0';
		k++;
		}
		else
		{
		massivs[i] = buf[i];
		}
		WaitForLastMas++;
	}
	massivs[WaitForLastMas] = '\0';
}