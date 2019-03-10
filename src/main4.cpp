#include "task4.h"
#include <iostream>
int main()
{
    char x[3] = "15";
    char y[3] = "21";
    std::cout << sum(x, y) << std::endl;
    char b[4] = "999";
    char a[2] = "1";
    std::cout << sum(a,b) << std::endl;

    return 0;
}