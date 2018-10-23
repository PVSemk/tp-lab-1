#include "../include/task3.h"
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

unsigned long long sumPrime(unsigned int hbound) //����� ���� ������� ����� �� hbound (�� ������� ���)
{
	unsigned long long int sum = 0;
	//hbound - ������ ���������� ������� �����, ����� ������� �� ����� ����������� (max_amount_of_primes)
	for (unsigned int i = 2; i < hbound; i++)
	{
		if (checkPrime(i)) sum += i;
	}
	return sum;
}