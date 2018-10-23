#include <iostream>
bool checkPrime(unsigned int value)
{
	if ((value == 2) or (value == 3))
	{
		return true;
	}
	if ((value == 4) or (value == 6) or (value == 8) or (value == 10)) { return false; }
	for (int i = 3; i <= value; i += 2)
	{
		if ((value % i == 0) or (value % 2 == 0))
		{
			return false;
		}
	}
	return true;
}
unsigned long long sumPrime(unsigned int hbound)
{
	long long sum = 0;
	for (long long j = 2; j < hbound - 1; j++)
	{
		if (checkPrime(j) == 1)
		{
			sum = sum + j;
		}
	}
	return sum;

}