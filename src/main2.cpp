include "../include/task2.h"
int main()
{
	setlocale(LC_ALL, "rus");
	unsigned int a;
	unsigned int n;
	unsigned long long q;
	unsigned long long b,next_b;
	cout << "Проверка на простоту:\n";
	cout << "Введите число\n";
	cin >> a;
	if(checkPrime(a)==true)cout<<"Число простое\n";
	else cout << "Число составное\n";
	cout << "Нахождение ближайшего следующего простого числа к value:\n";
	cout << "Введите любое число\n";
	cin >> b;
	next_b = nextPrime(b);
	cout << "Ближайщее простое число к " << b << " " << next_b << "\n";
	cout << "нахождение n - ого простого числа(в ряду):\n";
	cout << "Введите номер простого числа\n";
	cin >> n;
	q = nPrime(n);
	cout << n<<" число в ряду равно " << q << "\n";
	system("pause");
    return 0;
}