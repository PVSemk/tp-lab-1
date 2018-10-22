#include "task5.cpp"

int main() {

    int * N = (int *)malloc(sizeof(int));
    char * buf = "H e l l o";
    char ch = '_';
    char ** result;
    split (&result, N, buf, ch);

    for (int i = 0; i < *N; i++){
        int j = 0;
        while (result[i][j] != '\0'){
            cout << result[i][j];
            j++;
        }
        cout << "\n";
    }
}