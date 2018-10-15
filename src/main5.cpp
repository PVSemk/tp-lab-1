//
// Created by Константин Чернышев on 10.10.18.
//

#include <iostream>
#include <task5.h>

int main() {
    std::cout << "Task 5" << std::endl;
    char * pp = "12345";
    std::cout << strlen(pp) << std::endl;

    char *buf="123,456,789";
    char **result1=nullptr;
    int n1;
    split(&result1, &n1, buf, ',');
    std::cout << "-----" << std::endl;
    std::cout << n1 << std::endl;

    for (int i = 0; i < n1; i++) {
        std::cout << result1[i] << std::endl;
    }

    char * s = "1asdf.2asdf.3asd";
    char ** result;
    int n;

    split(&result, &n, s, '.');

    std::cout << "-----" << std::endl;
    std::cout << n << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << result[i] << std::endl;
    }
    return 0;
}