#include <task5.h>
#include <iostream>

using namespace std;

int main()
{
	char buf[] = "1,32,479";
	int N = 0;
	char **result = nullptr;

	split(&result, &N, buf, ',');

	cout << endl <<  "adress res: " << result <<endl;

	cout << "result[0] - " << result[0] << " | result[1] - " << result[1] << " | result[2] - " << result[2] << endl;
}