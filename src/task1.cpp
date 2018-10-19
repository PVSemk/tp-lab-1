#include <task1.h>

unsigned long int findValue(unsigned int min, unsigned int max) {
    unsigned long int value = min;
    unsigned long int product = 1;
    for (unsigned int i = min; i <= max; i++) {
        if (product < (ULONG_MAX)/i) {
            product *= i;
        } else {

        }
    }
    while (value <= product) {
        bool correct = true;
        for (unsigned long int i = min; i <= max; i++) {
            if (value % i != 0)
                correct = false;
        }
        if (correct) {
            return value;
        } else {
            value++;
        }
    }
    return NAN;
}
