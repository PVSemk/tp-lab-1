#include "../include/task2.h"

//�������� ����� �� ��������
bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i*i <= value; ++i)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

//���������� n - ��� �������� �����(� ����)
unsigned long long nPrime(unsigned int n)
{
	unsigned int value = 1;//���� ���������� ��������, ������� ����� �������� ������ ������� �����
	unsigned int counter = 0;//������� ��������� ������� �����
	while (counter < n)//�� ��� ���, ���� �� ������ ������ ���������� ������� �����, ����� ��������� ������������� ��������
	{
		++value;//����� ��������� ������� (��� ������������ � ������ ��������). ������ ����� - ������ ��� 1 ��� ������ �������������, ����� �������� �� 2.
		if (checkPrime(value)) counter++; //���� ����� ������� ����� - ��������� �������. ��� ������!
	}
	return value;
}

//���������� ���������� ���������� �������� ����� � value.
unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long next_prime_num = value;
	while (!checkPrime(++next_prime_num));
	return next_prime_num;
}