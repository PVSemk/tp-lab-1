
#include <iostream>
using namespace std;

void split( char ***result, int *N,const  char *buf, char ch)
{
	int sepCount = 0;
	
	for(int i=0;buf[i]!='\0';i++)
	{
		if (buf[i] == ch) {
			sepCount++;
		}
	}
	(*result) = (char **)malloc((sepCount + 1) * sizeof(char *));

	char *part = new char[strlen(buf) + 1];
   
	sepCount = 1;
	int i = 0;
	(*result)[0] = part;
	while (buf[i] != '\0') {
		part[i] = buf[i];
		if (buf[i] == ch) {
			(*result)[sepCount] = part+i+1;
			part[i] = '\0';
			sepCount++;
		}
		i++;
	}
	part[i] = '\0';
	*N = sepCount;

}