#pragma once

#include <iostream>
using namespace std;

#include "task1.cpp"

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