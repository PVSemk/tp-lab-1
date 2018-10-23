#include "../include/task5.h"
int main()
{
	setlocale(LC_ALL, "rus");
	int N = 0;
	char str[30];
	char** ptr_res = NULL;
	char ch;
	cout << "Введите строку\n";
	cin >> str;
	cout << "Введите разделитель\n";
	cin >> ch;
	split(&ptr_res, &N, &str[0], ch);
	for (int i = 0; i<N; i++) cout << ptr_res[i] << '\n';
	system("pause");
	return 0;
}