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

	unsigned long long nPrimeRes = nPrime(21);
	cout << "The 21 prime number is:" << nPrimeRes << endl;

	unsigned long long nextPrimeRes = nextPrime(76);
	cout << "The next prime number after 76 is:" << nextPrimeRes << endl;
	return 0;
}