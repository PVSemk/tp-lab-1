
#include <iostream> 
#include "task5.h" 


using namespace std;


int main()
{
	int N = NULL;
	char **result = nullptr;
	const char *buf = "123,456,789";


	split(&result, &N, buf, ',');

	cout << N << endl;

	for (int i = 0; i < N; i++)
		cout << result[i] << endl;

	return NULL;
}