//
// Created by Константин Чернышев on 10.10.18.
//

#include <vector>
#include <climits>
#include <iostream>
#include <task2.h>

std::vector<bool> sieveRatosthenes(unsigned long long n) {
    std::vector<bool> prime (n+1, true);
    prime[0] = false;
    prime[1] = false;

    for (unsigned long long i = 2; i <= n; i++) {
        if (prime[i]) {
            if ((unsigned long long)i * i <= n) {
                for (unsigned long long j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }
    }

    return prime;
}


bool checkPrime(unsigned int value) {
    std::vector<bool> prime = sieveRatosthenes(value);

    return prime[value];
}

unsigned long long nPrime(unsigned n) {
    std::vector<bool> prime = sieveRatosthenes(4048);

    unsigned long long i = 0;
    unsigned long long num = 0;

    while(num < n) {

        if (prime[i]) {
            num++;
        }
        i++;
    }



    return i - 1;

}

unsigned long long nextPrime(unsigned long long value) {
    std::vector<bool> prime = sieveRatosthenes(4048);

    unsigned long long i = value + 1;

    while(!prime[i]) {
        i++;
    }

    return i;

}