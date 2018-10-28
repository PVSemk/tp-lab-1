
#include <iostream>
 
using namespace std;
void split(char ***result, int *N, const char *buf, char ch)
{
	int n = 0;
	int len = strlen(buf);
	for (int i = 0; i<len; i++)
	{
		if (ch == buf[i]) ++n;
	}
	char *str = new char[len];
	str[len] = NULL;
	(*result) = new char*[n + 1];
	(*result)[0] = str;
	n = 1;
	for (int i = 0; i < len; i++)
	{
		str[i] = buf[i];
		if (buf[i] == ch)
		{
			(*result)[n] = str + (i + 1);
			str[i] = NULL;
			++n;
		}
	}
	*N = n;
}