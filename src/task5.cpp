#include <task5.h>

#include <cstring>
#include <iostream>
#include <cstdlib>


// Разделение строки на подстроки по разделителю
void split(char ***result, int *N, char *buf, char ch)
{
    // Высчитываем длину первоначальной строки и количество будующих подстрок
    int len = (int)strlen(buf);
    *N = 1;
    for (int i(0); i < len; i++)
    {
        if (buf[i] == ch)
            (*N)++;
    }

    *result = new char*[*N]; // Массив из N указателей на char
    char* tmp = new char[len];
    // Ставим начало первой подстроки в начало tmp
    **result = tmp;
    // Копируем строку до разделителя
    for (int i(0), shift(1); i < len; i++)
    {
        tmp[i] = buf[i];
        // Ставим на место разделителя символ конца строки
        // Ставим начало следующей подстроки на позицию после найденного разделителя
        if (tmp[i] == ch)
        {
            tmp[i] = '\0';
            *(*result + shift) = tmp + i + 1;
            shift++;
        }
    }
    // Ставим \0 в конец последней найденной подстроки
    tmp[len] = '\0';
}
