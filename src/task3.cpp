#include <task2.h>
#include <task3.h>

unsigned long long sumPrime(unsigned int hbound){
    vector <char> a;
    unsigned long long  len = hbound, s = 0;
    for (unsigned long long i = 0; i < len + 1; i++)
        a.push_back(true);
    a[0] = a[1] = false;
	
	//sieve of Eratosthenes
    for (unsigned long long p = 2; p < len + 1; p++)
    {
        if (a[p])
        {
			//if the number is a multiple of a Prime, it is not Prime
            s = s + p;
            for (unsigned long long j = p*p; j < len + 1; j += p)
                a[j] = false;
        }
    }
    return s;
}
