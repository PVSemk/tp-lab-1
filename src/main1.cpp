
#include <iostream> 
#include "task1.h"

using namespace std;
int main()
{
	int min, max;
	unsigned long res;
	cout << "Enter min" << endl;
	cin >> min;
	cout << "Enter max" << endl;
	cin >> max;
	res = findValue(min, max);
	cout << res << endl;
	return 0;
}