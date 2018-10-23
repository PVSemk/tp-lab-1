#include <task4.h>


int main()
{
	char *x = "99999999999999999999";
	char *y = "1";

	char *z = sum(x, y);

	for (int i = 0; i < strlen(z); i++) {
		cout << z[i];
	}

	return 0;
}