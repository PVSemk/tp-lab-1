#include <iostream>
#include <task5.h>

void split(char ***result, int *N, char *buf, char ch) {
	int i = 0;
	int n = 1;
	int CounterOfRazdelitel = 0;
	for (i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] == ch)
		{
			CounterOfRazdelitel++;
		}
	}
	if (CounterOfRazdelitel == 0)
		return;
	*N = CounterOfRazdelitel + 1;
	char *mem = new char[i + 1];
	*result = new char *[*N];
	(*result)[0] = mem;
	for (i = 0; buf[i]; i++) {
		mem[i] = buf[i];
		if (buf[i] == ch) {
			mem[i] = '\0';
			(*result)[n] = mem + i + 1;
			n++;
		}
	}
	mem[i] = '\0';
}