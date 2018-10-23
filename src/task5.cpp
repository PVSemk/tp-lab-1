#include "../include/task5.h"

using namespace std;

void split(char ***result, int *N, char *buf, char ch)
{
	*N = 0;//обнуляем счётчик

	for (int i = 0; buf[i]; i++)
	if (buf[i] == ch) (*N)++;//подсчитываем

	(*N)++;//+1, т. к. это разделители

	char **tmp_result = new char*[*N];//временное хранение подстрок

	for (int i = 0, length = 0, count = 0; buf[i]; i++)//главный цикл
	{
		length++;//накапливаем длину текущей подстроки
		if (buf[i] == ch || buf[i + 1] == 0)//если разделитель или конец строки
		{
			tmp_result[count] = new char[length + 1];//выделяем память под это дело
			for (int j = i - length + 1; j < i + 1; j++)
			{
				//и далее в нужном кусочке
				if (buf[j] != ch)
				{
					//если это не разделитель
					tmp_result[count][j - (i - length) - 1] = buf[j];//копируем его
				}
				else tmp_result[count][j - (i - length) - 1] = 0;//копируем его
			}
			tmp_result[count][length] = 0;//на конце строки нолик
			length = 0;//начинаем заного
			count++;//вновь будем заполять новую подстроку
		}
	}
	*result = tmp_result;//возвращаем
}