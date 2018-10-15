//
// Created by Константин Чернышев on 10.10.18.
//

#include <iostream>
#include <task4.h>


int main() {
    std::cout << "Task 4" << std::endl;


    char *x1 = "123456789";
    char *y1 = "000000001";
    std::cout << sum(x1, y1) << std::endl;

    char *x2="99999999999999999999";
    char *y2="1";
    std::cout << sum(x2, y2) << std::endl;



    char x[100];
    char y[100];
    std::scanf("%s", x);
    std::scanf("%s", y);

    std::cout << sum(x, y) << std::endl;


    return 0;
}