#include <iostream>

using namespace std;

int main()
{
	char buf[] = "123 32 47549 1";
	int N = 0;
	char **result = nullptr;

	split(&result, &N, buf, ' ');

	cout << "0 - " << result[0] << " 1 - " << result[1] << " 2 - " << result[2] << " 3 - " << result[3] << endl;

	cout << "N: " << N;
}