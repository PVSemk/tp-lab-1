#include "../include/task4.h"
char * sum(char *x, char *y) {
	char* not_x = new char[21];
	char* not_y = new char[21];
	char *sum = new char[22];
	unsigned int N;
	char a;
	char c = '0';
	for (int i = 0; i < 20; i++) {
		not_x[i] = '0';
		not_y[i] = '0';
	}
	for (int i = 0; i<strlen(x); i++)
		*(not_x + 20 - strlen(x) + i) = *(x + i);
	not_x [20] = '\0';
	for (int i = 0; i<strlen(y); i++)
		*(not_y + 20 - strlen(y) + i) = *(y + i);
	not_y[20] = '\0';
	N = strlen(not_x);
	*(sum + N + 1) = '\0';
	for (int i = N - 1; i >= 0; i--) {
		a = *(not_x + i) + (*(not_y + i)) + c - 48 - 48;
		if (a > 57) {
			*(sum + i + 1) = a - 10;
			c = '1';
		}
		else {
			*(sum + i + 1) = a;
			c = '0';
		}
	}
	*(sum + 0) = c;
	for (int i = 0; i < 22; i++)
		if (sum[i] != '0')return (sum + i);

}
