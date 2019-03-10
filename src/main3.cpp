#include "task3.h"
#include <iostream>

using namespace std;

int main()
{
    unsigned int hbound;
    cout << "Enter a value: ";
    cin >> hbound;
    cout << endl << sumPrime(hbound) << endl;
    return 0;
}