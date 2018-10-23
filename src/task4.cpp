#include "../include/task4.h"
char * sum(char *x, char *y) {
	char *sum = new char[22];
	unsigned int N;
	char a;
	char c = '0';
	N= strlen(x);
	*(sum + N+1 ) = '\0';
	for (int i = N-1; i >= 0; i--) {
		a = *(x + i) + (*(y + i)) + c-48-48;
		if (a > 57) {
			*(sum + i+1) = a - 10;
			c = '1';
		}
		else {
			*(sum + i+1 ) = a;
			c = '0';
		}
	}
	*(sum + 0) = c;
	for (int i = 0; i < 22; i++)
		if (sum[i] != '0')return (sum + i);

}