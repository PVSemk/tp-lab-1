#include "task5.h" 

#include <iostream> 

using namespace std;

void split(char ***output, int *A, const char *buffer, char chr)
{

	int count = 0;
	int	k = 0;

	for (int i = 0; buffer[i] != '\0'; i++)
	{
		k = i;
		if (chr == buffer[i]) ++count;
	}

	char *word = new char[k + 1];

	(*output) = (char **)malloc((count + 1) * sizeof(char *));
	(*output)[0] = word;

	k = 0;
	count = 1;

	while (buffer[k] != '\0')
	{
		word[k] = buffer[k];
		if (buffer[k] == chr)
		{
			(*output)[count] = word + (k + 1);
			word[k] = '\0';
			++count;
		}
		++k;
	}

	*A = count;
	word[k] = '\0';


}