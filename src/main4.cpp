#include "../include/task4.h"
int main()
{
	setlocale(LC_ALL, "rus");
	char* x = new char[21];
	char* y = new char[21];
	char * S;
	for (int i = 0; i < 20; i++) {
		x[i] = '0';
		y[i] = '0';
	}
	cout << "Введите первое число\n";
	cin >> x;
	cout << "Введите второе число\n";
	cin >> y;
	S = sum(x, y);
	cout << "Результат сложения:\n" << S << "\n";


	system("pause");
	return 0;
}