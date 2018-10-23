#include <task5.h>

int main()
{
    char *buf="1.6.7";
    int N=0;
    char **result=nullptr;
    char ch = '.';


    split(&result, &N, buf, ch);
    cout<<N<<endl;
    cout<<result<<endl;
    cout<<result[0]<<" "<<result[1]<<" "<<result[2];
    return 0;
}