#include <iostream>
#include "task2.h"

int main() {
	std::cout << checkPrime(2) << std::endl;
	std::cout << checkPrime(3) << std::endl;
	std::cout << checkPrime(12) << std::endl;
	std::cout << nPrime(6) << std::endl;
	std::cout << nPrime(500) << std::endl;
	std::cout << nextPrime(1031) << std::endl;
	std::cout << nextPrime(3559) << std::endl;
	std::cout << nextPrime(2) << std::endl;
}