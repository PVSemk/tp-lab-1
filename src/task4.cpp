#include <task4.h>

char * sum(char *x, char *y){

    vector <char> x1,y1,z1;
	//vector formation
    for (int i = strlen(x) - 1;i > - 1;i--){
        x1.push_back(x[i]);
    }
    for (int i = strlen(y) - 1;i > - 1;i--){
        y1.push_back(y[i]);
    }
    int n = x1.size() - y1.size();
    
	//length alignment
    if (n > 0){
        for (int i = 0; i < abs(n); i++){
            y1.push_back('0');
        }
    }
    if (n < 0){
        for (int i = 0; i < abs(n); i++){
            x1.push_back('0');
        }
    }

	//character-by-character addition
    int sum = 0, stock = 0, m = y1.size();
    for (int i = 0;i<m;i++){
        int xx = x1[i] - 48, yy = y1[i] - 48;
        sum = xx + yy + stock;
        z1.push_back(char(sum%10 + 48));
        stock = sum/10;
    }
    if (stock != 0){
        z1.push_back(char(stock + 48));
        m++;
    }
    reverse(z1.begin(),z1.end());

    char *z = new char[m];
    for (int i = 0;i<m;i++){
        z[i] = z1[i];
    }
    z[m] = '\0';
    return z;
}