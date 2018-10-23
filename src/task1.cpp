#include "../include/task1.h"

using namespace std;

unsigned long findValue(unsigned long min, unsigned long max)
{
	const unsigned long maximum = 1000000000;//�� ������� ����� ���������,
	for (unsigned long number = 1; number <= maximum; number++)//������� �����
	{
		bool divide = false;
		for (unsigned long digit = min; digit < max; digit++)//��� ��������
		{
			if (number == digit) { divide = true; continue; }
	
			if (number % digit != 0)
			{
				divide = false;
				break;
			}
			divide = true;
		}
		if (divide == true)//���� ����� ����������� ���� ����� divide ��� � ������� true
		{
			return number;//������ �� ����� �����, � ���������� ���
		}
	}
	return 0;
}