#include <task2.h>



bool checkPrime(unsigned int n) {
    unsigned int a;
    if (n == 2) return true;
    for (a = 2; a <= sqrt(n); a++) {
        if ( n % a == 0 ) break;
    }
    return (n % a != 0 && n != a);
}

unsigned long long nPrime(unsigned n){
    vector <char> a;
    unsigned long long  len = 2000001, primeC = 0;

    for (unsigned long long i = 0; i < len + 1; i++)
        a.push_back(true);

    a[1]=a[0]=false;
	
	//using the Eratosthenes sieve, we find the n-th Prime
    for (unsigned long long p = 2; p < len + 1; p++)
    {
        if (a[p])
        {
            if (primeC == n - 1){
                return p;
            }
            primeC++;
            for (unsigned long long j = p*p; j < len + 1; j += p)
                a[j] = 0;
        }
    }
}

unsigned long long nextPrime(unsigned long long value){
    vector <char> a, simple;

    unsigned long long  len = 2000001;
    for (unsigned long long i = 0; i < len + 1; i++)
        a.push_back(true);

    a[0]=a[1]=false;
	
	//using the sieve of Eratosthenes, we find the following p
	
    for (unsigned long long p = 2; p < len + 1; p++)
    {
        if (a[p])
        {
            if (p > value){
                return p;
            }
            for (unsigned long long j = p*p; j < len + 1; j += p)
                a[j] = 0;
        }
    }
}