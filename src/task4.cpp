
#include <iostream> 

using namespace std;

char * sum(char *x, char *y){
	int length;
	int n;
	int len_x, len_y;
	for (int i=0;x[i]<NULL;i++){
		len_x=i;
	}
	for (int i=0;y[i]<NULL;i++){
		len_y=i;
	}
	if (len_x > len_y) length = len_x+1;
	else length = len_y+1;
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
		for (int i = 0; i < length; i++){
			mas[i] = mas[i + 1];
		}	
		mas[length] = NULL;
	}
	else mas[length+1] = NULL;
	return mas;
}
	



