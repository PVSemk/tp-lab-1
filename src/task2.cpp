#include <task2.h>

#include <vector>

#define SIZE 20000


// Проверка простоты числа
bool checkPrime(unsigned int value)
{
    // Убираем неинтересные варианты
    if (value == 0 || value == 1)
        return false;
    // Любое составное число меньше value содержит хотя бы один делитель
    // Который не превышает sqrt(value)
    // Поэтому достаточно пробежать все числа от 2 до sqrt(value)
    for(unsigned int i = 2; i*i <= value; i++)
        if (value % i == 0)
            return false;
    return true;
}

// Поиск n-го простого числа
// Используется решето Эратосфена
unsigned long long nPrime(unsigned n)
{
    // Создаем вектор, состоящий из единиц - сигнализаторов того, что число простое
    std::vector<bool> list(SIZE+1, true);
    unsigned count(0);
    // Убираем неинтересные варианты
    list[0] = list[1] = false;
    for (auto i(2); i <= SIZE; i++)
    {
        // Если на i-ой позиции стоит 1, то i - простое число
        if (list[i])
        {
            // Останавливаемся, когда нашли count-ое простое число
            if (++count == n)
                return i;
            // Все составные числа до i^2 будут зачеркнуты до этого момента
            for (auto k = i*i; k <= SIZE; k += i)
                list[k] = false;
        }
    }
    return 0;
}

// Поиск следующего простого числа, которое больше value
unsigned long long nextPrime(unsigned long long value)
{
    do
        value++;
    while (!checkPrime(value));
    return value;
}