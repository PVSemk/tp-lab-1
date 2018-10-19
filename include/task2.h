#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <cmath>
#include <climits>

/**
 * Euclid's algorithm to find greatest common divider of "first" and "second"
 */
unsigned long long euclid_gcd (unsigned long long first, unsigned long long second);

/**
 * Check whether unsigned int "value" is a prime number
 */
bool checkPrime(unsigned long long value);

/**
 * Find smallest prime number greater that the given "value"
 */
unsigned long long nextPrime(unsigned long long value);

/**
 * Find n-th prime number in the multitude of natural numbers
 */
unsigned long long nPrime(unsigned long long n);

#endif
