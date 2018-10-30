#include "../include/task2.h"

//ѕроверка числа на простоту
bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i*i <= value; ++i)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

//Ќахождение n - ого простого числа(в р€ду)
unsigned long long nPrime(unsigned int n)
{
	unsigned int value = 1;//Ќаше измен€емое значение, которое будет помогать искать простые числа
	unsigned int counter = 0;//—четчик найденных простых чисел
	while (counter < n)//ƒо тех пор, пока не найдем нужное количество простых чисел, будем выполн€ть нижеописанные действи€
	{
		++value;//—разу увеличить счетчик (нам понадобитьс€ в каждой итерации). ѕочему сразу - потому что 1 нет смысла рассматривать, сразу перейдем на 2.
		if (checkPrime(value)) counter++; //≈сли нашли простое число - прибавили счетчик. ¬се просто!
	}
	return value;
}

//Ќахождение ближайшего следующего простого числа к value.
unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long next_prime_num = value;
	while (!checkPrime(++next_prime_num));
	return next_prime_num;
}