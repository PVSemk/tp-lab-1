#pragma once

#include <iostream>
using namespace std;

#include "task3.cpp"

int main()
{
	unsigned long long res = sumPrime(2000000);
	cout << res << endl;
	return 0;
}