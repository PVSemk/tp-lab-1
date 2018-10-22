#include <task4.h>
#include <iostream>
#include <cstdlib>

int main() {
    char *first = "123456789", *second = "000000001";
    char *summ = sum(first, second);
    char *expected="123456790";
//    std::cout << summ << std::endl;
    printf("%s\n", summ);
    printf("%s\n", expected);
    return 0;
}
