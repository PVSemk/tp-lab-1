#include <task5.h>

void split(char ***result, int *N, char *buf, char ch) {

    int n = 0;

    int i = 0;
    while (buf[i] != '\0'){
        if (buf[i] == ch){
            n++;
        }
        i++;
    }

    char *e = (char *)malloc(sizeof(char) * (i + 1));
    (*result) = (char **) malloc(sizeof(char *) * (n + 1));
    i = 0;
    n = 1;
    (*result)[0] = e;
    while (buf[i] != '\0'){
        e[i] = buf[i];
        if (buf[i] == ch){
            (*result)[n] = e + i + 1;
            e[i] = '\0';
            n++;
        }
        i++;
    }

    e[i] = '\0';

    *N = n;

}