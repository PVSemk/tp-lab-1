#include <string>
char * sum(char *x, char *y) {
	int f = 0, sum, lenX, lenY, len;
	lenX = strlen(x);
	lenY = strlen(y);
	if (lenX > lenY) len = lenX;
	else len = lenY;
	char *sumCh = new char[len + 2];
	sumCh[len + 1] = '\0';
	while (1) {
		sum = 0;
		lenX--;
		lenY--;
		if (len == 0) {
			sumCh[len] = (char)(f + 48);
			break;
		}
		if ((lenX >= 0) && (lenY >= 0)) {
			sum = *(x + lenX) - 48 + *(y + lenY) - 48 + f;
		}
		else
			if (lenX >= 0) sum = *(x + lenX) - 48 + f;
			else sum = *(x + lenX) - 48 + f;
		if (sum > 9) {
			f = 1;
			sum = sum % 10;
		}
		else f = 0;
		sumCh[len] = (char)(sum + 48);
		len--;

	}
	if (sumCh[0] == '0') sumCh++;
	return sumCh;
}