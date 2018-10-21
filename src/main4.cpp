#include "task4.h"
#include <iostream>
using namespace std;

int main()
{
	const char *x = "123456789";
	const char *y = "000000001";
	cout << "sum is ";
	char *z=sum(x, y);
	cout << z << " !"<<endl;
	getchar();
	
	return 0;
}