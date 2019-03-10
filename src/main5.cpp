#include "task5.h"
#include <iostream>

int main() {
    char *buf="aaa.bbb.ccc.ddd";
    char **result;
    int count;
    split(&result, &count, buf, '.');
    std::cout << count << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << result[i] << std::endl;
    }
    return 0;
}