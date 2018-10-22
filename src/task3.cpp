#include <task3.h>

std::vector<bool> eratosthenes_sieve(unsigned long long h_bound) {
    std::vector<bool> sieve(h_bound+1, true);
    sieve[0] = false;
    sieve[1] = false;
    for (unsigned long long i = 2; i <= h_bound; i++) {
        if (sieve[i]) {
            if (i*i <= h_bound) {
                for (unsigned long long j = i*i; j <= h_bound; j += i) {
                    sieve[j] = false;
                }
            }
        }
    }
    return sieve;
}

unsigned long long sumPrime(unsigned int hbound) {
    std::vector<bool> sieve = eratosthenes_sieve(hbound);
    unsigned long long s = 0;
    for (unsigned long long i = 0; i <= hbound; i++) {
        if (sieve[i]) {
            s += i;
        }
    }
    return s;
}
