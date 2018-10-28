
#include <iostream> 
#include <task4.h> 

using namespace std;
int main()
{
	char *mas1 = new char[100000];
	char *mas2 = new char[100000];
	cout << "Enter string1:" << endl;
	cin >> mas1;
	cout << "Enter string2:" << endl;
	cin >> mas2;
	cout <<sum(mas1, mas2) ;
<<<<<<< HEAD
=======
	_getch();
>>>>>>> d1230de8148b354d8de3829749841363d285e681
	return 0;
}