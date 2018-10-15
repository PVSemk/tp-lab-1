//
// Created by Константин Чернышев on 10.10.18.
//

#include <iostream>
#include <vector>
#include <task2.h>


int main() {
    std::cout << "Task 2" << std::endl;

    unsigned int n = 30;
    std::vector<bool> sieve = sieveRatosthenes(n);

    for (unsigned int i = 0; i < sieve.size(); i++) {
        std::cout << i << ':' << sieve[i] << ' ';
    }
    std::cout << std::endl;


    std::cout << checkPrime(2) << std::endl;
    std::cout << checkPrime(3) << std::endl;
    std::cout << checkPrime(12) << std::endl;

    std::cout << nPrime(6) << std::endl;
    std::cout << nPrime(500) << std::endl;

    std::cout << nextPrime(1031) << std::endl;
    std::cout << nextPrime(3559) << std::endl;
    std::cout << nextPrime(2) << std::endl;

    return 0;
}