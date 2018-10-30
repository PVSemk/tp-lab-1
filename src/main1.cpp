#pragma once

#include <iostream>
#include "../include/task1.h"

using namespace std;

int main()
{
	unsigned long res = findValue(1, 20);
	if (!res) cout << "Number not found!";
	else cout << res << endl;

	res = findValue(1, 10);
	if (!res) cout << "Number not found!";
	else cout << res << endl;
	return 0;
}