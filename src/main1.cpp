
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
<<<<<<< HEAD
=======
	getch();
>>>>>>> d1230de8148b354d8de3829749841363d285e681
	return 0;
}