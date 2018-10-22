#include <task5.h>
#include <iostream>
using namespace std;

void split( char ***result, int *N,const  char *buf, char ch)
{
	int sepCount = 0;
	int j;
	for(int i=0;buf[i]!='\0';i++)
	{
		if (buf[i] == ch) {
			sepCount++;
		}
		j = i;
	}
	(*result) = (char **)malloc((sepCount + 1) * sizeof(char *));

	char *part = new char[j + 1];
   
	sepCount = 1;
	j = 0;
	(*result)[0] = part;
	while (buf[j] != '\0') {
		part[j] = buf[j];
		if (buf[j] == ch) {
			(*result)[sepCount] = part+(j+1);
			part[j] = '\0';
			sepCount++;
		}
		j++;
	}
	part[j] = '\0';
	*N = sepCount;

}