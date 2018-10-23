#include "../include/task3.h"
int main()
{
	setlocale(LC_ALL, "rus");
	unsigned long long sum;
	unsigned int hbound;
	cout << "Введите верхнюю границу суммы\n";
	cin >> hbound;
	sum = sumPrime(hbound);
	cout <<"Сумма всех простых чисел до "<<hbound<<" равна "<<sum<< "\n";
	system("pause");
	return 0;
}