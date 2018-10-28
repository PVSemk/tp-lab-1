
#include <iostream> 
#include <task5.h> 

using namespace std;
int main()
{
	char buf[1000];
	char **result;
	int N=0;
	char ch;
	cout << "Enter string:" << endl;
	cin >> buf;
	cout << "Enter sign:" << endl;
	cin >> ch;
	split(&result, &N, buf, ch);
	cout << N << endl;
	for (int i = 0; i < N; i++){
		cout << result[i] << endl;
	}
	return 0;
}