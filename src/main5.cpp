
#include <iostream> 
<<<<<<< HEAD
#include <task5.h> 
=======
#include <task4.h> 
>>>>>>> d1230de8148b354d8de3829749841363d285e681

using namespace std;
int main()
{
<<<<<<< HEAD
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
=======
	char *mas1 = new char[100000];
	char *mas2 = new char[100000];
	cout << "Enter string1:" << endl;
	cin >> mas1;
	cout << "Enter string2:" << endl;
	cin >> mas2;
	cout <<sum(mas1, mas2) ;
	_getch();
>>>>>>> d1230de8148b354d8de3829749841363d285e681
	return 0;
}