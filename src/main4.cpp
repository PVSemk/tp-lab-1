#include <iostream>
#include <cstring>
#include <algorithm>
#include <task.4h>

int main() {
	char aa[] = "99999999999999999999", bb[] = "1";
	char *a = aa, *b = bb;
	std::cout << "sum(99999999999999999999,1)=" << sum(a, b) << std::endl;
}