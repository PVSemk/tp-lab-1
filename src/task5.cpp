#include "../include/task5.h"
void split(char ***result, int *N, char *buf, char ch) {
	int k = 0;
	int number;
	int start = 0;
	char *a=NULL;
	for (number = 0; number < 30; number++) {
		if ((*(buf + number)) == '\0')break;
		if ((*(buf + number)) == ch) (*N)++;
	}
	for (int j = 0; j < number; j++) {
		if ((*(buf + j)) == ch) {
			a = new char[j - start];
			for (int i = start; i < j; i++) *(a + i - start) = buf[i];
			*(a + j - start) = '\0';
			(*result)[k]= a;
			k++;
			start = j + 1;
		}
		
	}
	a = new char[number - 1 - start];
	for (int i = start; i < number; i++) *(a + i - start) = buf[i]; 
	*(a + number - start) = '\0';
	(*result)[k] = a;
	return;
}
