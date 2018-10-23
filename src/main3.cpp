#pragma once

#include <iostream>
using namespace std;

bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i*i <= value; ++i)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

#include "task3.cpp"

int main()
{
	unsigned long long res = sumPrime(2000000);
	cout << res << endl;
	return 0;
}