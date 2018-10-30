#include <task5.h>

void split(char ***result, int *N, char *buf, char ch) {
	int len, k = 0;
	len = strlen(buf);
	for (int i = 1; i <= len; i++) {
		if (((buf[i] == ch) || (buf[i] == '\0')) && (buf[i - 1] != ch)) (*N)++;
	}
	*result = new char*[*N];
	*N = 0;
	for (int i = 0; i <= len; i++) {
		if ((k != 0) && ((buf[i] == ch) || (buf[i] == '\0'))) {
			char *res = new char[k + 1];
			for (int j = 0; j < k; j++) {
				res[j] = buf[i - k + j];
			}
			res[k] = '\0';
			k = 0;
			(*result)[*N] = res;
			(*N)++;
			continue;
		}
		if (buf[i] != ch) k++;
	}
}
