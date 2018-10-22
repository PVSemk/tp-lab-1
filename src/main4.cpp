#include <task4.h>
#include <iostream>
using namespace std;
int main()
{
	char A[] = "99999999999999999999";
	char B[] = "1";
	char K[] = "100000000000000000000";

	char *p;
	p = sum(A, B);
	cout << strcmp(p, K) << endl;
	puts(p);
	return strcmp(p, K);
}
