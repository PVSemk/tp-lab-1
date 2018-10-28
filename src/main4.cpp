
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
	return 0;
}