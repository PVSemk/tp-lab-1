#include "../include/task1.h"

using namespace std;

unsigned long findValue(unsigned long min, unsigned long max)
{
	const unsigned long maximum = 1000000000;//До скольки будем проходить,
	for (unsigned long number = 1; number <= maximum; number++)//Искомое число
	{
		bool divide = false;
		for (unsigned long digit = min; digit < max; digit++)//Наш диапазон
		{
			if (number == digit) { divide = true; continue; }
	
			if (number % digit != 0)
			{
				divide = false;
				break;
			}
			divide = true;
		}
		if (divide == true)//Если после прохождения всех чисел divide так и остался true
		{
			return number;//Значит мы нашли число, и возвращаем его
		}
	}
	return 0;
}