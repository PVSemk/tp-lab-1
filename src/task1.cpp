#include <task1.h>
#include <iostream>
using namespace std;

unsigned long nod(unsigned long a,unsigned long b)
{
    if (b==0)
        return a;
    else
        return nod(b, a % b);
}

unsigned long findValue(unsigned int min, unsigned max)
{
    unsigned long value(min);
    for (unsigned int i(min); i <= max; i++)
    {
        value = value * i / nod(value, i);
    }
    return value;
}

