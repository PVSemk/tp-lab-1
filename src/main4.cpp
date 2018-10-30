#include <iostream>
#include "task4.h"


int main()
{

	char *a = new char[100000];
	char *b = new char[100000];
	cin >> a >> b;
	cout << sum(a, b);
	system("pause");
}
