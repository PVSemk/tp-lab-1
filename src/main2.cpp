#include <iostream>
#include "task2.h"

using namespace std;

int main(){

    unsigned int value;
    cout << "Enter value: ";
    cin >> value;
    cout << endl << checkPrime(value) << endl;

    unsigned n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl << nPrime(n) << endl;

    unsigned long long nValue;
    cout << "Enter value: ";
    cin >> nValue;
    cout << endl << nextPrime(nValue) << endl;
    return 0;

}
