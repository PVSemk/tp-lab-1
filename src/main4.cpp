#include <task4.h>
#include <string.h>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char x[] = "9999";
	char y[] = "1";

	char *p = sum(x, y);

	puts(p);

	return 0;
}