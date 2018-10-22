//
// Created by Константин Чернышев on 10.10.18.
//

#include <cstring>
#include <iostream>
#include <cstdlib>
#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {

    int len = (int)strlen(buf);
    *N = 1;
    for (int i = 0; i < len; i++) {
        if (buf[i] == ch) {
            (*N)++;
        }
    }

    char * newBuf = (char * ) std::malloc( (len + 1)* sizeof(char) );

    *result = (char **) std::malloc( (*N) * sizeof(char*) );


    int size = 1;
    *(*result + 0) = newBuf;
    for (int i = 0; i < len; i++) {
        newBuf[i] = buf[i];
        //std::cout << newBuf[i] << std::endl;
        if (newBuf[i] == ch) {
            *(newBuf + i) = '\0';
            *(*result + size) = newBuf + i + 1;
            size++;
        }
    }
    newBuf[len] = '\0';

}
