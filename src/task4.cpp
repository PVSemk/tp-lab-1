#include <task4.h>

vector<short> getV (char *x){

    vector<short> ans;
    int i = 0;
    while (x[i] != '\0'){
        ans.push_back((short)(x[i] - 48));
        i++;
    }

    reverse(ans.begin(), ans.end());

    return ans;

}

char * sum (char *x, char *y) {

    vector<short> a = getV(x), b = getV(y);
    vector<short> ans;

    short r = 0;

    for (int i = 0; i < max(a.size(), b.size()); i++){

        short cur = 0;

        if (i < a.size())
            cur += a[i];

        if (i < b.size())
            cur += b[i];

        ans.push_back((short)((r + cur) % 10));
        r = (short)((r + cur)/10);

    }

    if (r != 0)
        ans.push_back(r);

    char * q = (char *) malloc(sizeof(char) * (ans.size() + 1));

    for (int i = ans.size() - 1; i >= 0; i--)
        q[ans.size() - 1 - i] = (char)(ans[i] + 48);

    q[ans.size()] = '\0';

    return q;

}