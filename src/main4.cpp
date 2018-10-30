#include <iostream>
#include <cstring>
#include <algorithm>
#include <task4.h>

int main()
{
	int c ;
	char a[] = "564564536", b[] = "1532452321";
	char *x = a, *y = b;
	std::cout << sum(x, y) << std::endl;
	std::cin >> c;
    return 0;
}
