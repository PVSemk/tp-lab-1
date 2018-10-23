#include "../include/task1.h"
int main()
{
	setlocale(LC_ALL ,"rus");
	unsigned long a;
	unsigned int min;
	unsigned int max;
	cout << "Введите минимальное значение диапазона\n";
	cin >> min;
	cout << "Введите максимальное значение диапазона\n";
	cin >> max;
	a = findValue(min, max);
	cout<<a <<" делится на все числа из диапазона ["<<min<<"..."<<max<<"] без остатка\n";
	system("pause");
	return 0;
}