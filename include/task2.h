//
// Created by Константин Чернышев on 10.10.18.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <vector>

std::vector<bool> sieveRatosthenes(unsigned long long n);

bool checkPrime(unsigned int value); // проверка числа на простоту.
unsigned long long nPrime(unsigned n); //нахождение n-ого простого числа (в ряду).
unsigned long long nextPrime(unsigned long long value); //нахождение ближайшего следующего простого числа к value.


#endif //TASK1_TASK2_H
