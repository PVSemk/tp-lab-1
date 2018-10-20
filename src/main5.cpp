#include "task5.h"
#include <iostream>

using namespace std;


int main()
{	
	char **result = nullptr;
	int N = 0;
	const char *buf = "123,456,789";


	split(&result, &N,buf, ',');
	cout << N << endl;
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
	getchar();
	
	return 0;
}