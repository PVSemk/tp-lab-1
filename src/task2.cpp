#include <task2.h>
#include <vector>
#define SIZE 20000

bool checkPrime(unsigned int value)
{
    if (value == 0 || value == 1)
        return false;
    for(unsigned int i = 2; i*i <= value; i++)
        if (value % i == 0)
            return false;
    return true;
}

unsigned long long nPrime(unsigned n)
{
    std::vector<bool> list(SIZE+1, true);
    unsigned count(0);
    list[0] = list[1] = false;
    for (auto i(2); i <= SIZE; i++)
    {
        if (list[i])
        {
            if (++count == n)
                return i;
            for (auto k = i*i; k <= SIZE; k += i)
                list[k] = false;
        }
    }
    return 0;
}

unsigned long long nextPrime(unsigned long long value)
{
    do
        value++;
    while (!checkPrime(value));
    return value;
}