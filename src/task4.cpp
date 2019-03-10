#include <task4.h>

#include <vector>
#include <cstring>
#include <algorithm>


// Сумма двух сверхдлинных чисел, заданных строками
char * sum(char *x, char *y)
{
    std::vector <char> num_1, num_2, ans;

    // Перезаписываем строки в вектора, начиная с конца
    for (long i(strlen(x) - 1); i >= 0; i--)
        num_1.push_back(x[i]);

    for (long i(strlen(y) - 1); i >= 0; i--)
        num_2.push_back(y[i]);

    size_t len;
    int addOne(0);
    // Определяем какое число длиннее, оно будет задавать длину искомой суммы
    len = strlen(x) > strlen(y) ? strlen(x) : strlen(y);
    for (int i(0), sum(0); i < len; i++)
    {
        // Суммируем соответствующие цифры каждого числа и переносим единицу при необходимости
        // Если одно из чисел закончилось, берется 0
        sum = (i < strlen(x) ? num_1[i] - 48 : 0) + (i < strlen(y) ? num_2[i] - 48 : 0) + addOne;
        // Ответ получается перевернутым
        ans.push_back(char(sum % 10 + 48));
        addOne = sum / 10;
    }
    // Если после окончания суммирования остается неучтенная единица, дописываем ее
    if (addOne)
        ans.push_back(char(addOne + 48));
    // Переворачиваем ответ и копируем его в строку
    reverse(ans.begin(), ans.end());
    char* out = new char[ans.size() + 1];
    std::copy(ans.begin(), ans.end(), out);
    out[ans.size()] = '\0';
    return out;
}