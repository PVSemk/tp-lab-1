#include "../include/task3.h"

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