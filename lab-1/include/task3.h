#include <iostream>
using namespace std;
unsigned long long sumPrime(unsigned int hbound);// сумма всех чисел до hbound(не включая его)
bool checkPrime(unsigned int value); //проверка числа на простоту.
unsigned long long nPrime(unsigned n);// нахождение n - ого простого числа(в ряду).
unsigned long long nextPrime(unsigned long long value); //нахождение ближайшего следующего простого числа к value.
