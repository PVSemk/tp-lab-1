#include <iostream>
#include "task5.h"
using namespace std;

int main() {
	char *buf = new char[255];
	cin.getline(buf, 255);
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	for (int i = 0; i < N; i++) cout << result[i] << endl;
}
