#include "task5.h"


int main() 
{
	int N = 0;
	char buf[] = "123,456,789";
	char ch = ',';
	char **result = nullptr;

	split(&result, &N, buf, ch);


	for (int i = 0; i < N; i++) {
		int j = 0;
		while (result[i][j] != '\0') {
			cout << result[i][j];
			j++;
		}
		cout << endl;
	}
	system("pause");
}