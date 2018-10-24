#pragma once

#include <iostream>
#include "../include/task4.h"

using namespace std;

int main()
{
	char *x = "123456789";
	char *y = "000000001";
	char *z = sum(x, y);
	cout << z << endl;

	char *x1 = "99999999999999999999";
	char *y1 = "1";
	char *z1 = sum(x1, y1);
	cout << z1 << endl;
	return 0;
}