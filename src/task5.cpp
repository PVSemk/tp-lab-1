#include "../include/task5.h"

using namespace std;

void split(char ***result, int *N, char *buf, char ch)
{
	*N = 0;//�������� �������

	for (int i = 0; buf[i]; i++)
	if (buf[i] == ch) (*N)++;//������������

	(*N)++;//+1, �. �. ��� �����������

	char **tmp_result = new char*[*N];//��������� �������� ��������

	for (int i = 0, length = 0, count = 0; buf[i]; i++)//������� ����
	{
		length++;//����������� ����� ������� ���������
		if (buf[i] == ch || buf[i + 1] == 0)//���� ����������� ��� ����� ������
		{
			tmp_result[count] = new char[length + 1];//�������� ������ ��� ��� ����
			for (int j = i - length + 1; j < i + 1; j++)
			{
				//� ����� � ������ �������
				if (buf[j] != ch)
				{
					//���� ��� �� �����������
					tmp_result[count][j - (i - length) - 1] = buf[j];//�������� ���
				}
				else tmp_result[count][j - (i - length) - 1] = 0;//�������� ���
			}
			tmp_result[count][length] = 0;//�� ����� ������ �����
			length = 0;//�������� ������
			count++;//����� ����� �������� ����� ���������
		}
	}
	*result = tmp_result;//����������
}