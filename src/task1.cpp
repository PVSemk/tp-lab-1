#include <task1.h>

unsigned long findValue(unsigned int min, unsigned int max) {
    unsigned long n = max;
    while (n < pow(2, sizeof(unsigned long int))-1) {
        for (int i = min; i <= max; i++) {
            if (n % i != 0)
                break;
        }
    }
}