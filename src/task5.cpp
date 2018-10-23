#include <iostream>
#include <task5.h>

void split(char ***result, int *N, char *buf, char ch) {
	int i;
	int number = 1;
	for (i = 0; buf[i]; i++) {
		if (buf[i] == ch) {
			*N += 1;
		}
	}
	if (*N==0)
		return; 
	*N += 1;
	char *memory = new char[i + 1];
	*result = new char *[*N];
	(*result)[0] = memory;
	for (i = 0; buf[i]; i++) {
		memory[i] = buf[i];
		if (buf[i] == ch) {
			tmp[i] = '\0';
			(*result)[number] = memory + i + 1;
			number++;
		}
	}
}