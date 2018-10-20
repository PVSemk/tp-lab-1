#include <iostream>
#include <cstring>
#include <algorithm>
#include <task4.h>

char * sum(char *x, char *y) {
	int xlen = strlen(x), ylen = strlen(y), extraone = 0, cur = 0, newlen;
	newlen = std::max(xlen, ylen) + 1;
	if ((int)x[0] + (int)y[0] - 96 > 9) {
		newlen += 1;
		cur = 1;
	}
	char *res = new char[newlen + cur];
	if (cur == 1) {
		res[0] = 1;
	}
	res[newlen - 1] = '\0';
	for (int i = 0; i < std::max(xlen, ylen); i++) {
		cur = 0 + extraone;
		if (xlen - i - 1 >= 0) {
			cur += (int)x[xlen - i - 1] - 48;
		}
		if (ylen - i - 1 >= 0) {
			cur += (int)y[ylen - i - 1] - 48;
		}
		if (cur > 9) {
			extraone = 1;
			cur -= 10;
		}
		else extraone = 0;
		res[newlen - i - 2] = (char)(cur + 48);
	}
	if (extraone == 1) {
		res[0] = (char)49;
	}
	return res;
}
