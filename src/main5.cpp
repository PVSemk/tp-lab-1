#pragma once

#include <iostream>
using namespace std;

#include "../include/task5.h"
#include "task5.cpp"

int main()
{
	char buf[] = "123,456,789";
	int N = 0;
	char** result = nullptr;

	split(&result, &N, buf, ',');

	cout << "N = " << N << endl;

	for (int i = 0; i<N; i++) cout << result[i] << endl;
	return 0;
}