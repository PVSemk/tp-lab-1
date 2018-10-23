#include <iostream>
#include "task4.h"
using namespace std;

int main() { 
	char *x = new char[255]; 
	cin.getline(x, 255);
	char *y = new char[255];
	cin.getline(y, 255);
	char *z = sum(x, y);
}