//
// Created by Константин Чернышев on 10.10.18.
//

//#include <task1.h>

unsigned long nod(unsigned long a, unsigned long b) {
    unsigned long t;


    while (a != b) {
        if (a > b) {
            t = a;
            a = b;
            b = t;
        }

        b = b - a;
    }

    return a;
}



unsigned long findValue(unsigned int min, unsigned max) {
    unsigned long long s = min;

    for (unsigned int i = min; i <= max; i++) {
        s *= i / nod(i, s);
    }

    return s;
}