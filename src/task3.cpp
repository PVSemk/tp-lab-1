//
// Created by Константин Чернышев on 10.10.18.
//


#include <task2.h>
#include <task3.h>

unsigned long long sumPrime(unsigned int hbound) {

    std::vector<bool> prime = sieveRatosthenes(hbound);

    unsigned long long s = 0;
    for (unsigned int i = 0; i < hbound; i++) {
        if (prime[i]) {
            s += i;
        }
    }

    return s;
}