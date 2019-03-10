#include <task3.h>
#include <vector>

unsigned long long sumPrime(unsigned int hbound)
{

    std::vector<bool> list(hbound, true);
    list[0] = list[1] = false;
    unsigned long long sum = 0;
    for (unsigned i(2); i < hbound; i++)
    {
        if (list[i])
        {
            sum += i;
            for (unsigned k = i*i; k < hbound; k += i)
                list[k] = false;
        }
    }
    return sum;
}
