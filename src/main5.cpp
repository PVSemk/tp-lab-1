
#include <iostream> 
#include "task5.h" 


using namespace std;


int main()
{
	int A = NULL;
	char **output = nullptr;
	const char *buffer = "98.765.4321";


	split(&output, &A, buffer, '.');
	cout << A << endl;
	cout << output[0] << endl;
	cout << output[1] << endl;
	cout << output[2] << endl;
	
	return NULL;
}