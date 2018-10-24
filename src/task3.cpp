#include "../include/task3.h"

unsigned long long sumPrime(unsigned int hbound) //сумма всех простых чисел до hbound (не включая его)
{
	unsigned long long int sum = 0;
	//hbound - Предел количества простых чисел, сумму которых мы хотим рассмотреть (max_amount_of_primes)
	for (unsigned int i = 2; i < hbound; i++)
	{
		if (checkPrime(i)) sum += i;
	}
	return sum;
}