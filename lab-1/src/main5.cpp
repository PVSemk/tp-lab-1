include "../include/task5.h"
int main()
{
	setlocale(LC_ALL, "rus");
	int N = 0;
	char str[30];
	char* result[30];
	char** ptr_res = &result[0];
	char ch;
	cout << "Введите строку\n";
	cin >> str;
	cout << "Введите разделитель\n";
	cin >> ch;
	split(&ptr_res, &N, &str[0], ch);
	for (int i=0;i<(N+1);i++) cout << result[i]<<'\n';
	system("pause");
	return 0;
}