#pragma once

#include <iostream>
using namespace std;

#include "task2.cpp"

int main()
{
	bool res = checkPrime(2);
	if (res) cout << "This is a prime number!" << endl;
	else cout << "This is NOT a prime number!" << endl;

	res = checkPrime(8);
	if (res) cout << "This is a prime number!" << endl;
	else cout << "This is NOT a prime number!" << endl;

	res = checkPrime(13);
	if (res) cout << "This is a prime number!" << endl;
	else cout << "This is NOT a prime number!" << endl;
	return 0;
}