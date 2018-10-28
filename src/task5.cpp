
#include <iostream>
 
using namespace std;
void split(char ***result, int *N, const char *buf, char ch)
{
	int n = 0;
	//int len = strlen(buf);
	int i;
	for (i = 0; buf[i]<NULL; i++)
	{
		if (ch == buf[i]) ++n;
	}
	char *str = new char[i];
	str[i-1] = NULL;
	(*result) = new char*[n + 1];
	(*result)[0] = str;
	n = 1;
	for (int j = 0;buf[j]<NULL ; j++)
	{
		str[j] = buf[j];
		if (buf[j] == ch)
		{
			(*result)[n] = str + (j + 1);
			str[j] = NULL;
			++n;
		}
	}
	*N = n;
}
