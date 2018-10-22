#include "task4.cpp"

int main(){

    char *x = (char *)malloc(sizeof(char) * 100000);
    char *y = (char *)malloc(sizeof(char) * 100000);
    cin >> x >> y;
    cout << sum (x, y);

}