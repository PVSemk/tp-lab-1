#include <task1.h>

unsigned int __gcd (unsigned int a, unsigned int b){
    return (b ? __gcd (b, a % b) : a);
}

unsigned long findValue (unsigned int min, unsigned max){

    unsigned long lcm = 1;

    for (auto i = min; i <= max; i++)
        lcm = (lcm * i)/__gcd(lcm, i);

    return lcm;

}
