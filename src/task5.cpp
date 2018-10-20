#include <iostream>
#include <task5.h>

void split(char ***result, int *N, char *buf, char ch) {
	int i, n = 1;
	for (i = 0; buf[i]; i++) {
		if (buf[i] == ch) {
			*N += 1;
		}
	}
	char *tmp = new char[i + 1];
	*result = new char *[*N + 1];
	(*result)[0] = tmp;
	for (i = 0; buf[i]; i++) {
		tmp[i] = buf[i];
		if (buf[i] == ch) {
			tmp[i] = '\0';
			(*result)[n] = tmp + i + 1;
			n++;
		}
	}
	tmp[i] = '\0';
}