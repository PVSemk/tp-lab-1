#include <task1.h>
#include <iostream>
using namespace std;
// Ищем НОД
unsigned long nod(unsigned long a,unsigned long b)
{
    if (b==0)
        return a;
    else
        return nod(b, a % b);
}
// Пробегаем по диапазону и находим НОК для каждого числа по очереди
unsigned long findValue(unsigned int min, unsigned max)
{
    // Очевидно, искомое число не может быть меньше
    // Чем минимальное число из диапазона
    unsigned long value(min);
    for (unsigned int i(min); i <= max; i++)
    {
        // Находим НОК по формуле
        value = value * i / nod(value, i);
    }
    return value;
}

