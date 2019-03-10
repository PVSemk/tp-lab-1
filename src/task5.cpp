#include <task5.h>
#include <cstring>
#include <iostream>
#include <cstdlib>


void split(char ***result, int *N, char *buf, char ch)
{
    int len = (int)strlen(buf);
    *N = 1;
    for (int i(0); i < len; i++)
    {
        if (buf[i] == ch)
            (*N)++;
    }
    *result = new char*[*N]; // Array of N char*
    char* tmp = new char[len];
    **result = tmp;
    for (int i(0), shift(1); i < len; i++)
    {
        tmp[i] = buf[i];
        if (tmp[i] == ch)
        {
            tmp[i] = '\0';
            *(*result + shift) = tmp + i + 1;
            shift++;
        }
    }
    tmp[len] = '\0';
}
