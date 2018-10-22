//
// Created by Константин Чернышев on 10.10.18.
//

#include "task4.h"
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <ldap.h>


char * sum(char * x, char * y) {
    size_t xLen = strlen(x);
    size_t yLen = strlen(y);

    size_t len = (xLen > yLen ? xLen : yLen) + 2;

    char * z = (char*) malloc(len);
    z[len - 1] = 0;


    int extraOne = 0;
    int sum;

    char* xPointer = x + xLen - 1;
    char* yPointer = y + yLen - 1;
    char* zPointer = z + len - 2;
    while (x <= xPointer || y <= yPointer) {
        sum = ((x <= xPointer) ? *xPointer - '0' : 0) + ((y <= yPointer) ? *yPointer - '0' : 0) + extraOne;

        *zPointer = (char)(sum % 10 + '0');
        extraOne = sum / 10;

        xPointer--, yPointer--, zPointer--;
    }

    if (extraOne > 0) {
        *zPointer = '1';
    }
    else {
        memmove(z, z + 1, len - 1);
    }


    return z;
}