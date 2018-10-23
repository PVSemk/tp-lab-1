#include "task1.h";
#include <iostream>;

int main()
{
	unsigned int min, max;
	std::cin >> min >> max;
	unsigned long res = findValue(min, max);
	std::cout << res;
}