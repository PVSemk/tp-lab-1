#include "task5.h" 
#include <iostream> 

using namespace std;

void split(char ***result, int *N, const char *buf, char ch)
{

	int count = 0;
	int	k = 0;
	char chr = '\0';

	for (int i = 0; buf[i] != chr; i++)
	{
		k = i;
		if (ch == buf[i]) ++count;
	}

	char *word = new char[k + 1];
	(*result) = (char **)malloc((count + 1) * sizeof(char *));
	(*result)[0] = word;

	k = 0; count = 1;
	while (buf[k] != chr)
	{
		word[k] = buf[k];
		if (buf[k] == ch)
		{
			(*result)[count] = word + (k + 1);
			word[k] = chr;
			++count;
		}
		++k;
	}

	*N = count;
	word[k] = chr;


}