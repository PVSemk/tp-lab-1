#include <task3.h>

#include <vector>


// Ищем сумму простых чисел, меньших hbound
unsigned long long sumPrime(unsigned int hbound)
{
    // Используем решето Эратосфена
    std::vector<bool> list(hbound, true);
    list[0] = list[1] = false;
    unsigned long long sum = 0;
    for (unsigned long long i(2); i*i < hbound; i++)
    {
        if (list[i])
        {
            sum += i;
            for (unsigned long long k = i*i; k < hbound; k += i)
                list[k] = false;
        }
    }
    return sum;
}
