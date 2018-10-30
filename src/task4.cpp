#include <iostream>
#include <cstring>
#include <algorithm>
#include <task4.h>

char * sum(char *x, char *y) {
	int lenOFx = strlen(x);
	int lenOFy = strlen(y); 
	int moreTHANnine = 0;
	int cur = 0;
	int lenOFnewmass=0;
	lenOFnewmass = std::max(lenOFx, lenOFy) + 1;
	if ((int)x[0]-48 + (int)y[0] -48 >= 10) {
		lenOFnewmass += 1;
		cur = 1;
	}
	char *res = new char[lenOFnewmass + cur];
	if (cur == 1) {
		res[0] = 1;
	}
	res[lenOFnewmass - 1] = '\0';
	for (int i = 0; i < std::max(lenOFx, lenOFy); i++) {
		cur = 0 + moreTHANnine;
		if (lenOFx - i - 1 >= 0) {
			cur += (int)x[lenOFx - i - 1] - 48;
		}
		if (lenOFy - i - 1 >= 0) {
			cur += (int)y[lenOFy - i - 1] - 48;
		}
		if (cur > 9) {
			moreTHANnine = 1;
			cur -= 10;
		}
		else moreTHANnine = 0;
		res[lenOFnewmass - i - 2] = (char)(cur + 48);
	}
	if (moreTHANnine == 1) {
		res[0] = (char)49;
	}
	return res;
}
