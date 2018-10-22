#include <task2.h>

unsigned long long euclid_gcd(unsigned long long first, unsigned long long second){
    while (first != second) {
        if (first > second) {
            first -= second;
        } else {
            second -= first;
        }
    }
    return first;
}

bool checkPrime(unsigned long long value) {
    if (value == 1) {
        return false;
    } else if (value == 2) {
        return true;
    } else {
        for (unsigned int i = 2; i <= (unsigned int) (sqrt(value) + 1); i++) {
            if (euclid_gcd(i, value) != 1) {
                return false;
            }
        }
        return true;
    }
}

unsigned long long nextPrime(unsigned long long value){
    value++;
    while (value <= ULLONG_MAX) {
        if (checkPrime(value)) {
            return value;
        } else
        value++;
    }
    return NAN;
}

unsigned long long nPrime(unsigned long long n) {
    if (n == 1) {
        return 2;
    } else {
        unsigned long long number = 2;
        unsigned long long prob_prime = 3;
        while ((number != n) && prob_prime != NAN) {
            prob_prime = nextPrime(prob_prime);
            number++;
        }
        if ((prob_prime != NAN) && (number == n)) {
            return prob_prime;
        } else {
            return  NAN;
        }
    }
}
