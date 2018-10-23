#include <task5.h>

void split(char ***result, int *N, char *buf, char ch){
    size_t n = strlen(buf);
    int count = 0;

    vector <string> vec;
    string str;

    for(int i = 0;i < n; i++){
        if ((buf[i] != ch)){
            str += buf[i];
        }
        if((buf[i] == ch)||(i == n - 1)){
            count++; //number of ch
            vec.push_back(str); //vector with ready strings
            str.clear();
        }
    }

    *N = count;


    char **tmp = new char*[*N]; //pointer to N arrays

    for (int i = 0;i < vec.size(); i++) {
        cout<<(vec[i].length())<<endl;
        tmp[i] = new char[vec[i].length() + 1]; //allocate memory for I array of a certain length
        int j;
        for (j = 0;j < vec[i].length(); j++) {
            tmp[i][j] = vec[i][j];
        }
        tmp[i][j] = '\0';
    }
    *result = &(tmp[0]);
    *N = count;
}