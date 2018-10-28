<<<<<<< HEAD

#include <iostream>
 
using namespace std;
void split(char ***result, int *N, const char *buf, char ch)
{
	int n = 0;
	int len = strlen(buf);
	for (int i = 0; i<len; i++)
	{
		if (ch == buf[i]) ++n;
	}
	char *str = new char[len];
	str[len] = NULL;
	(*result) = new char*[n + 1];
	(*result)[0] = str;
	n = 1;
	for (int i = 0; i < len; i++)
	{
		str[i] = buf[i];
		if (buf[i] == ch)
		{
			(*result)[n] = str + (i + 1);
			str[i] = NULL;
			++n;
		}
	}
	*N = n;
}
=======
// task4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
#include "conio.h" 

using namespace std;

char * sum(char *x, char *y){
	int length;
	int n;
	int len_x = strlen(x) - 1, len_y=strlen(y)-1;
	if (strlen(x) > strlen(y)) length = strlen(x);
	else length = strlen(y);
	char *mas = new char[length];
	for (int i = 0; i <= length; i++){
		mas[i] = '0';
	}
	for (int i = length; i > 0; i--){
		if ((len_x >= 0) && (len_y >= 0)){
			n = mas[i] - '0' + x[len_x] - '0' + y[len_y] - '0';
			if (n / 10 == 1) mas[i - 1] = '1';
			mas[i] = n % 10 + '0';
		}
		else {
			if (len_x >= len_y) n = mas[i] - '0' + x[len_x] - '0';
			if (len_x < len_y) n = mas[i] - '0' + y[len_y] - '0';
			if (n / 10 == 1) mas[i - 1] = '1';
			mas[i] = n % 10 + '0';
		}
		len_x--;
		len_y--;
	}
	
	if (mas[0] == '0'){
		for (int i = 0; i < strlen(mas); i++){
			mas[i] = mas[i + 1];
		}	
		mas[length] = NULL;
	}
	else mas[length+1] = NULL;
	return mas;
}
	



>>>>>>> d1230de8148b354d8de3829749841363d285e681
